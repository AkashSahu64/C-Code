#include <stdio.h>

void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subtractMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int columns1, int columns2)
{
    int i, j, k;
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < columns1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void transposeMatrix(int mat[][100], int transposed[][100], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            transposed[j][i] = mat[i][j];
        }
    }
}
void displayMatrix(int mat[][100], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int mat1[100][100], mat2[100][100], result[100][100], transposed[100][100];
    int rows1, columns1, rows2, columns2;
    int ch;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nOperations Menu:\n");
    printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Transpose\n");
    while (1)
    {
        printf("Enter your choice (1-4): ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (rows1 == rows2 && columns1 == columns2)
            {
                addMatrices(mat1, mat2, result, rows1, columns1);
                printf("\nResultant matrix after addition:\n");
                displayMatrix(result, rows1, columns1);
            }
            else
            {
                printf("Matrix addition is not possible. The matrices should have the same dimensions.\n");
            }
            break;
        case 2:
            if (rows1 == rows2 && columns1 == columns2)
            {
                subtractMatrices(mat1, mat2, result, rows1, columns1);
                printf("\nResultant matrix after subtraction:\n");
                displayMatrix(result, rows1, columns1);
            }
            else
            {
                printf("Matrix subtraction is not possible. The matrices should have the same dimensions.\n");
            }
            break;
        case 3:
            if (columns1 == rows2)
            {
                multiplyMatrices(mat1, mat2, result, rows1, columns1, columns2);
                printf("\nResultant matrix after multiplication:\n");
                displayMatrix(result, rows1, columns2);
            }
            else
            {
                printf("Matrix multiplication is not possible. The number of columns in the "
                       "first matrix should be equal to the number of rows in the second matrix.\n");
            }
            break;
        case 4:
            printf("\nTranspose of the first matrix:\n");
            transposeMatrix(mat1, transposed, rows1, columns1);
            displayMatrix(transposed, columns1, rows1);
            printf("\nTranspose of the second matrix:\n");
            transposeMatrix(mat2, transposed, rows2, columns2);
            displayMatrix(transposed, columns2, rows2);
            break;
        default:
            printf("Invalid option. Please enter a number between 1 and 4.\n");
            break;
        }
        printf("\nDo you want to continue: Press 1 for Continue & Press 0 for Exit\n");
        int choice;
        printf("Press (1/0) : ");
        scanf("%d", &choice);
        if (choice == 0)
        {
            break;
        }
    }
    printf("Thank You !");
    return 0;
}
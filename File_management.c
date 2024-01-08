#include <stdio.h>

void createFile(const char *fileName)
{
    FILE *file = fopen(fileName, "w");
    if (file != NULL)
    {
        printf("File '%s' created successfully.\n", fileName);
        fclose(file);
    }
    else
    {
        printf("Error creating file.\n");
    }
}

void readFile(const char *fileName)
{
    FILE *file = fopen(fileName, "r");
    if (file != NULL)
    {
        printf("Contents of file '%s':\n", fileName);
        char ch;
        while ((ch = fgetc(file)) != EOF)
        {
            putchar(ch);
        }
        fclose(file);
    }
    else
    {
        printf("Error reading file.\n");
    }
}

void updateFile(const char *fileName, const char *newContent)
{
    FILE *file = fopen(fileName, "a");
    if (file != NULL)
    {
        fprintf(file, "%s", newContent);
        printf("File '%s' updated successfully.\n", fileName);
        fclose(file);
    }
    else
    {
        printf("Error updating file.\n");
    }
}

void deleteFile(const char *fileName)
{
    if (remove(fileName) == 0)
    {
        printf("File '%s' deleted successfully.\n", fileName);
    }
    else
    {
        printf("Error deleting file.\n");
    }
}

int main()
{
    const char *fileName = "Akash_File.txt";
    printf("Select anyone file : \n1. Create File \n2. Read File \n3. Update File \n4. Delete File.\n");
    int ch;
    while (1)
    {
        printf("Enter Your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            createFile(fileName);
            break;
        case 2:
            readFile(fileName);
            break;
        case 3:
            updateFile(fileName, "This is some example content.\n");
            break;
        case 4:
            deleteFile(fileName);
            break;
        default:
            printf("Enter valid Number !");
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
    printf("\nThank You Everyone !\n");
    return 0;
}

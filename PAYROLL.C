#include <stdio.h>



int main()

{

   float days=0,rate=0.00,solve_gross=0.00;

   float sss=0.00,pag_ibig=0.00,bir=0.00;

   float philhealth=0.00,solve_net_salary=0.00;

   float total_deductions=0.00;



   system("COLOR F0");

   printf("\n\n");

   printf("\tSIMPLE PAYROLL PROGRAM IN C");

   printf("\n\n");

   printf("\tHow Many Days Work : ");

   scanf("%f",&days);

   printf("\n");

   printf("\tSalary Per Day     : PHP ");

   scanf("%f",&rate);

   printf("\n\n");



   /* Solving Gross Salary Here */



   solve_gross = (days * rate);



   printf("\tGross Salary            : PHP %.2f ",solve_gross);

   printf("\n\n");

   printf("\tSSS Contribution        : PHP ");

   scanf("%f", &sss);

   printf("\tPAG-IBIG Contribution   : PHP ");

   scanf("%f",&pag_ibig);

   printf("\tBIR Contribution        : PHP ");

   scanf("%f",&bir);

   printf("\tPHILHEALTH Contribution : PHP ");

   scanf("%f",&philhealth);



    /* Solving Total Deductions and Net Salary Here */



    total_deductions = (sss+pag_ibig+bir+philhealth);

    solve_net_salary = (solve_gross - total_deductions);



    printf("\n\n");

    printf("\tDisplay Payroll Results");

    printf("\n\n");

    printf("\tGross Salary     : PHP %.2f\n",solve_gross);

    printf("\tTotal Deductions : PHP %.2f\n",total_deductions);

    printf("\n\n");

    printf("\tNet Salary       : PHP %.2f",solve_net_salary);

	printf("\n\n\n");

    printf("\tEND OF PROGRAM");

    printf("\n\n");
    return 0;

    }
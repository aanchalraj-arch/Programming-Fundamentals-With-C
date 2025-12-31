#include <stdio.h>

int main() { 
    char employeeName[50]; 
    float basicSalary;   
    float hra;            
    float da;             
    float grossSalary;    
    float incomeTax;      
    float netSalary;     
    printf("Enter Employee Name: ");
    scanf("%49[^\n]", employeeName); 
    printf("Enter Basic Salary (float): "); 
    scanf("%f", &basicSalary);
    hra = 0.20 * basicSalary; 
    da = 0.10 * basicSalary; 
    grossSalary = basicSalary + hra + da;
    incomeTax = 0.05 * grossSalary;
    netSalary = grossSalary - incomeTax;
    printf("Employee Name: %s\n", employeeName);
    printf("Basic Salary:    %.2f\n", basicSalary);
    printf("HRA (20%%):         %.2f\n", hra);
    printf("DA (10%%):          %.2f\n", da);
    printf("Gross Salary:    %.2f\n", grossSalary);
    printf("Income Tax (5%%): %.2f\n", incomeTax);
    
    printf("Net Salary:      %.2f\n", netSalary);
 

    return 0;
}
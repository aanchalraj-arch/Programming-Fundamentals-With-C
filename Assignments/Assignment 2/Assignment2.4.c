#include <stdio.h>
int main() {
    float balance, interest, maintenanceCharge, bonusFactor;
    printf("Enter initial account balance: ");
    scanf("%f", &balance);
    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    printf("Enter annual maintenance charge to deduct: ");
    scanf("%f", &maintenanceCharge);
    printf("Enter bonus factor to multiply: ");
    scanf("%f", &bonusFactor);
    balance += interest; 
    printf("After adding interest: %.2f\n", balance);
    balance -= maintenanceCharge; 
    printf("After deducting maintenance charge: %.2f\n", balance);
    balance *= bonusFactor; 
    printf("After applying bonus factor: %.2f\n", balance);
    balance /= 2; 
    printf("After dividing between two accounts: %.2f\n", balance);

    return 0;
}

#include <stdio.h>

int main() {
    int units;
    float rate, bill, finalBill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        rate = 3.0;
    } else if (units <= 200) {
        rate = 4.0;
    } else {
        rate = 5.0;
    }
    bill = units * rate;
    if (bill > 1000) {
        finalBill = bill + (bill * 0.10);
    } else {
        finalBill = bill;
    }
    printf("The electricity bill is: ₹%.2f\n", finalBill);

    return 0;
}

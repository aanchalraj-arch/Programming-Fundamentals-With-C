#include <stdio.h>
int main() {
    float sub1, sub2, sub3, total, avg;
    printf("Enter marks for subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &sub3);
    total = sub1 + sub2 + sub3;
    avg = total / 3;
    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f\n", avg);
    if (avg >= 90) {
        printf("Grade: A\n");
    }
    else if (avg >= 75 && avg < 90) {
        printf("Grade: B\n");
    }
    else if (avg >= 50 && avg < 75) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: F\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int day1, day2, day3, day4, day5, day6, day7, total;

    printf("Enter units used on day 1: ");
    scanf("%d", &day1);
    printf("Enter units used on day 2: ");
    scanf("%d", &day2);
    printf("Enter units used on day 3: ");
    scanf("%d", &day3);
    printf("Enter units used on day 4: ");
    scanf("%d", &day4);
    printf("Enter units used on day 5: ");
    scanf("%d", &day5);
    printf("Enter units used on day 6: ");
    scanf("%d", &day6);
    printf("Enter units used on day 7: ");
    scanf("%d", &day7);
    total = day1 + day2 + day3 + day4 + day5 + day6 + day7;
    printf("\nTotal electricity units used in a week = %d\n", total);

    return 0;
}

#include <stdio.h>

int main() {
    int status, present = 0;
    for(int i = 1; i <= 30; i++) {
        printf("Day %d (1=Present, 0=Absent): ", i);
        scanf("%d", &status);

        if(status == 1) {
            present++;
        }
    }
    printf("\nTotal present days = %d\n", present);

    return 0;
}

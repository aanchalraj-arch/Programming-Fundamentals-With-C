#include <stdio.h>
int main() {
    int x = 5, y, z;
    y = ++x;  
    x = 5;   
    z = x++;  
    printf("Using ++x (pre-increment):\n");
    printf("Initial x = 5 → After ++x, x = %d, y = %d\n\n", x, y);
 
    x = 5;
    y = ++x;
    printf("Using x++ (post-increment):\n");
    x = 5;      
    z = x++;
    printf("Initial x = 5 → After x++, x = %d, z = %d\n", x, z);

    return 0;
}
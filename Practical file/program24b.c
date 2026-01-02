#include <stdio.h>
int main(){
    int ch,n,i=1;
    printf("Press 1 to print table\nPress 0 to exit\n");
    scanf("%d",&ch);
    if(ch==1){
        scanf("%d",&n);
        do{
            printf("%d x %d = %d\n",n,i,n*i);
            i++;
        }while(i<=10);
    }
    return 0;
}
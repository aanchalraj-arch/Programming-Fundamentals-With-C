#include <stdio.h>
void calc(int a,int b,int *add,int *sub,int *mul,float *div){
    *add=a+b;
    *sub=a-b;
    *mul=a*b;
    *div=(float)a/b;
}
int main(){
    int a,b,add,sub,mul;
    float div;
    scanf("%d%d",&a,&b);
    calc(a,b,&add,&sub,&mul,&div);
    printf("%d\n%d\n%d\n%.2f",add,sub,mul,div);
    return 0;
}
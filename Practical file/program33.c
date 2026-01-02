#include <stdio.h>
void fact(int n,int *f){
    int i;
    *f=1;
    for(i=1;i<=n;i++)
        *f=*f*i;
}
int main(){
    int n,f;
    scanf("%d",&n);
    fact(n,&f);
    printf("%d",f);
    return 0;
}
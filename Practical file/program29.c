#include <stdio.h>
float avg(int t,int n){
    return (float)t/n;
}
int main(){
    int n,i,m,total=0;
    float a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        total+=m;
    }
    a=avg(total,n);
    if(a>=90) printf("Grade A");
    else if(a>=80) printf("Grade B");
    else if(a>=70) printf("Grade C");
    else if(a>=60) printf("Grade D");
    else printf("Grade F");
    return 0;
}
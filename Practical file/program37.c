#include <stdio.h>
int main(){
    int a[100],n,i,key,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Found at position %d",i+1);
    else
        printf("Not Found");
    return 0;
}
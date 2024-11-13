#include<stdio.h>
int main(){
    int n,a=0,b=1,next;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }         
}

        // next=a+b;
        // a=b;
        // b=next;
        // 5 = 0 1 1 2 3
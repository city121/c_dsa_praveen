#include<stdio.h>
int isAutomorphic(int n,int sq){
    while(n!=0){
        if(n%10!=sq%10){
            return 0;
    }
    return 1;
    n=n/10;
    sq=sq/10;
}
return 1;
}
int main()
{
    int n;
    printf("enter the numbers: ");
    scanf("%d",&n);
    int sq=n*n;
    printf("%d",isAutomorphic(n,sq));
}
#include<stdio.h>
int find(int n,int x,int y){
while(n!=0){
    if((n%10!=x) && (n%10!=y)){
        return 0;
    }
    n=n/10;
}
return 1;
}
int main(){
    int x,y,range;
    printf("enter value of x,y and range: ");
    scanf("%d %d %d",&x,&y,&range);
    for(int i=1;i<range;i++){
        if(find(i,x,y)){
            printf("%d ",i);
        }
    }
}

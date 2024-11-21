#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int x=a+b;
    int y=a*b;
    if(x>y){
        printf("%d",x-y);
    }
    else{
        printf("%d",y-x);
    }
}
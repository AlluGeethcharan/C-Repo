#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int s=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n){
        printf("PERFECT");
    }
    else if(s<n){
        printf("DEFICIENT");
    }
    else{
        printf("ABUNDANT");
    }
}
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
    float s=0;
    for(i=a;i<=b;i++){
        float c=sqrt(i);
        s=s+c;
    }
    printf("%.2f",s);
}
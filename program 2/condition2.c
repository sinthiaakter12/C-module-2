#include<stdio.h>
int main()
{
int a=100,b=50;
printf("enter the value of a,b;");
scanf("%d%d",&a,&b);
if(a>=100){
    printf("eating berger");
}
else if(b>=50){
    printf("eating fusca");
}
else{
    printf("no eating");
}
    return 0;
}
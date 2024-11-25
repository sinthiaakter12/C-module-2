#include<stdio.h>
int main()
{
int a=5000,b=10000;
printf("enter the value of a,b;");
scanf("%d%d",&a,&b);
if(a>=5000){
    printf("going cox'sbazar");
}
else if(b>=10000){
    printf("going saint martin");
}
else{
    printf("back home");
}
return 0;
}
#include<stdio.h>
int main()
{
int num,rem,result=0;
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
result=result+rem*rem*rem;
num=num/10;
}
if(result==num)
printf("Amstrong");
else
printf("not Armstrong num");
return 0;
}

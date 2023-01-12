#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int factorial();
int power();
int square();
int squareroot();
int absolute();
int logoperation();
int exponentiallogarithm();
int decimaltobinary();
int binarytodecimal();
int sine();
int cosine();
int tann();
int cosec();
int sec();
int cot();
int youchoseexit();
int main()
{
int n;
printf("|****************************|\n");
printf("| press 0: for on calculator |\n");
printf("|****************************|\n");
scanf("%d",&n);
if(n==0)
{
printf("\n");
}
else
{
printf("error");
return -1;
}
int option;
do
{
printf("|****************************************************|\n");
printf("| 1: addition |\n");
printf("| 2: subtraction |\n");
printf("| 3: multiplication |\n");
printf("| 4: division |\n");
printf("| 5: modulus |\n");
printf("| 6: factorial |\n");
printf("| 7: power |\n");
printf("| 8: square |\n");
printf("| 9: square root |\n");
printf("| 10: abosute |\n");
printf("| 11: log operation |\n");
printf("| 12: exponential log arithm |\n");
printf("| 13: sine |\n");
printf("| 14: cosine |\n");
printf("| 15: tann |\n");
printf("| 16: cosec |\n");
printf("| 17: sec |\n");
printf("| 18: cot |\n");
printf("| 19: decimal to binary |\n");
printf("| 20: binary to decimal |\n");
printf("| 21: Exit |\n");
printf("| enter your option |\n");
printf("|****************************************************|\n");
scanf("%d",&option);
switch(option)
{
case 1: addition();
break;
case 2: subtraction();
break;
case 3: multiplication();
break;
case 4: division();
break;
case 5: modulus();
break;
case 6: factorial();
break;
case 7: power();
break;
case 8: square();
break;
case 9: squareroot();
break;
case 10: absolute();
break;
case 11: logoperation();
break;
case 12: exponentiallogarithm();
break;
case 13: sine();
break;
case 14: cosine();
break;
case 15: tann();
break;
case 16: cosec();
break;
case 17: sec();
break;
case 18: cot();
break;
case 19: decimaltobinary();
break;
case 20: binarytodecimal();
break;
case 21: youchoseexit();
break;
default:
printf("wrong!!\n");
printf("please press(1-21)");
break;}
printf ("\n");
} while (option != 21);
return 0;
}
int addition()
{
int a,b,c;
printf("addition operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("addition = %d\n",c);
}
int subtraction()
{
int a,b,c;
printf("subtraction operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("subtraction = %d\n",c);
}
int multiplication()
{
int a,b,c;
printf("multiplication operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a*b;
printf("multiplication = %d\n",c);
}
int division()
{
int a,b,c;
printf("division operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a/b;
printf("division %d\n",c);
}
int modulus()
{
int a,b,c;
printf("modulus operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a%b;
printf("modulus %d\n",c);
}
int factorial()
{
int n,fact=1,i;
printf("factorial operation\n");
printf("enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial %d\n",fact);
}
int power()
{
int base,exponential,result;
printf("power operation\n");
printf("enter base and exponential values\n");
scanf("%d%d",&base,&exponential);
result=pow(base,exponential);
printf("result = %d\n",result);
}
int square()
{
int a,result;
printf("square operation\n");
printf("enter a\n");
scanf("%d",&a);
result=a*a;
printf("result = %d\n",result);
}
int squareroot()
{
int a,result;
printf("squareroot operation\n");
printf("enter a\n");
scanf("%d",&a);
result=sqrt(a);
printf("result = %d\n",result);
}
int absolute()
{
int a,result;
printf("absolute operation\n");
printf("enter a\n");
scanf("%d",&a);
result=abs(a);
printf("result %d\n",result);
}
int logoperation()
{
double a,result;
printf("log operation\n");
printf("enter a\n");
scanf("%lf",&a);
result=log10(a);
printf("result = %lf",result);
}
int exponentiallogarithm()
{
double a,result;
printf("exponential logarithm operation\n");
printf("enter a\n");
scanf("%lf",&a);
result=log(a);
printf("result = %lf",result);
}
int sine()
{
float x,result;
printf("sine operation\n");
printf("enter x\n");
scanf("%f",&x); //30
result=sin(x*3.14/180);
printf("%.2f",result);
}
int cosine()
{
float x,result;
printf("cosine operation\n");
printf("enter x\n");
scanf("%f",&x);
result=cos(x*3.14/180);
printf("%.2f",result);
}
int tann()
{
float x,result;
printf("tan operation\n");
printf("enter x\n");
scanf("%f",&x);
result=tan(x*3.14/180);
printf("%.2f",result);
}
int cosec()
{
float x,result;
printf("cosec operation\n");
printf("enter x\n");
scanf("%f",&x);
result=(1/sin(x*3.14/180));
printf("%.2f",result);
}
int sec()
{
float x,result;
printf("sec operation\n");
printf("enter x\n");
scanf("%f",&x);
result=(1/cos(x*3.14/180));
printf("%.2f",result);
}
int cot()
{
float x,result;
printf("cot operation\n");
printf("enter x\n");
scanf("%f",&x);
result=(1/tan(x*3.14/180));
printf("%.2f",result);
}
int decimaltobinary()
{
int b[100],n,i=0,j;
printf("decimal to binary operation\n");
printf("enter n\n");
scanf("%d",&n);
while(n>0)
{
b[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--)
{
printf("%d",b[j]);
}
}
int binarytodecimal()
{
int n,i,r,sum=0;
printf("binary to decimal operation\n");
printf("enter n\n");
scanf("%d",&n);
i=0;
while(n>0)
{
r=n%10;
sum=sum+r*pow(2,i);
n=n/10;
i++;
}
printf("%d",sum);}
int youchoseexit()
{
printf (" You chose: Exit");
exit(0);
}

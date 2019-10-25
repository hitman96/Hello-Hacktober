#include<stdio.h>
int main()
{
int a[5],i,j,t,x;
for(i=0;i<5;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<4;i++)
{
x=0;
for(j=0;j<4-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
x++;
}
}
if(x==0)
break++;
}
printf("Sorted list is:\n");
for(i=0;i<5;i++)
printf("%d",a[i]);
printf("\n");
return 0;
}

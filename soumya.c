#include<stdio.h>
int main()
{
int i,j,t,a[20],n;
printf("enter how many elements varant");
scanf("%d",&n);
printf("enter elements into array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}

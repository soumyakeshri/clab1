#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float *P,a[20],sum=0,mean=0,var=0,sd=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter array elements ");
	P=a;
	for(i=0;i<n;i++)
	{
		scanf("%f",P);
		P++;
	}
	P=a;
	for(i=0;i<n;i++)
	{
		printf("array elememts are %f\n",*P);
		P++;
	}
	P=a;
	for(i=0;i<n;i++)
	{
		sum=sum+*P;
		P++;
	}
	printf("sum =%f",sum);
	mean =sum/n;
	printf("mean=%f",mean);
	P=a;
	for(i=0;i<n;i++)
	{
		var=var+(pow((mean-*P),2));
		P++;
	}
	var=(var)/n;
	printf("variance=%f",var);
	sd=sqrt(var);
	printf("standard deviation=%f",sd);
	return 0;
	}


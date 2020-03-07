#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num); 
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i*j<10)
			printf("%d*%d=%d  ",i,j,i*j);
			else
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}

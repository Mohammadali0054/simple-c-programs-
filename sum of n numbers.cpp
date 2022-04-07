#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int a[3][3];
	printf("Enter elements in array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   printf("Element in a[%f][%f] : ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
	
	printf("\nSum of all elements in array is %f",sum);
	return 0;
}




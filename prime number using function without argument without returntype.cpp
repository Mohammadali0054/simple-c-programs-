#include<stdio.h>

void prime();

int main()
{
	prime();
	return 0;
}

void prime()
{

    int n,i=2,count=0;
	printf("Enter Positive Integer:");
	scanf("%d",&n);

		while(i<=n/2)
	{
		if(n%i==0)
		{
		count=1;
		break;
	}
	i++;
}

		if(count==0)
		printf("The Integer is prime");
		else
		printf("The Integer is  not  prime");
		
	
}


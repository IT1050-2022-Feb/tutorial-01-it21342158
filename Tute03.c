#include<stdio.h>
int main()
{
	int x;
	int n=1;
	int tot=0;
	
	printf("enter number :");
	scanf("%d",&x);
	
	while(n<=x)
	{
		
		tot=tot+n;
		n=n+1;
		
	}
	printf("sum is :%d",tot);
	
	
	return 0;
}

#include<iostream>

int main()
{
	
	printf("Enter the number : ");
	int n;
	scanf("%d",&n);
	
	printf("Enter the bit you want to change to 0 : ");
	int i;
	scanf("%d",&i);
	
	int ans=(n&~(1<<(i-1)));
	
	printf("New number is : %d",ans);
	
	return 0;
}

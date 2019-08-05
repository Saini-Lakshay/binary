#include<iostream>

int main()
{
	
	printf("Enter the number : ");
	int n;
	scanf("%d",&n);
	
	printf("Enter the first bit : ");
	int i;
	scanf("%d",&i);
	
	printf("Enter the second bit : ");
	int j;
	scanf("%d",&j);
	
	 if((n&(1<<(i-1))) == (n&(1<<(j-1))) || (!(n&(i<<(i-1)))) == (!(n&(1<<(j-1)))))
	 {
	 }
	 else 
	 {
	 	n=(n^(1<<(i-1)));
	 	n=(n^(1<<(j-1)));
	 }
	
	printf("New number is : %d",n);
	
	return 0;
}

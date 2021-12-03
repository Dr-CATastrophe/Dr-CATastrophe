/*3.	Write functions is_even() and is_odd and verify their output through function call.*/
#include<stdio.h>
int is_even(int n);
char is_odd(int n);
int main()
{
	int n;
	printf("Enter a number to check even or odd : ");
	scanf("%d",&n);
  if(is_even(n)=='1')
	printf("The number %d is even.\n",n);
	else
	printf("The number %d is not even.\n",n);
	if(is_odd(n)=='y')
	printf("The number %d is odd.\n",n);
	else
	printf("The number %d is not odd.\n",n);
}

int is_even(int n)
{
	if(n%2==0)
		return 1;
	else 
		return 0;
}
char is_odd(int n)
{
	if(n%2==1)
	return 'y';
	else
	return 'n';
}

/*6.	Write a function that converts an octal number to decimal form. */
#include<stdio.h>
#include<math.h>
int oct_dec(int oct)
{
	int deci=0;
	int rem=1;
	for(int i=0;oct!=0;i++)//or i<=len
	{
		rem=oct%10;
		oct=oct/10;
		deci=deci+rem*pow(8,i);
	}
	return deci;
	
}
int main()
{
	int oct;
	printf("Enter a number in octal(0-7) to convert to decimal(0-9):");
	scanf("%d",&oct);
	oct_dec(oct);
	printf("The octal number %d converted to decimal is: %d",oct,oct_dec(oct));
	
}


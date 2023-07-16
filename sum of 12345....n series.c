//Name : ASRAR UL ZAFFAR
//Roll-no : ECE-22-05
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Enter the number of terms required: \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
		printf("Sum is %d.",sum);
}
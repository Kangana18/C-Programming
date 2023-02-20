#include<stdio.h>
 int main()
{
	int dividend,divisor,quotient,remainder;
	printf("Enter dividend:");
	scanf("%d",&dividend);
	printf("Enter divisor:");
	scanf("%d",&divisor);
	//computer quotient;
	quotient =dividend/divisor;
	//computer remainder;
	remainder =dividend%divisor;
	printf("quotient=%d\n,quotient");
	printf("remainder=%d",remainder);
	return 0;
}

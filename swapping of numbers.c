#include<stdio.h>

main()
{
	int a,b;
	printf("Enter any two numbers ");
	scanf("%d %d",&a,&b);
	printf("Given numbers\n\tnumber1=%d and number2=%d",a,b);
	//to swap numbers//
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nSwapped numbers\n\tnumber1=%d and number2=%d",a,b);
	return 0;
}

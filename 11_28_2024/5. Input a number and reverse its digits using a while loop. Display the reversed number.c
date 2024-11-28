
#include <stdio.h>

int main()
{
	int num,reverse=0,reminder;

	printf("enter the number: ");
	scanf("%d",&num);

	while(num>0) {
		reminder = num%10;
		reverse = (reverse*10)+reminder;
		num = num/10;
	}

	printf("reversed number: %d",reverse);

	return 0;
}

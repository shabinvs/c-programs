
#include <stdio.h>

int isPrime(int, int);

int main()
{
	int num1, num2, result;

	printf("enter the starting number: ");
	scanf("%d",&num1);

	printf("enter the ending number: ");
	scanf("%d",&num2);


	result = isPrime(num1, num2);
	printf("count : %d",result);

	return 0;
}

int isPrime(int a, int b) {

	int prime,count=0;

	for(int i=a; i<=b; i++) {
		prime = 0;
		if(i<2) {
			continue;
		}

		for(int j=2; j<=i/2; j++) {
			if(i%j==0) {
				prime = 1;
				break;
			}
		}

		if(prime == 0) {
			count++;
		}

	}
	
	return count;


}
#include <stdio.h>

int checkPrime(int num);

int main()
{
	int i = 2, num;
	printf("Enter a positive integer: ");
	scanf_s("%d", &num);

	while (i <= num / 2.0)
	{
		if (checkPrime(i) == 1)
			if (checkPrime(num - i) == 1)
				printf("%d + %d = %d\n", i, num - i, num);
		i++;
	}
	return 0;
}

int checkPrime(int num) {
	int flag = 1, i = 2;

	for ( ; i < num; i++)
	{
		if (num % i == 0)
			flag = 0;
	}
	return flag;
}
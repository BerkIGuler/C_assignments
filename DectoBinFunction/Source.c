#include <stdio.h>
#include <math.h>


long long DecToBin(int dec_num);
int BinToDec(long long bin_num);

int main() {
	int n, Dec;
	long long Bin;
	do {
		printf("1 - Convert Decimal to Binary\n2 - Convert Binary to Decimal\n3 - Exit Program\nEnter your choice:");
		scanf_s("%d", &n);
		if (n == 1) {
			printf("Enter a Decimal:");
			scanf_s("%d", &Dec);
			printf("Binary represantation of %d is %lld.\n", Dec, DecToBin(Dec));
		}
		else if (n == 2) {
			printf("Enter a Binary:");
			scanf_s("%lld", &Bin);
			printf("Decimal represantation of %lld is %d.\n", Bin, BinToDec(Bin));
		}
		else if (n == 3) {
			printf("Exiting the Program...\n");
		}
		else {
			printf("Enter a valid operation...\n");
		}
	} while (n != 3);
}

long long DecToBin(int dec_num) {
	
	long long binary = 0;
	while (dec_num > 0) {
		int n = log(dec_num) / log(2);
		dec_num = dec_num - pow(2, n);
		binary += pow(10, n);
	}
	return binary;
}

int BinToDec(long long bin_num) {
	int Dec = 0, power = 0;

	while (bin_num != 0) {
		int n = bin_num % 10;
		if (n == 1)
			Dec += pow(2, power);
		++power;
		bin_num /= 10;
	}
	return Dec;
}



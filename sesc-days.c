#include <stdio.h>

int main(int argc, char const *argv[])
{
	long long a;
	scanf("%lli", &a);
	printf("years: %lli\n", a / 365);
	printf("weeks: %lli\n", (a % 365) / 7);
	printf("days: %lli\n", (a % 365) % 7);
	return 0;
}

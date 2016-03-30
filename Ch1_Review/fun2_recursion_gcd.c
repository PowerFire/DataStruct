/* 遞迴- 最大公因數 和 swap
 * swap use "and" "xor" "or"
 */

#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);

int main(void)
{
	int x, y;
	printf("Please input a number: \n");
	scanf("%d", &x);
	printf("Please input a number: \n");
	scanf("%d", &y);
	printf("The Greatest Common Divisor : ( %d, %d)= %d\n", x, y, gcd(x,y));

	printf(" if num1 > num2 do swap: \n");
	if (x > y) {
		x = x^y;
		y = x^y;
		x = x^y;
	}
	printf("The Greatest Common Divisor : ( %d, %d)= %d\n", x, y, gcd(x,y));
	return 0;
}

int gcd(int x, int y) {
	if (x%y == 0 )
		return y;
	else return (gcd(y, x%y));
}

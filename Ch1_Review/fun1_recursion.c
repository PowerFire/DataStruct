#include <stdio.h>
#include <stdlib.h>

int recursion(int n);

int main(void)
{
	int sol;
	sol =recursion(5);
	printf("sol = %d\n", sol);
	return 0;
}

int recursion(int n) {
	if (n > 1 ) {
		printf("n = %d \n" , n);
		return recursion(n-1)+n;
	} else {
		return 1;
	}
}

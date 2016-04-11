#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 5

int main(void)
{
	int a[ROW][COL]= {	{25, 26, 27, 28, 29},
						{35, 36, 37, 38, 39},
						{45, 46, 47, 48, 49},
						{55, 56, 57, 58, 59}};
	printf("a              = %p \n", a               );
	printf("*a             = %p \n", *a              );
	printf("*a+1           = %p \n", *a+1            );
	printf(" (a+1)         = %p \n", (a+1)           );
	printf("*(a+1)         = %p \n", *(a+1)          );
	printf("sizeof((a+1))  = %d \n", sizeof(a+1)     );
	printf("(a+1)+1        = %p \n", (a+1)+1         );
	printf("(a+1)+1 - (a+1)= %d \n", ((a+1)+1)-(a+1) );
	printf("(a+2)          = %p \n", (a+2)           );
	printf("*(a+1)+1       = %p \n", *(a+1)+1        );
	// -----------------------------------------------
	printf("*a[0]         = %d \n",  *a[0]           );
	printf(" a[1][0]      = %d \n",  a[1][0]         );
	printf("*(*(a+1)+1)   = %d \n",  *(*(a+1)+1)     );


	return 0;
}

// prog 9_17, 氣泡排序法
// reference : 洪緯恩

#include <stdio.h>
#include <stdlib.h>

#define SIZE  5

void show(int a[]);
void bubble(int a[]);

int main(void)
{
	int data[SIZE] = {26, 5, 81, 7, 63};
	
	printf("排序前 : \n");
	show(data);
	
	bubble(data);
	printf("排序後 : \n");
	show(data);
	
	return 0;
}

void show(int a[])
{
	int i;
	for( i =0; i<SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void bubble(int a[])
{
	int i, j, temp;
	for (i = 1; i<SIZE; i++) {
		printf("  i=%d\n", i);
		printf("  ");
		show(a);
		for(j=0; j<(SIZE-i); j++) {
			printf("    j=%d\n", j);
			printf("    ");
			show(a);
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		}
	}
}

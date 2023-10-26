#include<stdio.h>


int main()
{
	int i, j;
	printf("(1)\n");
	for (i = 1; i <=10; i++) {

		for (j = 1; j <= i; j++) {

			printf("*");

		}

		printf("\n");

	}

	printf("\n");
	printf("(2)\n");
	for (i = 10; i >0; i--) {

		for (j = 1; j <= i; j++) {

			printf("*");

		}
		
		printf("\n");

	}

	printf("\n");
	printf("(3)\n");
	for (i = 1; i <=10; i++) {

		for (j = 1; j <i; j++)
			 {
			printf(" ");
		}

		for (j = 10 ; j >= i; j--) {
			printf("*");
		}
		printf("\n");

	}

	printf("\n");
	printf("(4)\n");
	for (i = 10; i > 0; i--) {

		for (j = 1; j <+i; j++) {
			printf(" ");
		}

		for (j = 10; j >= i; j--) {
			printf("*");
		}
		printf("\n");

	}

}
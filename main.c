#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void swap(int *a, int *b)
{
	int temp;
	
	
	temp=*a;
	*a=*b;
	*b=temp;
	
}

int main(int argc, char *argv[]) {
	int x=40, y=60;
	
	swap(&x, &y);
	printf("x, y : %i, %i\n", x, y);	
	
	
	return 0;
}

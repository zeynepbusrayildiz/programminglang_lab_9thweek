#include <stdio.h>
#include <stdlib.h>

int main() {
	int A, B, C;
	printf("Please enter the A value:\n");
	scanf("%d",&A);
	printf("Please enter the B value:\n");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf("New value of A is %d\n",A);
	printf("New value of B is %d\n",B);
	return 0;
}

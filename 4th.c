#include <stdio.h>
#include <stdlib.h>

int main() {
	int r, islem;
	float pi=3.14, alan, cevre;
	printf("Please enter radius:\n");
	scanf("%d",&r);
	printf("Please enter operation type:\n");
	scanf("%d",&islem);
	while(islem!=1&&islem!=2){
		printf("Inavlid operation type input. Please enter operation type:\n");
	    scanf("%d",&islem);
	}
	if(islem==1){
		cevre=2*pi*r;
		printf("Perimeter = %.2f",cevre);
	}
	else{
		alan=pi*r*r;
		printf("Area = %.2f",alan);
	}
	return 0;
}

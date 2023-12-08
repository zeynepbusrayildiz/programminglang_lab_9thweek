#include <stdio.h>
#include <stdlib.h>

int main() {
	int para, a, b, c, d;
	printf("Please enter the amount of money:\n");
	scanf("%d",&para);
	while(para%10!=0){
		printf("Wrong input. Please enter the amount of money:\n");
	    scanf("%d",&para);
	}
	a=para/100;
	para=para%100;
	b=para/50;
	para=para%50;
	c=para/20;
	para=para%20;
	d=para/10;
	para=para%10;
	if(a!=0) printf("%d x 100\n",a);
	if(b!=0) printf("%d x 50\n",b);
	if(c!=0) printf("%d x 20\n",c);
	if(d!=0) printf("%d x 10\n",d);
	return 0;
}

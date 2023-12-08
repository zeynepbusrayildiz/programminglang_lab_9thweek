#include <stdio.h>
#include <stdlib.h>

int main() {
	int stnum;
	float ms, fs, avg;
	printf("Please enter your student number:\n");
	scanf("%d",&stnum);
	printf("Please enter your midterm exam score:\n");
	scanf("%f",&ms);
	printf("Please enter your final exam score:\n");
	scanf("%f",&fs);
	avg=0.4*ms+0.6*fs;
	printf("Student number:%d\tAverage:%.2f",stnum,avg);
	return 0;
}

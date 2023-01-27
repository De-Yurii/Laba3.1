#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float min;
	int min_index = 0;
	float vector[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%f", &vector[i]);
	}
	printf("Start vector: \n");
	for (int i = 0; i < 10; i++) {
		printf("%12f", vector[i]);
	}
	printf("\n");
	min = vector[0];
	for (int i = 1; i < 10; i++) {
		if (vector[i] < min) {
			min = *(vector+i);
			min_index = i;
		}
	}
	for (int i = min_index + 1; i < 10; i++) {
		*(vector+i) /= 2.5;
	}
	printf("\n");
	printf("Your vector: \n"); 
	for (int i = 0; i < 10; i++) {
		printf("%12f\t", *(vector+i));
	}
	return 0;
}
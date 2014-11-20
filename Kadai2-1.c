#include<stdio.h>

int *times (int n, int *ptr);

main(){
	int a[] = {10, 20, 30, 40, 50, 60, 70}, n=7, *b;
	int i,j;

	printf("Input Number: ");
	for(i=0; i<n; i++){
		printf("%d ",*(a+i));
	}printf("\n");

	b = times(n, a);

<<<<<<< HEAD
	printf("Output Number: ");
=======
	printf("Output number: ");
>>>>>>> issue3

	for (j=0; j<n; j++){
		printf("%d ", *(b+j));
	}printf("\n");

}

int *times (int n, int *x) {
	int i;

	for (i = 0; i < n; i++){
		x[i] = x[i] * 5;
	}
	return(x);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,nr;	
	printf("Cate numere din sirul Fibonacci doriti sa se afiseze?\n");
	scanf(" %d",&nr);
	double vector[nr];
	vector[0]=0;
	vector[1]=1;
	for(i=0;i<nr;i++) {
		if(i>1) {
		vector[i]=vector[i-1]+vector[i-2];
		}
		printf("%.0f ",vector[i]);
	}
	return 0;
}

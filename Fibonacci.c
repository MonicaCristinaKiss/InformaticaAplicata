#include <stdio.h>
#include <stdlib.h>

double fib(int);

int main() {
	int i,nr;
	printf("Cate numere din sirul Fibonacci doriti sa se afiseze?\n");
	scanf(" %d",&nr);
	for(i=0;i<nr;i++) {
		printf("%.0f ",fib(i));
	}
	return 0;
}

double fib(int n) {
	if(n==0) {
		return 0;
	}
	else if(n==1) {
		return 1;
	}
	else {
		return (fib(n-1)+fib(n-2));
	}
}

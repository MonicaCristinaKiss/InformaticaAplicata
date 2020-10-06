#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main() {
	int i,nr;
	printf("Cate numere din sirul Fibonacci doriti sa se afiseze?\n");
	scanf(" %d",&nr);
	for(i=0;i<nr;i++) {
		printf("%d ",fib(i));
	}
	return 0;
}

int fib(int n) {
	int result;
	if(n==0) {
		result=0;
	}
	else if(n==1) {
		result=1;
	}
	else {
		result=fib(n-1)+fib(n-2);
	}
	return result;
}

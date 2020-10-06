#include <stdio.h>
#include <stdlib.h>

int sumaCifrelor(int);

int main() {
	int i,n;
	printf("Introduceti un numar:\n");
	scanf(" %d",&n);
	printf("\nSuma cifrelor numarului %d este %d\n",n,sumaCifrelor(n));
	return 0;
}

int sumaCifrelor(int n) {
	int suma=0;
	while(n!=0) {
		suma+=n%10;
		n=n/10;
	}
	return suma;
}

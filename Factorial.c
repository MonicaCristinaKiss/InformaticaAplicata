#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("n = ");
	scanf(" %d",&n);
	
	double fact(n) {
		double f=1.0;
		int i;
		
		if(n>0) {
			for(i=1;i<=n;i++) {
				f*=i;
			}
		}
	return f;
	}
	
	printf("Factorial de %d este %.0f\n",n,fact(n));
return 0;
}

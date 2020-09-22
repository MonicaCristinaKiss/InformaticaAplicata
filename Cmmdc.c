#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("a = ");
	scanf(" %d",&a);
	printf("b = ");
	scanf(" %d",&b);
	
	int cmmdc(a,b) {
		int r,cmmdc;
		do {
			r=a%b;
			cmmdc=b;
			a=b;
			b=r;
		}while(r!=0);
	return cmmdc;
	}
	
	printf("Cel mai mare divizor comun pentru %d si %d este %d\n",a,b,cmmdc(a,b));
return 0;
}

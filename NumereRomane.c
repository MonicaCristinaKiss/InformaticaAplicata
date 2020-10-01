#include <stdio.h>
#include <stdlib.h>

int main() {
	int nr;
	printf("Introduceti numarul:\n");
	scanf(" %d",&nr);
	
	while (nr!=0) {
		if (nr>=1000) {
			printf("M");
			nr-=1000;
		}
		else if (nr>=900) {
			printf("CM");
			nr-=900;
		}
		else if (nr>=500) {
			printf("D");
			nr-=500;
		}
		else if (nr>=400) {
			printf("CD");
			nr-=400;
		}
		else if (nr>=100) {
			printf("C");
			nr-=100;
		}
		else if (nr>=90) {
			printf("XC");
			nr-=90;
		}
		else if (nr>=50) {
			printf("L");
			nr-=50;
		}
		else if (nr>=40) {
			printf("XL");
			nr-=40;
		}
		else if (nr>=10) {
			printf("X");
			nr-=10;
		}
		else if (nr>=9) {
			printf("IX");
			nr-=9;
		}
		else if (nr>=5) {
			printf("V");
			nr-=5;
		}
		else if (nr>=4) {
			printf("IV");
			nr-=4;
		}
		else if (nr>=1) {
			printf("I");
			nr-=1;
		}
	}
	
return 0;
}

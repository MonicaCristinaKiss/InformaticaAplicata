#include <stdio.h>
#include <string.h>

int main() {
	char a,binar[10];
	int i=0,n,nr;
	printf("Introduceti un numar natural:\n");
	scanf(" %d",&nr);
	n=nr;
	do {
		if((n%2)==1) {
			binar[i]='1';
		}else {
			binar[i]='0';
		}
		n/=2;
		i++;
	}while(n>0);
	for(i=0;i<strlen(binar)/2;i++) {
		a=binar[i];
		binar[i]=binar[strlen(binar)-1-i];
		binar[strlen(binar)-1-i]=a;
	}	
	printf("%d in binar este %s",nr,binar);
	return 0;
}

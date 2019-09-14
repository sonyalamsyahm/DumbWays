#include <stdio.h>

int drawImage(int x) {
	printf("Masukkan angka ganjil: \n");
	scanf("%d",&x);
	int cek;
	cek = x%2;
	if (cek == 0) {
		printf("Bilangan Genap \n");
		return 0;
	}
	
	int i,j,k,l,m,n,o;
	k = x / 2;
	l = x / 2;
	m = x / 2;
	n = 1;
	o = x-2;
	
	for (i=0; i<x; i++) {
		if (i <= m) {
		
		for(j=0; j<x; j++) {
			
			if (j<k || j>l) {
				printf("=");
			}
			else {
			printf("@");
			}
			}	
			k -= 1;
			l += 1;
			printf("\n");
		}
		if (i > m) {

			for (j=0; j<x; j++) {
				if (j<n || j>o)
				{
					printf("=");
				}
				else {
					printf("@");
				}
			}
				n += 1;
				o -= 1;
				printf("\n");
		}
		}

}

int main() {
	drawImage(5);
}

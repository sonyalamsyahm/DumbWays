#include <stdio.h>

/*Silahkan input angka dari 1-9 ketika diuji pada C++ Shell
Berbeda dengan menggunakan DevC++, kalimat perintah input akan muncul terlebih dahulu
*/

int bilanganPrima(int angka);
int main() {
	int alas_tinggi, k, l;
	int hitung = 2;
	printf("Alas = Tinggi, Silahkan Masukkan angka dari 1-9: \n"); 
	scanf ("%d",&alas_tinggi);
	if(alas_tinggi <= 0 || alas_tinggi >= 10){
		printf ("Angka kurang dari 1 atau lebih besar dari 9");
		return (0);
	}
		for (k = 0; k <= alas_tinggi; k++){
			for (l = 1; l <= k; l++){
				while(!bilanganPrima(hitung)){
					hitung++;
				}
				printf("%d ",hitung);
				hitung++;
			}
			printf("\n");
		}
		return(0);
}

int bilanganPrima(int angka) {
	int i;
	int prima = 1;
	for (i = 2; i <= (angka/2); i++){
		if (angka % i == 0){
			prima = 0;
			break;
		}
	}
	if (prima == 1 || angka == 2) {
		return 1;
	}
	else {
		return 0;
	}
}

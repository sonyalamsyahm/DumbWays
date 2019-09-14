#include <stdio.h>

int drawLine(int size) {
	int i;
	int j;
	int k = 0;
	for (i=0; i<size; i++) {
		for (j =0; j < size ; j++) {
			if (j == k) {
				printf("*"); 
			}
			else {
				printf(" "); //space berdasarkan banyak size, kalo drawLine(8), jumlah space = 7 dengan 1 bintang (*)
			} 
		}
		k += 1;
		printf("\n");
}
}

int main () {
	drawLine(8); // Menjalankan/Memanggil fungsi, silahkan diganti angkanya untuk di cek
}

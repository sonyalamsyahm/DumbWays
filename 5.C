#include <stdio.h>

int drawLine(int size) {
    int j,k;

    for (int i=0; i<size; i++) {
        if (i >= 1) {
            printf("%*c", i, ' ');
        }
        printf("*\n");
    }
}

int main () {
	drawLine(8); // Menjalankan/Memanggil fungsi, silahkan diganti angkanya untuk di cek
    return 0;
}

#include <stdio.h>

int getSize() {
    int size;
    
    printf("Masukkan angka ganjil: ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Angka merupakan bilangan genap, silahkan diulangi\n");
        return getSize();
    }

    return size;
}


void putCharNTimes(char ch, int times) {
    for (int i=1; i <= times; i++) {
        putchar(ch);
    }
}

int drawImages(int size) {
    int max = size;
    int median = (max/2) + 1;
    char wrapper = '=';
    char wrapped = '@';

    for (int i=1; i <= (max * 2); i += 2) {
        int wrapperTimes;

        if (i <= max) {
            wrapperTimes = (max - i) / 2;            
        } else {
            wrapperTimes = (i - max) / 2;
        }

        putCharNTimes(wrapper, wrapperTimes);
        putCharNTimes(wrapped, max - (wrapperTimes * 2));
        putCharNTimes(wrapper, wrapperTimes);
        printf("\n");
    }
    return 0;
}

int main() {
    int size = getSize();
    drawImages(size);
    return 0;
}

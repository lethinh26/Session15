#include <stdio.h>
#include <string.h>
char array[] = "hello world";

void convertCaptial();
int main() {
    convertCaptial();
    for (int i = 0; i < strlen(array); i++) {
        printf("%c", array[i]);
    }
    return 0;
}

void convertCaptial() {
    for (int i = 0; i < strlen(array); i++) {
        if (i == 0 || (i > 0 && array[i-1] == ' ')) {
            array[i] -= 32;
        }
    }
    return;
}
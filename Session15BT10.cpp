#include <stdio.h>
#include <string.h>
char array[] = "bcdac";

int main() {
    int pos, size = 0, check;
    int count[strlen(array)] = {0};
    for (int i = 0; i < strlen(array); i++) {
        check = 0;
        pos = i;
        if (i != 0) {
            for (int j = i-1; j >= 0; j--) {
                if (array[i] == array[j]) {
                    pos = j;
                }
            }
        }
        count[pos]++;
        if (count[pos] == 1) {
            size++;
        }        
    }
    //printf("%d", size);
    for (int i = 0; i < size; i++) {
        printf("%c: %d\n", array[i], count[i]);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
char array[] = "helloo world";

void removeWord(char word);
int main() {
    char word;
    printf("Nhap ki tu can xoa: ");
    scanf("%c", &word);
    removeWord(word);
    for (int i = 0; i < strlen(array); i++) {
        printf("%c", array[i]);
    }
    return 0;
}

void removeWord(char word) {
    for (int i = 0; i < strlen(array); i++) {
        if (array[i] == word) {
            for (int j = i; j < strlen(array); j++) {
                array[j] = array[j+1];
            }
            i--;
        }

    }
    return;
}
#include <stdio.h>
#include <string.h>
char array[] = "Hello my gmail is test123@gmail.com";

int countCharacter();
int countNumber();
int countSpecialCharacter();

int main() {
    printf("So ky tu la chu cai: %d\n", countCharacter());
    printf("So ky tu la chu so: %d\n", countNumber());
    printf("So ky tu dat biet: %d", countSpecialCharacter());
    return 0;
}

int countCharacter() {
    int count = 0;
    for (int i = 0; i < strlen(array); i++) {
        if ((array[i] >= 65 && array[i] <= 90) || (array[i] >= 97 && array[i] <= 122)) {
            count++;
        }
    }
    return count;
}

int countNumber() {
    int count = 0;
    for (int i = 0; i < strlen(array); i++) {
        if (array[i] >= 48 && array[i] <= 57) {
            count++;
        }
    }
    return count;
}

int countSpecialCharacter() {
    int count = 0;
    for (int i = 0; i < strlen(array); i++) {
        if ((array[i] >= 48 && array[i] <= 57) || (array[i] >= 65 && array[i] <= 90) || (array[i] >= 97 && array[i] <= 122)) {
            continue;
        }
        count++;
    }
    return count;
}
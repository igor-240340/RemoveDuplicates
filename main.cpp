#include <iostream>

static void RemoveDups(char* s);

int main() {
    char data[] = "AAA BBB AAA";

    RemoveDups(data);
    std::cout << data << std::endl;

    return 0;
}

void RemoveDups(char* str) {
    int arraySize = strlen(str) + 1;

    // Встаем сразу на второй символ.
    int currentIndex = 1;
    char* currentPointer = str + 1;
    do {
        char currentChar = *currentPointer;
        char prevChar = *(currentPointer - 1);

        // Если предыдущий символ совпадает с текущим,
        // то "накрываем" его оставшейся частью массива.
        if (currentChar == prevChar) {
            int restOfArraySize = arraySize - currentIndex;
            memcpy(currentPointer - 1, currentPointer, restOfArraySize);
        }
        else {
            currentPointer++;
            currentIndex++;
        }
    } while (*currentPointer != '\0');
}

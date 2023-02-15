#include <iostream>

int main()
{
    int s = 23; //
    //char data[] = "AAA BBB AAA";
    char data[] = "AAA BBB AAA cc def ddd"; // A B A c def d

    int i = 1;
    char* p = data + 1;
    do {
        char prev = *(p - 1);
        char cur = *p;

        if (cur == prev) {
            memcpy(p - 1, p, s - i);
        }
        else
            p++;

        i++;
    } while (*p != '\0');

    std::cout << data << std::endl;
}

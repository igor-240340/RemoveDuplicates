#include <iostream>

int main()
{
    char data[] = "AAA BBB AAA";
    int s = sizeof(data) / sizeof(data[0]);

    int i = 1;
    char* p = data + 1;
    do {
        char prev = *(p - 1);
        char cur = *p;

        if (cur == prev)
            memcpy(p - 1, p, s - i);
        else
            p++;

        i++;
    } while (*p != '\0');

    std::cout << data << std::endl;
}

#include <iostream>

int main()
{
    char mask[] = "23:59:59";
    char text[256];
    std::cin >> text;
    int i = 0;
    int j = 0;
    while (text[i] != '\0') {
        for (j = 0; j < 8; j++) {
            if (text[i + j] == '\0') {
                std::cout << "- 1";
                return -1;
            }
            if (mask[j] - '0' <= 9) {
                if ((text[i + j] - '0') > (mask[j] - '0'))
                    break;
            }
            else if (text[i + j] != mask[j]) break;
        }
        if (j == 8) {
            std::cout << i;
            return i;
        }
        i++;
    }
}
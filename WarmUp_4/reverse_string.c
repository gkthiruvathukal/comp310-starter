#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    int length = strlen(str);
    for (int i = 0, x = length - 1; i < x; i++, x--) {
        char temp = str[i];
        str[i] = str[x];
        str[x] = temp;
    }
    printf("%s\n", str);
    return 0;
}
#include <stdio.h>
int main() {
    char *str = "Hello";
    char **pstr = &str;
    printf("String: %s\n", str);
    printf("String using pointer to pointer: %s\n", *pstr);
    return 0;
}

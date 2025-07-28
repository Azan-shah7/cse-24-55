#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    printf("Length of str1: %lu\n", strlen(str1));
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    strcpy(str2, "New");
    printf("Copied str2: %s\n", str2);
    return 0;
}

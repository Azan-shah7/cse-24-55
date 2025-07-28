#include <stdio.h>
int main() {
    char str[50];
    printf("Enter a sentence: ");
    gets(str);
    printf("You entered: ");
    puts(str);
    return 0;
}

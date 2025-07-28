#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50];
    printf("Enter first word: ");
    gets(str1);
    printf("Enter second word: ");
    gets(str2);

    printf("Length of first: %lu\n", strlen(str1));
    printf("Length of second: %lu\n", strlen(str2));

    strcat(str1, str2);
    printf("After joining: %s\n", str1);

    strcpy(str2, "New");
    printf("After copying: %s\n", str2);

    if (strcmp(str1, str2) == 0)
        printf("Both are same");
    else
        printf("They are different");

    return 0;
}

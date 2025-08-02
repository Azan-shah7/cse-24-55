#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Azan";
    char s2[50] = " Bhai";
    strcat(s1, s2);
    printf("Concatenated: %s\n", s1);

    char a1[] = "AZAN";
    char a2[] = "Azan";
    int result = strcmp(a1, a2);
    printf("Comparison result: %d\n", result);

    char rev[50] = "Azan";
    strrev(rev);
    printf("Reversed: %s\n", rev);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "ANIME";
    char target[30];
    strcpy(target, st);
    printf("%s %s\n", st, target);
    printf("%d\n", strlen(st));
    return 0;
}



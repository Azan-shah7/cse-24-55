#include <stdio.h>
int main() {
    FILE *fp;
    char str[50];
    fp = fopen("data.txt", "r");
    fscanf(fp, "%s", str);
    printf("Read: %s", str);
    fclose(fp);
    return 0;
}

#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello Azan");
    fclose(fp);
    return 0;
}

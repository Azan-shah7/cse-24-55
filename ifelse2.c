#include <stdio.h>
int main() {
    int s1, s2, s3;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    int total = (s1 + s2 + s3) / 3;
    if (total >= 40 && s1 >= 33 && s2 >= 33 && s3 >= 33)
        printf("You passed");
    else
        printf("You failed");
    return 0;
}

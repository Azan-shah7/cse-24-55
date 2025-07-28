#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee e1, e2;

    printf("Enter code, salary, name for Employee 1:\n");
    scanf("%d %f %s", &e1.code, &e1.salary, e1.name);

    printf("Enter code, salary, name for Employee 2:\n");
    scanf("%d %f %s", &e2.code, &e2.salary, e2.name);

    printf("\nEmployee 1: %d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("Employee 2: %d %.2f %s\n", e2.code, e2.salary, e2.name);

    return 0;
}

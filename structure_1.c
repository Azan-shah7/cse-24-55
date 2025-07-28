#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee e1;

    printf("Enter code: ");
    scanf("%d", &e1.code);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("\nCode: %d\nSalary: %.2f\nName: %s\n", e1.code, e1.salary, e1.name);

    return 0;
}

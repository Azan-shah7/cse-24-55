#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    float salary;
    char name[30];
    char email[40];
};

int main() {
    struct employee e[3], best;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter ID, Salary, Name, Email of Employee %d:\n", i+1);
        scanf("%d %f %s %s", &e[i].id, &e[i].salary, e[i].name, e[i].email);
    }

    best = e[0];
    for(i = 1; i < 3; i++) {
        if(e[i].salary > best.salary) {
            best = e[i];
        }
    }

    printf("\nEmployee Details:\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d Salary: %.2f Name: %s Email: %s\n", e[i].id, e[i].salary, e[i].name, e[i].email);
    }

    printf("\nBest Employee:\n");
    printf("ID: %d Salary: %.2f Name: %s Email: %s\n", best.id, best.salary, best.name, best.email);

    return 0;
}

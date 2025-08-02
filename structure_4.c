#include <stdio.h>

struct employee {
    int id;
    float salary;
    char name[30];
    char email[40];
};

int main() {
    struct employee office[100];
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter ID of employee %d: ", i + 1);
        scanf("%d", &office[i].id);
        printf("Enter Salary of employee %d: ", i + 1);
        scanf("%f", &office[i].salary);
        printf("Enter Name of employee %d: ", i + 1);
        scanf("%s", office[i].name);
        printf("Enter Email of employee %d: ", i + 1);
        scanf("%s", office[i].email);
    }

    float max_salary = -1.0;
    int best_id = -1;
    char best_name[30], best_email[40];

    for(int i = 0; i < n; i++) {
        if(office[i].salary > max_salary) {
            max_salary = office[i].salary;
            best_id = office[i].id;
            strcpy(best_name, office[i].name);
            strcpy(best_email, office[i].email);
        }
    }

    printf("\nBest Employee:\n");
    printf("ID: %d\n", best_id);
    printf("Name: %s\n", best_name);
    printf("Email: %s\n", best_email);
    printf("Salary: %.2f\n", max_salary);

    return 0;
}


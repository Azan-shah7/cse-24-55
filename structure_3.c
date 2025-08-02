#include <stdio.h>

struct student {
    int roll_no;
    float percentage;
};

int main() {
    struct student Class[100];
    int m;
    printf("Enter No. of students: ");
    scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        printf("\nEnter Roll No. of student %d: ", i + 1);
        scanf("%d", &Class[i].roll_no);
        printf("Enter percentage of student %d: ", i + 1);
        scanf("%f", &Class[i].percentage);
    }

    float max_percentage = -1.0;
    int topper_roll_no = -1;

    for(int i = 0; i < m; i++) {
        if(Class[i].percentage > max_percentage) {
            max_percentage = Class[i].percentage;
            topper_roll_no = Class[i].roll_no;
        }
    }

    printf("\nTopper roll no is: %d\n", topper_roll_no);
    printf("Topper percentage is: %.2f\n", max_percentage);

    return 0;
}

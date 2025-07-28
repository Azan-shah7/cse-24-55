#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct student s[3], topper;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Roll, Marks, Name of Student %d:\n", i+1);
        scanf("%d %f %s", &s[i].roll, &s[i].marks, s[i].name);
    }

    topper = s[0];
    for(i = 1; i < 3; i++) {
        if(s[i].marks > topper.marks) {
            topper = s[i];
        }
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("Roll: %d Marks: %.2f Name: %s\n", s[i].roll, s[i].marks, s[i].name);
    }

    printf("\nTopper:\n");
    printf("Roll: %d Marks: %.2f Name: %s\n", topper.roll, topper.marks, topper.name);

    return 0;
}

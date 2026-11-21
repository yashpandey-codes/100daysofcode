
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];
    int i, highest = 0;

    // Input details of 3 students
    for (i = 0; i < 3; i++) {
        scanf("%49s %d %f",
              s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    // Print topper details
    printf("Topper: %s (Marks: %.0f)",
           s[highest].name, s[highest].marks);

    return 0;
}

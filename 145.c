
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that returns the topper structure
struct Student findTopper(struct Student s[], int n) {
    int i, highest = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    return s[highest];
}

int main() {
    struct Student s[3], topper;
    int i;

    // Input student details
    for (i = 0; i < 3; i++) {
        scanf("%49s %d %f",
              s[i].name, &s[i].roll, &s[i].marks);
    }

    // Receive returned structure
    topper = findTopper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %.0f",
           topper.name, topper.roll, topper.marks);

    return 0;
}

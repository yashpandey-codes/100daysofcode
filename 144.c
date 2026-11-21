
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function accepting structure as parameter
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f",
           s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    scanf("%49s %d %f", s.name, &s.roll, &s.marks);

    display(s);

    return 0;
}

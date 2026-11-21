
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    // Input employee details
    scanf("%49s", e.name);
    scanf("%d", &e.id);
    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    // Display employee details
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name,
           e.id,
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}

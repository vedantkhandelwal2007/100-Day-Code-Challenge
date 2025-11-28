// Q146: Create Employee structure with nested Date structure for joining date and print details.

// /*
// Sample Test Cases:
// Input 1:
// Employee: Raj | ID: 11 | Joining Date: 12 05 2020
// Output 1:
// Name: Raj | ID: 11 | Joining Date: 12/05/2020

// */

#include<stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[20];
    int ID;
    struct Date jd;
};
int main() {
    struct Employee e;
    printf("Employee: ");
    scanf("%s", e.name);
    printf("ID: ");
    scanf("%d", &e.ID);
    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.jd.day, &e.jd.month, &e.jd.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%4d",e.name, e.ID,e.jd.day, e.jd.month, e.jd.year);
    return 0;
}

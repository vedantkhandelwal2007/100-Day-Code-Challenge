// Q145: Return a structure containing top student's details from a function.

// /*
// Sample Test Cases:
// Input 1:
// 3 students: Riya 101 89, Karan 102 96, Meena 103 92
// Output 1:
// Top Student: Karan | Roll: 102 | Marks: 96

// */

#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int roll_no;
    int marks;
};

struct student find(struct student s[], int n) {
    int i;
    struct student top = s[0];

    for(i = 1; i < n; i++) {
        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }
    return top; 
}

int main() {
    struct student s[50], topper;
    int n, i;

    printf("How many students?: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    topper = find(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}

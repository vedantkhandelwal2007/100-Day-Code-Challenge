// Q143: Find and print the student with the highest marks.

// /*
// Sample Test Cases:
// Input 1:
// 3 students: Ravi 101 95, Sita 102 85, Aman 103 88
// Output 1:
// Topper: Ravi (Marks: 95)

// */

#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int roll_no;
    int marks;
};
int main(){
    struct student s[5];
    int i;

    int n;
    printf("How many students?: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
        int top=s[0].marks;
        char tops[20];
        strcpy(tops,s[0].name);
    for(i = 0; i < n; i++) {
        
        if(s[i].marks>top)
        {
            top=s[i].marks;
            strcpy(tops,s[i].name);
        }
    }
    printf("Topper: %s (Marks: %d)",tops,top);
    return 0;
}

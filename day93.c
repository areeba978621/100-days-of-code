//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[3];
    printf("Enter details of 3 students (Name Roll Marks):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    struct Student topper = students[0];
    for (int i = 1; i < 3; i++) {
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }
    printf("Topper: %s (Marks: %.2f)\n", topper.name, topper.marks);
    return 0;
}
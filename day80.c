//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    FILE *file;
    struct Student student;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        scanf("%s %d %f", student.name, &student.roll, &student.marks);
        fprintf(file, "%s %d %.2f\n", student.name, student.roll, student.marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", student.name, &student.roll, &student.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", student.name, student.roll, student.marks);
    }
    fclose(file);

    return 0;
}
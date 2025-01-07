#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 50
#define MAX_STUDENTS 100
#define SUBJECTS 3

typedef struct {
    int rollNo;
    char name[MAX_NAME];
    float marks[SUBJECTS];
    float total;
    float percentage;
    char grade;
} Student;

// Function prototypes
int getValidStudentCount(void);
void inputStudentData(Student *students, int numStudents);
void calculateResults(Student *students, int numStudents);
void assignGrades(Student *students, int numStudents);
void printSummaryReport(Student *students, int numStudents);
void findClassTopper(Student *students, int numStudents);
void calculateSubjectAverages(Student *students, int numStudents);
float getValidMarks(const char *subject);

int main() {
    int numStudents = getValidStudentCount();
    
    Student *students = malloc(numStudents * sizeof(Student));
    if(students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    inputStudentData(students, numStudents);
    calculateResults(students, numStudents);
    assignGrades(students, numStudents);
    printSummaryReport(students, numStudents);
    findClassTopper(students, numStudents);
    calculateSubjectAverages(students, numStudents);

    free(students);
    return 0;
}

int getValidStudentCount(void) {
    int count;
    do {
        printf("Enter the number of students (1 to %d): ", MAX_STUDENTS);
        if (scanf("%d", &count) != 1) {
            printf("Please enter a numerical value.\n");
            while(getchar() != '\n');
            count = 0;
            continue;
        }
        if (count < 1 || count > MAX_STUDENTS) {
            printf("Invalid number. Please enter a value between 1 and %d.\n", MAX_STUDENTS);
        }
    } while (count < 1 || count > MAX_STUDENTS);
    return count;
}

float getValidMarks(const char *subject) {
    float marks;
    do {
        printf("Enter marks for %s (0-100): ", subject);
        if (scanf("%f", &marks) != 1) {
            printf("Please enter a valid number.\n");
            while(getchar() != '\n');
            marks = -1;
            continue;
        }
        if (marks < 0 || marks > 100) {
            printf("Invalid marks. Please enter between 0 and 100.\n");
        }
    } while (marks < 0 || marks > 100);
    return marks;
}

void inputStudentData(Student *students, int numStudents) {
    const char *subjects[SUBJECTS] = {"Mathematics", "Science", "English"};
    
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Enter Student Name: ");
        while(getchar() != '\n'); // Clear buffer
        fgets(students[i].name, MAX_NAME, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline
        
        for (int j = 0; j < SUBJECTS; j++) {
            students[i].marks[j] = getValidMarks(subjects[j]);
        }
    }
}

void calculateResults(Student *students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        float total = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            total += students[i].marks[j];
        }
        students[i].total = total;
        students[i].percentage = (total / (SUBJECTS * 100)) * 100;
    }
}

void assignGrades(Student *students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].percentage >= 90) students[i].grade = 'A';
        else if (students[i].percentage >= 80) students[i].grade = 'B';
        else if (students[i].percentage >= 70) students[i].grade = 'C';
        else students[i].grade = 'D';
    }
}

void printSummaryReport(Student *students, int numStudents) {
    printf("\n=================== SUMMARY REPORT ===================\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("%-20s: %s\n", "Name", students[i].name);
        printf("%-20s: %d\n", "Roll No", students[i].rollNo);
        printf("%-20s: %.2f\n", "Total Marks", students[i].total);
        printf("%-20s: %.2f%%\n", "Percentage", students[i].percentage);
        printf("%-20s: %c\n", "Grade", students[i].grade);
        printf("------------------------------------------------\n");
    }
}

void findClassTopper(Student *students, int numStudents) {
    int topperIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].percentage > students[topperIndex].percentage) {
            topperIndex = i;
        }
    }
    
    printf("\n=================== CLASS TOPPER ====================\n");
    printf("Name: %s\n", students[topperIndex].name);
    printf("Percentage: %.2f%%\n", students[topperIndex].percentage);
    printf("Grade: %c\n", students[topperIndex].grade);
}

void calculateSubjectAverages(Student *students, int numStudents) {
    const char *subjects[SUBJECTS] = {"Mathematics", "Science", "English"};
    printf("\n================ SUBJECT AVERAGES ==================\n");
    
    for (int i = 0; i < SUBJECTS; i++) {
        float sum = 0;
        for (int j = 0; j < numStudents; j++) {
            sum += students[j].marks[i];
        }
        printf("%-12s: %.2f\n", subjects[i], sum/numStudents);
    }
}
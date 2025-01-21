#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[20];
    int rollNo;
    float marks;
} Student; 

int main() {
    /*Student s1 = {"Student-1", 4177, 95.0};
    Student s2, s3;
    
    strcpy(s2.name, "Student-2");
    s2.rollNo = 5006;
    s2.marks = 100.0;
    
    printf("Enter name: ");
    scanf("%s", s3.name);
    printf("Enter rollNo: ");
    scanf("%d", &s3.rollNo);
    printf("Enter marks: ");
    scanf("%f", &s3.marks);
    
    Student std[3] = {s1, s2, s3};  // Array of students
    
    for (int i = 0; i < 3; i++) {  // Changed to start from 0 and loop until 3
        printf("Name: %s\t RollNo: %d\t Marks: %.2f\n", 
               std[i].name, std[i].rollNo, std[i].marks);  // Fixed index usage
    }*/
    int totalStudent = 4;
    Student student[totalStudent];
    
    for(int i = 0; i < totalStudent; i++){
    	printf("Enter student name, rollNo, marks %d:\n",i+1);
    	scanf("%s %d %f", student[i].name, &student[i].rollNo, &student[i].marks);
    }
    
    for(int i = 0; i < totalStudent; i++){
    	printf("student %d: %s\t%d\t%.2f\n",i+1,student[i].name, student[i].rollNo, student[i].marks );
    }

    return 0;  // Added return statement
}



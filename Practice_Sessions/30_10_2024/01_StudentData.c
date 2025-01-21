//Write a C program that defines a `Student` structure to store a student’s name, roll number, and marks. Prompt the user to enter the name's maximum length, allocate memory dynamically for the name, and input the student’s details. Display the details in a formatted output and ensure memory is freed after use.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure Student 
typedef struct Student {
    char *name;//Pointer to dynamically allocate memory for student's name
    int rollno;
    float marks;
} Student;

int main() {
    Student student;
    Student *ptr = &student;
    int nameLength;

    //Prompt user for input details
    printf("Enter student details here:\n");
    printf("Enter the length of name: ");
    scanf("%d", &nameLength);//to read the maximum length of student name
    getchar();//clear the newline character from the input buffer

    // Dynamically allocate memory for the student's name based on provided length
    ptr->name = (char *)malloc((nameLength + 1) * sizeof(char));// +1 for the null terminator
    if (ptr -> name == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.");
        return 1;// Exit program if memory allocation fails
    }
    
    //input details
    printf("Enter name of student: ");
    fgets(ptr -> name, 20, stdin);
    ptr -> name[strcspn(ptr -> name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &ptr -> rollno);

    printf("Enter marks: ");
    scanf("%f", &ptr -> marks);
    
    //print the student details
    printf("\n-Student Details- \n");
    printf("Student Name: %s\n", ptr -> name);
    printf("Roll No: %d\n", ptr -> rollno);
    printf("Marks: %.2f\n", ptr -> marks);

    // Free the allocated memory for student's name
    free(ptr -> name);

    return 0;
}

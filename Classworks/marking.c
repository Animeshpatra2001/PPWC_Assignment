#include <stdio.h>

int main() {
    //Details
    char name[50];
    char reg_no[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your registration number: ");
    fgets(reg_no, sizeof(reg_no), stdin);

    //Attendance
    float att, attend;
   
    printf("Enter the percentage of attendance: ");
    scanf("%f", &att);

    if (att >= 75) {
       attend = 5;
       printf("You will get 5 marks for attendence.\n");
    } else {
       attend = 0;
       printf("You will not get marks for attendence.\n");
    }

    //midsem mark
    float full_midsem_mark, mid;

    printf("Enter your mid-semester mark (out of 30): ");
    scanf("%f", &full_midsem_mark); 
    mid = full_midsem_mark / 2;
    
    //Quiz
    float quiz1, quiz2, quiz3, quiz4, quiz;

    printf("Enter the mark for Quiz 1 (out of 10): ");
    scanf("%f", &quiz1);
    
    printf("Enter the mark for Quiz 2 (out of 10): ");
    scanf("%f", &quiz2);
    
    printf("Enter the mark for Quiz 3 (out of 10): ");
    scanf("%f", &quiz3);
    
    printf("Enter the mark for Quiz 4 (out of 10): ");
    scanf("%f", &quiz4);

    quiz = (quiz1 + quiz2 + quiz3 + quiz4) / 4;
    printf("The average of your 4 quiz is: %.2f\n", quiz);
    
    //Assignment
    float assignment1, assignment2, assignment3, assignment4;
    float assignment;

    printf("Enter your mark for Assignment 1 (out of 10): ");
    scanf("%f", &assignment1);
    
    printf("Enter your mark for Assignment 2 (out of 10): ");
    scanf("%f", &assignment2);

    printf("Enter your mark for Assignment 3 (out of 10): ");
    scanf("%f", &assignment3);

    printf("Enter your mark for Assignment 4 (out of 10): ");
    scanf("%f", &assignment4);

    assignment = (assignment1 + assignment2 + assignment3 + assignment4) / 4;
    printf("The average of your 4 assignments is: %.2f\n", assignment);

    //Internal
    float internal = attend + mid + quiz + assignment;
    
     if (internal < 16) {
        printf("\nStudent Details:\n");
        printf("Name: %s", name);
        printf("Registration Number: %s", reg_no);
        printf("Your internal mark is %.2f. You have failed and you are not eligible for End Semester .\n", internal);
     } else {
        printf("Your internal mark is %.2f. You have passed the internal exam.\n", internal);
        //endsem
        float endsem_mark, lab;
        float end;

        printf("Enter your end-semester mark (out of 60): ");
        scanf("%f", &endsem_mark);

        printf("Enter your lab mark (out of 15): ");
        scanf("%f", &lab);

        end = (endsem_mark / 60) * 45;
        
        //external
        float external = end + lab;
  	
    	if (external < 24) {
    		printf("\nStudent Details:\n");
		printf("Name: %s", name);
		printf("Registration Number: %s", reg_no);
            	printf("Your external mark is %.2f. You have failed the external exam.\n", external);
        } else {
            	printf("Your external mark is %.2f. You have passed the external exam.\n", external);
    		
    		// total mark
    		float total = internal + external;
    		char grade;
    		if (total >= 90) {
                    	grade = 'O';  // Outstanding
            	} else if (total >= 80 && total < 90) {
            		grade = 'A';
        		} else if (total >= 70 && total < 80) {
            		grade = 'B';
        		} else if (total >= 60 && total < 70) {
            		grade = 'C';
        		} else if (total >= 50 && total < 60) {
            		grade = 'D';
        		} else if (total >= 40 && total < 50) {
            		grade = 'E';
        		} else {
            		grade = 'F';  // Fail
        	}
    
        // Displaying the grade
        printf("\nStudent Details:\n");
        printf("Name: %s", name);
        printf("Registration Number: %s", reg_no);
        printf("Your total mark is %.2f. You have passed.\n", total);
        printf("Your grade is: %c\n", grade);
    	}
    }
}

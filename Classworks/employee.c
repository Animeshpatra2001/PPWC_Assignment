#include<stdio.h>
int main(){
    	
    int educationLevel;
    float salary = 0.0, basic = 0.0, hra = 0.0, gross = 0.0, da = 0.0;
    int yearsOfExperience;

    printf("Enter your education level (1 for Graduate, 2 for Post Graduate): ");
    scanf("%d", &educationLevel);
    
    switch (educationLevel) {
        case 1:
            basic = 40000;
            hra = 0.25*basic;
            da = 0.7*basic;
            salary = basic+hra+da;
            break;
        case 2:
            basic = 50000;
            hra = 0.4*basic;
            da = 0.7*basic;
            salary = basic+hra+da;
            break;
        default:
            printf("Invalid input. Please enter 1 for Graduate or 2 for Post Graduate.\n");
            return 1;
    }
    
    printf("Enter your years of experience (1 for more than equal to 3): ");
    scanf("%d", &yearsOfExperience);
    
    switch (yearsOfExperience) {
        case 1:
            salary += 25000;
            break;
        default:
            salary += 0;
            break;
    }
    printf("The total salary is: %.2f\n", salary);
    return 0;
}

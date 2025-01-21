#include<stdio.h>

int main(){

int num;// declaration
int reg_no = 6255;//variable declaration and initialisation
double pocket_money;
char first_letter;

printf("Enter a integer number:\n");
scanf("%d",&num);
printf("The integer number is:%d\n",num);

//printf("Enter the regestration number:\n");
//scanf("%d",&reg_no);
printf("The regestration number is:%d\n",reg_no);

printf("Enter the pocket money:\n");
scanf("%lf",&pocket_money);
printf("Pocket money is:%lf\n",pocket_money);

printf("Enter the first letter of your name\n");
scanf("%s",&first_letter);
printf("The first letter of your name is:%c\n",first_letter);

return 0;
}

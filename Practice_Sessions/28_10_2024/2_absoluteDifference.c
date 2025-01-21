// Store the absolute difference of x and y in y , where the absolute difference is ( x - y ) or (y - x ), whichever is positive. Do not use the abs or fabs function in your solution.

#include <stdio.h>

int main(){
    float x,y;
    
    //user input
    printf("Enter the value for x: ");
    scanf("%f", &x);
    printf("Enter the value for y: ");
    scanf("%f", &y);

    //chaking the bigger number
    if(x >= y){
        y = x-y;
    }else{
        y = y-x;
    }

    //print
    printf("The absolute difference of x and y is: %f", y);
}

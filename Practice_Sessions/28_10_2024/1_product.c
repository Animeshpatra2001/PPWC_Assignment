// If item is nonzero, then multiply product by item and save the result in product ; other-wise, skip the multiplication. In either case, print the value of product.

#include <stdio.h>

int main(){
    float product = 1.0;
    float num;

    //user input
    printf("Enter the value for num: ");
    scanf("%f", &num);

    //chaking for non-zero case
    if(num != 0){
        product *= num;
    }

    //print
    printf("product: %f\n", product);
    return 0;
}

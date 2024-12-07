//2. Design a function with prototype; void sumarr(int a[], int b[], int r[], int size);that takes 4 parameters, two int arrays as input arguments, 1 array as output arguments and their effective size respectively to produce a resultant array containing the sums of corresponding array elements a and b. For example, for the three-element input arrays 5 -1 7 and 2 4 -2 , the result would be an array containing 7 3 5 .

#include <stdio.h>

void sumarr(int a[], int b[], int r[], int size);
void sumarr(int a[], int b[], int r[], int size) {
    for (int i = 0; i < size; i++) {
        r[i] = a[i] + b[i]; 
    }
}
int main() {
    int size = 5;
    int a[] = {3, -1, 4, -2, 5};
    int b[] = {4, 2, -3, 6, 1};
    int r[size];
    
    sumarr(a, b, r, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", r[i]);
    }
    
    return 0;
}

/*
Output
7 1 1 4 6 
*/
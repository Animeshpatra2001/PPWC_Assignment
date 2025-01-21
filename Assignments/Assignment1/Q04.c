//4. What does scanf() function returns. Explain the possible return values with examples.

#include <stdio.h>

int main() {
    int input1, input2, input3;
    printf("Enter three numbers: ");
    int scanReturn = scanf("%d, %d, %d", &input1, &input2, &input3);
    printf("scan returned: %d", scanReturn);
    return 0;
}
/*
    Possible returns of scanf() function:

    positive number: When inputs of correct data type is input scanf() function returns the no of inputs

    0: When input is of incorrect data type

    -1: When no input is given from user
*/

/* 
Output
Summary of `scanf()` Return Values:

| Input Scenario            | Return Value (`scanReturn`)| Explanation                                          |
|---------------------------|----------------------------|------------------------------------------------------|
| Correct input with commas | `3`                        | All three integers are successfully read.            |
| Missing commas            | `1`                        | Only the first integer is read before parsing fails. |
| Incorrect data type       | `0`                        | No valid integer is read.                            |
| No input                  | `-1`                       | Input stream ends without reading any value.         |
*/
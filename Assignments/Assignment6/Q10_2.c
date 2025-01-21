#include <stdio.h>
#include "Question_10_file1.c"

int count = 5;
int main() {
    write_extern();
    write_extern();
    printf("%d\n", count);
    return (0);
}

/*
    O/P
    9

    The function inside the file1 is being called inside file2 by including the file1 as preprocessor. count variable is defined inside file1 as an extern variable hence, it will take the value of the count variable from the file where the function is called. Then the function is incrementing the value of a by 2.
*/
#include <stdio.h>
struct person {
    int ht;
    float wt;
    char color;
    // struct person p; /*Line- 5 */
};

/*
    No, line 5 can't be a valid member, because this is a recursive structure which will continuously create new structure instances of person p.
*/
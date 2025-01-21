struct oswcourse {
    int secid;
    float avgm;
    char present;
    // int *marks();
    // int teacher();
} o1, o2;

/*
    int *marks() and int teacher() are not allowed. Because these are function declarations which are not directly allowed inside C structure. We can have pointers to function inside a structure.
*/
struct date {
    int m, d, y;
};
struct stud {
    char name[20];
    struct stud *p;
    struct date *d;
    // int(*) fun(int, int);
};

/*
    int(*) fun(int, int) is not allowed because it's not a right way to write a pointer to function.
*/
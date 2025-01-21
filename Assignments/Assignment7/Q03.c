struct person {
    int a;
    struct health {
        int a;
    } h;
};

/*
    Yes, it's completely allowed in ANSI C. This is a nested structure where person is an outer structure and health is an inner structure which is a member of person structure.
*/
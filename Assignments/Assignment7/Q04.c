struct person {
    int a;
    union health {
        int w;
    } h;
};

/*
    Yes, the above declaration is correct. Because union is allowed to be a member of a structure.
*/
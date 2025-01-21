/*

(1) int process(int (*pf)(int a, int b)); -> process is a function that takes as an argument a pointer to a function that itself takes two int parameters and returns an int.

(2) int (*fun(int, void (*ptr)()))(); -> fun is a function that takes an int and a pointer ptr to a function that returns void. fun itself returns a pointer to a function that takes no arguments and returns an int.

(3) int *(*p)(int (*a)[ ]); -> p is a pointer to a function that takes a pointer to an array of int and returns a pointer to an int.

(4) int (*p)[10]; -> p is a pointer to an array of 10 integers.

(5) float *p[20]; -> p is an array of 20 pointers to float.

(6) int p(char *a); -> p is a function that takes a char * and returns an int.

(7) int (*p(char * a))[l0]; -> p is a function that takes a char * and returns a pointer to an array of 10 integers.

(8) int * (*p [10]) (char *a); -> p is an array of 10 function pointers. Each function takes a char * as an argument and returns a pointer to an int.

*/
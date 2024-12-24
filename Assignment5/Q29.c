/*

Select the correct way of declaring and initializing pointer to function (i.e. function pointer).
(1) int (*ptr)(int,int,int)=funname;
(2) int *ptr(int,int,int)=funname;
(3) int (*ptr)(int,int,int)=&funname;
(4) (int *) ptr(int,int,int)=funname;
(5) None of these

Answers - (1) int (*ptr)(int, int, int) = funname;
          (3) int (*ptr)(int, int, int) = &funname;

*/
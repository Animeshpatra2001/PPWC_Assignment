/*


Suppose four user-defined exit handlers X, Y, P, and Q are installed in the order X then Y then P then
Q using atexit() function in a C program. Exit hadler X is designed to display 1, Y is designed to
display 2, P is designed to display 3, and Q to display 4. State the order of their display, when the
program is going to terminate after calling return 0/exit(0).
(A) 4, 3, 2 1
(B) 1,2,3,4
(C) 1, 2, 4, 3
(D) none

Answer: (A) 4, 3, 2, 1 (becasue exit handlers are executed in reverse order while we use atexit() to exit.)


*/
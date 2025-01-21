/*
e)S=8, Q=0
Initial State: Process 1 can start because S is non-zero, but Process 2 cannot start because Q is zero.
Behavior:
Process 1 can execute 8 times consecutively because S starts at 8.
Each time Process 1 executes, it decrements S and increments Q.
After 8 iterations, S becomes 0, and Q becomes 8.
Process 2 can then execute 8 times consecutively, alternating between executing wait(&Q) (decrementing Q) and signaling S
(incrementing S).
*/
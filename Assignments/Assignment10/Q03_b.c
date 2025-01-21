/*
b)S=1, Q=0
Initial State: Process 1 can start because S is non-zero, but Process 2 cannot start because Q is zero.
Behavior:
Process 1 executes wait(&S) (decrements S to 0) and a.
Process 1 then signals Q (increments Q to 1), allowing Process 2 to proceed.
Process 2 executes wait(&Q) (decrements Q to 0) and b.
Process 2 then signals S (increments S to 1), allowing Process 1 to proceed.
Result: Both processes alternate execution without deadlock.
*/
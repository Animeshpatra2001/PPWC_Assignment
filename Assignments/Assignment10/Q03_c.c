/*
c)S=0, Q=1
Initial State: Process 2 can start because Q is non-zero, but Process 1 cannot start because S is zero.
Behavior:
Process 2 executes wait(&Q) (decrements Q to 0) and b.
Process 2 then signals S (increments S to 1), allowing Process 1 to proceed.
Process 1 executes wait(&S) (decrements S to 0) and a.
Process 1 then signals Q (increments Q to 1), allowing Process 2 to proceed.
Result: Both processes alternate execution without deadlock.
*/
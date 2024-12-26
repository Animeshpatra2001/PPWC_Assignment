#include <stdio.h>
int r() {
    static int num = 7;
    return num--;
}
int main() {
    for (r(); r(); r())
        printf("%d ", r());
    return 0;
}

/*
    O/P
    5 2

    Tracing the execution:
    step1 - for (7, 6, )
                print(5)
    step2 - for (7, 3, 4)
                print(2)
    step3 - for (7, 0, 1)  **This is the line where program will stop execution as condition gets 0(false).
                print(-1)
*/
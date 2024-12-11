#include <stdio.h>

int main() {
    int a[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    printf("\nINDEX\t\tADDRESS\t\tVALUE\n\n");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d\t\t%d\t\t%d\n", i, a + i, *(a + i));
    }
    return 0;
}

/*
Output

INDEX		ADDRESS		VALUE

0		-274080880		0
1		-274080876		10
2		-274080872		20
3		-274080868		30
4		-274080864		40
5		-274080860		50
6		-274080856		60
7		-274080852		70
8		-274080848		80
9		-274080844		90
*/
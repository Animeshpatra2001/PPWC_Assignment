#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,*ptr,n;
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter no.of integers to be entered");
    scanf("%d",&n);

    if(ptr==NULL)
    {
        printf("memory not available\n");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        *(ptr+i)=i*2;
    }

    ptr=(int*)realloc(ptr,5*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not available\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t" , *(ptr + i));
    }

    free(ptr);

    printf("\n\n");
    return 0;

}

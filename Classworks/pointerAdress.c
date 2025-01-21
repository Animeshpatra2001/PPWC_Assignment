//Array pointer
#include<stdio.h>

int main()
{
	int *p = NULL;
	int (*ptr)[5];
	int arr[5] = {11,12,13,14,15};
	int i;
	p = arr;
	ptr = arr;

//printing the address and values of the array
	for(i = 0; i < 5; i++)
	{
		printf("values of arr[%d] = %d\n",i,arr[i]);
		printf("address of arr[%d] = %p\n",i,&arr);
	}
	printf("arr: %p\n",arr); 
	printf("p: %p\n",p); 
	printf("&arr[0]: %p\n",&arr[0]); 
	printf("*arr: %d\n",*arr);
	printf("*p: %d\n",*p);
	printf("*ptr: %d\n",*ptr);
	printf("p: %p\n",p);   
	printf("ptr: %p\n",ptr); 
	
	printf("p++: %p\n",p++);
	printf("ptr++: %p\n",ptr++);  
	printf("p: %p\n",p);
	printf("ptr: %p\n",ptr);  
	
	for(i = 0; i < 5; i++) 
	{
	printf("ptr[%d]:%u\n",i,ptr[i]);
	}
	printf("*(*ptr):%u\n",i,*(*ptr));
	
}

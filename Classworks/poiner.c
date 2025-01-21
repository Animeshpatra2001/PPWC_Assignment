#include<stdio.h>
int main(){
	int x = 10 ;
	int *ptr = &x;
	int *ptr1 = &x;
	int *ptr2 = &x;
	
	printf("%d",x);
	printf("x = %d\n",x);
	printf("&x = %u\n",&x);
	printf("ptr = %u\n",ptr);
	printf("&ptr = %u\n",&ptr);
	printf("*ptr = %u\n",*ptr);
	printf("*(&x) = %u\n",(*&x));
	printf("*(&ptr) = %u\n",*(&ptr));
	printf("**(&ptr) = %u\n",**(&ptr));
	printf("ptr+1 = %d\n",ptr+1);
	printf("ptr-1 = %d\n",ptr-1);
	printf("ptr-- = %d\n",ptr--);
	printf("ptr = %d\n",ptr);
	printf("ptr = %u\n",ptr);
	printf("ptr1 = %u\n",ptr1);
	printf("ptr2 = %u\n",ptr2);
	//printf("ptr1*2 = %u\n",ptr1*2);
	//printf("ptr1/ptr2 = %u\n",ptr1/ptr2);
	//printf("ptr/2 = %u\n",ptr/2);
	//printf("ptr*2.2 = %u\n",ptr*2.2);
	//printf("ptr/2.2 = %u\n",ptr/2.2);
	printf("ptr++ = %d\n",ptr++);
	printf("*ptr++ = %d\n",*ptr++);
	printf("*(ptr++) = %d\n",*(ptr++));
}

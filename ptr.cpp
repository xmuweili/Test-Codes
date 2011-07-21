#include<stdio.h>
int * foo(){
	int a =5;
	printf("a --> %d\n", a);
	printf("a(ptr) --> %x\n", &a);
	return &a;
}

int main(){
	int *p = foo();
	printf("p --> %d\n", *p);
	printf("p(ptr) --> %x\n", p);

	*p = 8;
	printf("p --> %d\n", *p);
	printf("p(ptr) --> %x\n", p);
	
	return 0;
}

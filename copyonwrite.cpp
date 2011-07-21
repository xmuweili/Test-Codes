#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	string str1 = "hello";
	string str2 = str1;

	printf("\nstr1---> %x\n", str1.c_str());
	printf("\nstr2---> %x\n", str2.c_str());
	
	str2[0]='x';
	printf("\nstr1---> %x\n", str1.c_str());
	printf("\nstr2---> %x\n", str2.c_str());
	
	return 0;
}

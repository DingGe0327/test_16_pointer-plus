#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>  //P49 
//int main()
//{
//	char* ps = "hello word";   //ps存储的是字符串首元素的地址
//	printf("%c\n", *ps);  //h
//	printf("%s\n", ps);  //hello word
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int (*parr)[] = arr;
	int *parr = arr;
	printf("%d\n", parr[5]);
	return 0;
}









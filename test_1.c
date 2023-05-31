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
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	////int (*parr)[] = arr;   //parr是一个指向整数数组的指针
	//int *parr = arr;         //parr 是一个整数指针
	//printf("%d\n", parr[5]);
	double* d[3];
	double* (*pd) = &d;
	return 0;
}

//二级指针
//#include <stdio.h>
//
//void modifyValue(int** pp)
//{
//    int newValue = 10;
//    *pp = &newValue;
//}
//
//int main()
//{
//    int value = 5;
//    int* p = &value;
//
//    printf("Before modification: %d\n", *p);
//    modifyValue(&p);
//    printf("After modification: %d\n", *p);
//
//    return 0;
//}








#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>  //P49 
//int main()
//{
//	char* ps = "hello word";   //ps�洢�����ַ�����Ԫ�صĵ�ַ
//	printf("%c\n", *ps);  //h
//	printf("%s\n", ps);  //hello word
//	return 0;
//}

#include <stdio.h>
int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	////int (*parr)[] = arr;   //parr��һ��ָ�����������ָ��
	//int *parr = arr;         //parr ��һ������ָ��
	//printf("%d\n", parr[5]);
	double* d[3];
	double* (*pd) = &d;
	return 0;
}

//����ָ��
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








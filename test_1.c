#define  _CRT_SECURE_NO_WARNINGS 1

//��������������Ԫ�صĵ�ַ��������������
//1.sizeof��������������������������������飬���������������Ĵ�С����λ���ֽڡ�
//2.&����������������ʾ�������飬ȡ��������������ĵ�ַ��

//#include <stdio.h>  //P49 
//int main()
//{
//	char* ps = "hello word";   //ps�洢�����ַ�����Ԫ�صĵ�ַ
//	printf("%c\n", *ps);  //h
//	printf("%s\n", ps);  //hello word
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	////int (*parr)[] = arr;   //parr��һ��ָ�����������ָ��
//	//int *parr = arr;         //parr ��һ������ָ��
//	//printf("%d\n", parr[5]);
//	double* d[3];
//	double* (*pd)[3] = &d;
//	return 0;
//}

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

#include <stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[] = &arr1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%d ", (*pa)[i]);
		printf("%d ", *((*pa) + i));

	}
	return 0;
}

//��C�����У�`arr1`��`&arr1`��ʾ��ͬ�ĺ��壺

//1. `arr1`�����ʾ��������`arr1`�����ơ���ʹ��`arr1`ʱ�����ᱻ����Ϊ�������Ԫ�صĵ�ַ���ڱ��ʽ�У�`arr1`���Ա���Ϊһ��ָ�������һ��Ԫ�ص�ָ�롣���磬`*arr1`����������ĵ�һ��Ԫ�أ�`arr1[0]`Ҳ����������ĵ�һ��Ԫ�ء�
//
//2. `&arr1`�����ʾ��������`arr1`�ĵ�ַ��ʹ��`&arr1`��õ�ָ�����������ָ�룬����������ָ�������һ��Ԫ�ص�ָ�롣����ĳЩ����¿��ܻ����ã����罫����������Ϊ�������ݸ�����ʱ��
//
//������һ��ʾ������ʾ��`arr1`��`&arr1`֮�������

#include <stdio.h>

int main() {
	int arr1[] = { 1, 2, 3, 4, 5 };

	printf("Value of arr1: %p\n", arr1);
	printf("Value of &arr1: %p\n", &arr1);

	printf("Value of *arr1: %d\n", *arr1);
	printf("Value of *(&arr1): %p\n", *(&arr1));

	return 0;
}


//�����
//
//Value of arr1 : 0x7fffd5b1ebe0
//Value of & arr1 : 0x7fffd5b1ebe0
//Value of * arr1 : 1
//Value of * (&arr1) : 0x7fffd5b1ebe0
//```
//
//���Կ�����`arr1`��`&arr1`��ֵ������ȵģ����Ƕ���ʾ�������ʼ��ַ��Ȼ�������������������в�ͬ��`arr1`��������ָ������Ԫ�����͵�ָ�룬��`&arr1`��������ָ�����������ָ�롣






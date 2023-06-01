#define  _CRT_SECURE_NO_WARNINGS 1

//数组名是数组首元素的地址，但有两个例外
//1.sizeof（数组名）：数组名代表的是整个数组，计算的是整个数组的大小，单位是字节。
//2.&数组名：数组名表示整个数组，取出的是整个数组的地址。

//#include <stdio.h>  //P49 
//int main()
//{
//	char* ps = "hello word";   //ps存储的是字符串首元素的地址
//	printf("%c\n", *ps);  //h
//	printf("%s\n", ps);  //hello word
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	////int (*parr)[] = arr;   //parr是一个指向整数数组的指针
//	//int *parr = arr;         //parr 是一个整数指针
//	//printf("%d\n", parr[5]);
//	double* d[3];
//	double* (*pd)[3] = &d;
//	return 0;
//}

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

//在C语言中，`arr1`和`&arr1`表示不同的含义：

//1. `arr1`：这表示整数数组`arr1`的名称。当使用`arr1`时，它会被解释为数组的首元素的地址。在表达式中，`arr1`可以被视为一个指向数组第一个元素的指针。例如，`*arr1`将给出数组的第一个元素，`arr1[0]`也将给出数组的第一个元素。
//
//2. `&arr1`：这表示整个数组`arr1`的地址。使用`&arr1`会得到指向整个数组的指针，而不仅仅是指向数组第一个元素的指针。这在某些情况下可能会有用，例如将整个数组作为参数传递给函数时。
//
//下面是一个示例，演示了`arr1`和`&arr1`之间的区别：

#include <stdio.h>

int main() {
	int arr1[] = { 1, 2, 3, 4, 5 };

	printf("Value of arr1: %p\n", arr1);
	printf("Value of &arr1: %p\n", &arr1);

	printf("Value of *arr1: %d\n", *arr1);
	printf("Value of *(&arr1): %p\n", *(&arr1));

	return 0;
}


//输出：
//
//Value of arr1 : 0x7fffd5b1ebe0
//Value of & arr1 : 0x7fffd5b1ebe0
//Value of * arr1 : 1
//Value of * (&arr1) : 0x7fffd5b1ebe0
//```
//
//可以看到，`arr1`和`&arr1`在值上是相等的，它们都表示数组的起始地址。然而，它们在类型上略有不同：`arr1`的类型是指向数组元素类型的指针，而`&arr1`的类型是指向整个数组的指针。






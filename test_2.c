#define  _CRT_SECURE_NO_WARNINGS 1
//指针数组
//指针数组是一个数组，每个元素都是指针，通过索引来访问不同的指针，并通过解引用操作来访问所指向的数据。
#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    int* ptrArr[3];  // 声明一个包含3个整型指针的数组

    ptrArr[0] = &a;  // 将指针数组的元素指向不同的变量
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    // 使用索引来访问指针数组中的不同指针，并通过解引用操作访问所指向的数据
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *(ptrArr[i]));  //1 2 3
    }
    return 0;
}




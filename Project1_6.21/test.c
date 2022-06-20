#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//题
//指针减指针是得他们之间元素个数，指针之间可以比较大小

//int main()
//{
//	unsigned long pulArray[] = {6,7,8,9,10};
//	unsigned long* pulPtr;
//	pulPtr = pulArray; //把 pulArray数组首地址赋给pulPtr
//	*(pulPtr + 3) += 3;//*(pulPtr + 3)=pulArray[3];9+=3;的12赋给pulArray[3]
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	//*pulPtr是6，*(pulPtr + 3)是12，
//	return 0;
//}

#include<string.h>
#include<assert.h>
//写一个函数可以逆序字符串内容
void reverse_printing(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (right > left)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		right--;
		left++;
	}
}

int main()
{   
	char arr[256] = {0};
	//scanf("%s", arr);//scanf 遇到空格就不在录入了
	gets(arr);//读取一行中间可以有空格
	reverse_printing(arr);
	
		printf("%s", arr);
	return 0;
}
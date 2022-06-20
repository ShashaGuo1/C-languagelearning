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


//写一个函数可以逆序字符串内容
void reverse_printing(char* arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (right > left)
	{
		int tmp = arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;
		right--;
		left++;
	}
}
int main()
{   
	char arr[] = "abcdef";
	int len = strlen(arr);
	reverse_printing(arr, len);
	int i = 0;
	while(arr[i]!='\0'){
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}
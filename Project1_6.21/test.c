#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��
//ָ���ָ���ǵ�����֮��Ԫ�ظ�����ָ��֮����ԱȽϴ�С

//int main()
//{
//	unsigned long pulArray[] = {6,7,8,9,10};
//	unsigned long* pulPtr;
//	pulPtr = pulArray; //�� pulArray�����׵�ַ����pulPtr
//	*(pulPtr + 3) += 3;//*(pulPtr + 3)=pulArray[3];9+=3;��12����pulArray[3]
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	//*pulPtr��6��*(pulPtr + 3)��12��
//	return 0;
//}


//дһ���������������ַ�������
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
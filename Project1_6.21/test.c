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

#include<string.h>
#include<assert.h>
//дһ���������������ַ�������
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
	//scanf("%s", arr);//scanf �����ո�Ͳ���¼����
	gets(arr);//��ȡһ���м�����пո�
	reverse_printing(arr);
	
		printf("%s", arr);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

//�ַ���ȫ��ѧϰ

//�ַ��������ַ�������
//1.���ַ������ȣ�
//strlen
//2.���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp
//3.�������޵��ַ�����������
//strncpy
//strncat
//strnemp
//4.�ַ�����
//strstr
//strtok
//5.�ַ�������
//6.�ڴ��������
//memcpy
//memmpve
//memset
//memcmp
//7.������Ϣ����
//strerror

//c�����ж��ַ����Ĵ����Ƶ������c���Ա�����û���ַ������͵ģ��ַ���ͨ�����ڳ����ַ����л����ַ������У�
//�ַ���������������Щ���������޸ĵ��ַ�������
//strlen��
// �⺯����size_t strlen(const char* string)
// �ַ�����'\0'��Ϊ������־��strlen�������ص������ַ����С�\0��ǰ����ֵ��ַ���������������\0����
// ����ָ����ַ��������ԡ�\0������
// ע�⺯���ķ���ֵΪsize_t,���޷��ŵģ��״���
//int main()
//{
//	int len = strlen("abcdef");//strlen �Ǵ���Ԫ�ؿ�ʼ������������һ����\0��ֹͣ������
//	char arr[] = { 'a','b','c','d','e' };
//	int len1 = strlen(arr);//����������Ԫ�ص�ַ��ʼ��������������һ��'\0'ֹͣ����Ȼarr[]�������ޡ�\0��
//	//����len1��ֵ������ġ�
//	printf("%d\n", len);
//	return 0;
//}

//�����Զ���my_strlen()�����ַ���
//1.��������
//2.�ݹ鷨
//3.ָ��-ָ��

//��������
//#include<assert.h>
//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdefg");
//
//	//�����������Ĵ����ǣ�
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");//��������hehe
//	}
////	����:Ϊʲô��hehe�أ�
////�Լ�д�ĺ���������ֵ��int ��int my_strlen(const char* str)
////�����и��ĺ����ǣ��������ͣ� size_t strlen(const char* string)
////	��֪��size_t ��ʲô������һ����-��ת�����忴����仰��typedef unsigned int    size_t;(��˼�ǰ�
//// size_t�ض�����unsigned int������size_t==unsigned int�޷�����)
////	size_t
////(strlen("abc") - strlen("abcdef")
////    3          -      6     =     -3(��ʱ���ǰ�-3����һ���޷���������)��������������һ������0������
//
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//strcpy
//char* strcpy(char* destination,const char* source);
// source��Դ�� destination��Ŀ�ĵ�
//Դ�ַ���������'\0'����
//�ὫԴ�ַ����ġ�\0��������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char ch[20] = "##########";
//	strcpy(ch, arr); //�ὫԴ�ַ����ġ�\0��������Ŀ��ռ�,Ҳ���ǰ�Դ�ַ�������Ŀ���ַ���
//	//����Ŀ���ַ��������ݸ���ΪԴ�ַ�����
//	printf("%s", ch);//��ӡ%s���ԡ�\0������
//	return 0;
//}

//ģ��ʵ��һ��my_strcpy
//#include<assert.h>
//char* my_strcpy(char* des, const char* sou)
//{
//	asserrr(des != NULL);
//	asserrr(sou != NULL);
//	char* ret = des;
//	//����souָ����ַ�����desָ��Ŀռ䣬������\0��
//	while (*sou != '\0')
//	{
//		*des = *sou;
//		des++;
//		sou++;
//	}
//	*des = *sou;//�����ǰѡ�\0������des��
//
//	//������뾫��
//	//while (*des++ = *sou++)
//	//{
//		//;
//	//}
//
//	return des;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char ch[20] = "##########";
//	//�����ʾ��
//	//char arr2[] = { 'b','a','c' };//��Ϊû�С�\0��
//    //����ʾ��
//	//char* arr1 = "abcdefg";//arr1Ŀ��ռ����ɱ�
//	my_strcpy(ch, arr);
//	printf("%s", ch);
//	return 0;
//}


//strcat:�ַ���׷��
//char* strcat (char* destination,const char* source);
//Դ�ַ�����Ŀ���ַ���������'\0'��������ΪԴ�ַ����ҵ�Ŀ���ַ����ĵ�һ����\0���Ӵ˸����Ͽ�����ȥ��
//Ŀ��ռ�����㹻����������Դ�ַ�������
//Ŀ��ռ������޸�
//�ַ����Լ����ܸ��Լ�׷�ӣ��������

//int main()
//{   //Ŀ�ĵ��ַ���
//	char arr1[30] = "hello";//char arr1[] = "hello";����д�ᱨ��:��Ϊarr1�Ŀռ䲻��
//	//Run-Time Check Failure #2 - Stack around the variable 'arr1' was corrupted.
//	char arr2[] = "world";//Դͷ�ַ�����Դͷ������\0��Ҳ������ȥ�ģ���Ϊ���ַ�������ʱ��Ŀ���ַ�����Ҫ�������\0��������
//	strcat(arr1, arr2);//��arr2���ַ���׷�ӵ�arr1��
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��һ��my_strcat
//#include<assert.h>
//char* my_strcat(char* des, const char* sou)
//{
//	assert(des && sou);//��ͬ��assert(des!=NULL);assert(sou!=NULL);
//	char* ret = des;
//	//�ҵ�Ŀ���ַ����ġ�\0��
//	while (*des != '\0')
//	{
//		des++;
//	}
//	while (*des++ = *sou++)
//	{
//		;
//	}
//	return des;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "#######";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp�ַ����Ƚ�
//int strcmp(const char* str1,const char* str2)
//value        relationship of string1 to string2
//  <0          string1 less than string2
//  0           string1 identical string2
//  >0          string1 greater than string2
//#include<string.h>
//int main()
//{
////	��vs���������
//// 	     value
////s1>s2   1
////s1=s2   0
////s1<s2   -1
////
//// 	��linux-gcc
//// 	     value
////s1>s2   >0
////s1=s2   ==0
////s1<s2   <0
//	char arr1[] = "abcde";//Ҳ��д�ɣ�char* p1="sssf";char* p2="sasf";
//	char arr2[] = "abcda";
//	int ret=strcmp(arr1, arr2);//strcmp(��ַ1, ��ַ2):
//	printf("%d\n", ret);//-1  ˵���ַ���arr1С��arr2������ȴ�С�ȵ����ַ���arr1��arr2��Ԫ�ش�С����Ϊa<s.
//	//�����ַ�����Ԫ������ǾͱȽ������ڶ���Ԫ��֮��Ĵ�С��ϵ��
//	if (strcmp(arr1, arr2) > 0)
//	{
//		printf("arr1>arr2\n");
//	}
//	if (strcmp(arr1, arr2) < 0)
//	{
//		printf("arr1<arr2\n");
//	}
//	if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1=arr2\n");
//	}
//	
//	return 0;
//}


//ģ��ȽϺ���
//#include<assert.h>
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert((p1 != NULL) &&( p2 != NULL));
//	
//	
//	while(*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//		}
//	if (*p1 > *p2)  //��liunx�д��ں�С��ֱ��д��һ�仰return (*p1-*p2);
//	{
//		return 1;
//	}
//	else if (*p1 < *p2)
//	{
//		return -1;
//	}
//	return 0;
//}
//int main()
//{
//	char* p1 = "abdhk";
//	char* p2 = "abdhq";
//	int ret=my_strcmp(p1, p2);
//	if (ret > 0)
//			{
//				printf("p1>p2\n");
//			}
//	if (ret < 0)
//			{
//				printf("p1<p2\n");
//			}
//	if (ret == 0)
//			{
//				printf("p1=p2\n");
//			}
//			
//	return 0;
//}


//�Ƚ�strncpy ��strcpy �⺯��
//char* strcpy (char* strDestination,const char* strSource);
//char* strncpy (char* strDest,const char* strSource,size_t count);//��λ�ֽ�

//char* strncpy(char* destination,const char* source,size_t num);
//����num���ַ���Դ�ַ�����Ŀ��ռ�
//���Դ�ַ����ĳ���С��num�򿽱���Դ�ַ�������Ŀ��ĺ��׷��0��ֱ��num���ֽڿռ䱻ռ����
//int main()
//{
//	//char arr1[10] = "abcdef";
//	//char arr2[] = "hello world";
//	//strncpy(arr1, arr2, 4);//��arr2�е�ǰ4���ַ�������arr1�С�:���ĸ��ַ�û��'\0',
//	//printf("%s\n", arr1); //hellef
//
//	//char arr11[10] = "abcde";//����ַ������ڴ����ǣ�abcde\0\0\0\0\0
//	//char arr22[] = "hello world";
//	//strncpy(arr11, arr22, 8);//�����ǰѡ�hello wo����(����û�п�����\0��)������arr2��
//	//printf("%s\n", arr11);//hello wo
//
//	char arr3[10] = "abcde";//����ַ������ڴ����ǣ�abcde\0\0\0\0\0
//	char arr4[] = "hel";
//	strncpy(arr3, arr4, 6);//�����ǰѡ�hel\0\0\0��(�������λ��\0���)��������arr2��
//	printf("%s\n", arr3);//hel
//	return 0;
//}

//ģ��ʵ��strncpy
//#include<stdio.h>
//char* my_strncpy(char* des,const char* sou, size_t num)// typedef unsigned int     size_t;(�޷�������)
//{
//	int i = 0;
//	char* ret = des;
//	while (num && (*des++ = *sou++))//num=0����num�����ַ�����desʱ��ֹѭ������sou����des��\0��ʱ��ֹѭ��
//	{
//		num--;
//	}
//	if (num) //ֱ����num���ַ�����desΪֹ��
//	{
//		while (num--)
//		{
//			*des = '\0';
//		   }
//	}
//	return ret;
//}
//int main()
//{
//	char arr11[10] = "abcde";//����ַ������ڴ����ǣ�abcde\0\0\0\0\0
//    char arr22[] = "hello world";
//	my_strncpy(arr11, arr22, 8);//�����ǰѡ�hello wo����(����û�п�����\0��)������arr2��
//	printf("%s\n", arr11);
//
//	char arr3[10] = "abcde";//����ַ������ڴ����ǣ�abcde\0\0\0\0\0
//	char arr4[] = "hel";
//	my_strncpy(arr3, arr4, 6);//�����ǰѡ�hel\0\0\0��(�������λ��\0���)��������arr2��
//	printf("%s\n", arr3);//
//	return 0;
//}

//strncat  ׷�Ӻ���
//char* strncat(char* strDest,const char* strSource,size_t num)
//������size_num�Ĳ�����ö���char arr1[] ��ʽ
//#include<string.h>
//int main()
//{
//	//char arr1[8] = "hello";//��Ϊ��׷������Ŀ�꺯��Ҫ�㹻�������ڴ��д�ŵģ�hello\0\0\0
//	//char arr2[] = "i think";
//	//strncat(arr1, arr2, 4);
//	//printf("%s\n", arr1);//Run-Time Check Failure #2 - Stack around the variable 'arr1' was corrupted.
//	//// ����arr1��Χ�Ķ�ջ����
//	////����ԭ����arr1���ڴ�̫С��
//
//	//char arr3[30] = "hello\0*******";//��������ǰ���������֤arr4ȡ3���ַ�׷�ӵ�arr3����ʱ�м�\0��
//	////����û��׷��\0:���ڴ����ǣ�hellowor*****\0\0\0\0\0\0......
//	////��������ǶԵ���׷����arr3�������ַ����\0���ڴ�����:hellowor\0****\0\0\0\0\0......
//	////׷��������arr4�м����ַ���Ҫ�ں����һ����\0������Ϊֻ��\0���ܽ����ַ�����
//	//char arr4[] = "world";
//	//strncat(arr3, arr4, 3);
//	//printf("%s\n", arr3);//hellowor
//
//	//char arr5[30] = "hello\0*************";//arr5�ڴ��У�hello\0*************\0\0\0\0....
//	//char arr6[] = "world";//arr6�ڴ��У�world\0
//	//strncat(arr5, arr6, 8);//8������arr6�ַ�������arr6�ַ�������6����������ֻ��arr5��׷��arr6����6���ַ�
//	////arr6�ڴ��У�helloworld\0********\0\0\0\0....
//	//printf("%s\n", arr5); //helloworld
//	//return 0;
//}

//ģ��strncat
//#include<string.h>
////����һ��
//char* my_strncat(char* des, const char* sou, size_t num)
//{
//    //׷������Ŀ���ַ����ĵ�һ��\0��ʼ
//    //����1��׷�Ӹ���num<sou�ַ���Ԫ�ظ�������׷��num�ַ����ڼ�'\0'.
//    //����2��׷��num>sou �ַ���Ԫ�ظ�������֮׷��sou�����ַ�������'\0';
//    char* ret = des;
//    char* star = des + strlen(des);
//    if (num > strlen(sou))
//    {
//        while (*star++ = *sou++)
//        {
//            ;
//        }
//    }
//    else if  (num < strlen(sou))
//    {
//        int i = 0;
//        for (i = 0; i < num; i++)
//        {
//            *star++ = *sou++;
//        }
//        *star = '\0';
//    }
//    return ret;
//}
////������
//char* my_strncat(char* des, const char* sou, size_t num)
//{
//    //׷������Ŀ���ַ����ĵ�һ��\0��ʼ
//    char* start = des;
//    while (*des++)
//    {
//        ;
//    }
//    //�ҵ�des��\0����ַ
//    des--;
//    while (num--)
//    {
//        if (!(*des++ = *sou++))//��Ŀ������ ��ȡ���������٣��ٱ���,������ֻ��*des++ = *sou++&&*des++=='\0',
//            //Ҳ���ǰ�sou�ַ���ȫ׷����des���档
//        {
//            return(start);
//        }
//    //����num--==0ʱsou�ַ���û��ȫ��׷����des����ĩβ���ϡ�\0��;
//     *des = '\0';
//    return(start);
//    }
//}
//int main()
//{
//    int num = 0;
//	char arr5[30] = "hello gss";//arr5�ڴ��У�h e l l o ''g s s '\0''\0''\0'......
//    char arr6[] = "world";//arr6�ڴ��У�world\0
//    //strncat(arr5, arr6, 8);//8������arr6�ַ�������arr6�ַ�������6����
//    //������ֻ��arr5��׷��arr6����6���ַ�
//    //h e l l o ''g s s w o r l d '\0''\0''\0'......
//    printf("��������Ҫ׷�ӵĸ�����");
//    scanf("%d", &num);
//    my_strncat(arr5, arr6, num);
//    printf("%s\n", arr5); //hello gssworld  
//    return 0;
//}

//�������ҿ⺯����·��C:\Program Files (x86)\Windows Kits\10\Source\10.0.19041.0\ucrt\string\strncmp.c
//strncmp  �ַ����Ƚ�
//int strncmp(const char* str1,const char* str2,size_t num);
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdea";
//	const char* p1 = "skfsfhk";//��constԭ��p1ָ�����һ�������ַ������ǲ��ɸı�ģ�����constһ���д�����ı���
//	                            //ϵͳ�ᱨ��
//	const char* p2 = "abcdihd";
//	int ret=strncmp(arr1, arr2, 6);
//	if (ret > 0)
//	{
//		printf("arr1>arr2");
//	}
//	else if (ret < 0)
//	{
//		printf("arr1<arr2");
//	}
//	else
//	{
//		printf("arr1=arr2");
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	int i = 0;
//	for (; i < num; i++)
//	{
//		if (*str1 == 0 || *str1 != *str2)
//		{
//			return(*(unsigned char*)str1 - *(unsigned char*)str2);
//		}
//		str1 += 1;
//		str2 += 1;
//	}
//
//	return 0;
//}
//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	int n = 1;
//	while (*str1 == *str2)
//	{
//		if (*str1 == 0 || n == num)//1����ȫ���ַ��Ƚ����2���Ƚϵ��ַ������������Ƶĸ���
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//		n++;
//	}
//	if(*str1 != *str2)
//
//	{
//	return (*(unsigned char*)str1 - *(unsigned char*)str2);
//	}
//
//}
//
//int main()
//{
//	int num = 0;
//	char arr1[] = "abcdef";
//	char arr2[] = "abaaaaaaa";
//	const char* p1 = "skfsfhk";
//	const char* p2 = "abcdihd";
//	printf("������Ƚϼ�λ����");
//	scanf("%d", &num);
//	//int ret=my_strncmp(arr1, arr2, num);
//	int ret = strncmp(arr1, arr2, num);
//	if (ret > 0)
//			{
//				printf("str1>str2");
//			}
//			else if (ret < 0)
//			{
//				printf("str1<str2");
//			}
//			else
//			{
//				printf("str1=str2");
//			}
//	return 0;
//}
//

//����ԭ�ͣ�int strncmp(const char* str1, const char* str2, size_t num)
//ͷ  ��  ����#include <string.h>
//��  ��  ֵ������strncmp��ͬ��str1 = str2   �򷵻�0��
//str1 > str2  �򷵻ش���0��ֵ��
//str1 < str2  �򷵻�С��0��ֵ
//
//	˵����
//	�ж������ַ�����С
//	1��ACSII�� 2������
//	ע�����ִ�Сд�Ƚϵģ����ϣ�������ִ�Сд�����ַ����Ƚϣ�����ʹ��stricmp����
//
//	strncmp()�������Ƚ�str1�ַ����ĵ�һ���ַ���ACSIIֵ��ȥstr2��һ���ַ���ACSIIֵ(�������ұȽ�ǰn���ַ���ֱ�����ֲ�ͬ���ַ�����'\0'Ϊֹ)
//
//	����ֵΪ��������Ƚ���ȥ������ֵ��Ϊ�㣬�򷵻ز�ֵ��
//
//	�ر�ע�⣺strncmp�����ڱȽ������ַ���������Ƚ�������ַ������������ܱȽ����ֵ�������ʽ�Ĳ�����
//
//	��strcmp������
//	1���ȱȽ�һ�������������εĲ�ͬ��
//
//	int My_strncmp(const char* str1, const char* str2, int num)
//
//	int My_strcmp(const char* str1, const char* str2)
//
//	strcmp��strncmp���������Ƚ��ַ����ģ����������ܷ�Ƚ�ָ�������ַ�������Ҫ�ഫһ�����Ȳ�������Ҳʹ��strncmp��strcmp���Ӿ�ϸ��
//
//
//
//	����ʵ�֣�
//	//��null��β���ַ��� const���η�ֹ�ַ������޸ģ����б���
//	int My_strncmp(const char* str1, const char* str2, int n)
//{
//	if (!n)   //n=0ʱ�����ַ�Ҫ�ȣ�ֱ��return 0
//		return 0;
//	while (--n && *str1 && *str1 == *str2) //���ַ�����Ҳ�Ϊ��\0��ʱ�Ƚ��¸��ַ���ֱ��n=0����
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;//�ַ������ʱ����*str1 - *str2���������㷵��ֵ����������
//}
//�÷�ʾ����
//#include <stdio.h>
//#include<string.h>
//#include <assert.h>
//int My_strncmp(const char* str1, const char* str2, int n)
//{
//	if (!n)
//		return 0;
//	while (--n && *str1 && *str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char str1[] = "SSLOVE YOU ";
//	char str2[] = "SORRY";
//	//��������ɷ���O��ACSII=79��S��ACSII=83,Ӧ�÷���4 
//	printf("%d\n", My_strncmp(str1, str2, 2));
//	return 0;
//}

//strstr  �����ַ�����find a substring
//char* strstr(const char* string ,const char* strCharSet);//const ��ֻ���������ַ�����
//string :Null-terminated string to search:\0�������ַ��������ң�ĸ�ַ�����
//strCharSet:Null-terminated  to search for.��\0�������ַ���Ҫ���ң����ַ�����
//���ĵ��У�NULL--��ָ�룻  NUL��Null--��\0'

//int main()
//{
//	char arr[] = "abcdefgbcd";
//	char arr1[] = "bcd";//��arr[]������û��arr1[],�����򷵻�arr1[]��arr[]�г��ֵ����ַ�������Ԫ�ص�ַ
//	//��arr[]���в�ֹһ��arr1[]�ַ������Դ������ҵ�һ��Ϊ׼��
//	char arr2[] = "bcda";//���Ҳ����򷵻ؿ�ָ��
//	char* ret=strstr(arr, arr1);
//	char* ret1 = strstr(arr, arr2);
//	//printf("%p\n",arr+1);//009DFC1D
//	//printf("%p\n", ret);//009DFC1D
//	//printf("%p\n", ret1);//00000000
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);//bcdefg
//	}
//	return 0;
//}


//��������strstr�����Ŀ⺯��·����C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.29.30133\crt\src\x64
// ��C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.29.30133\crt\src\vcruntime
//ģ��my_strstr����
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//��������Ų飺��str2�ǿ��ַ����أ���˵��str2�д�ʱֻ��һ��'\0'.
//	//�����ж������������1.str1*="abcdef",str2*="def";2.str1*="abcde",str2*="def";3.str1*="abcdeqa",str2*="def";
//	//4.str1*="abbbcdef",str2*="bbc";//���ֵ�һ�β�ѯ��ʧ�ܣ��ʹ�abbbcdef�ڶ���b�ڿ�ʼ���ҡ������ڱȽϵĹ�����
//	//str1��str2ָ��ĵ����߰����ˡ���������ø��Զ���ָ����str1��str2�����в�����
//	//str1*="ab",str2*="bbcsh";
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)str1;//�Ƚϵ�ʵʱ��ʼλ��
//	if (*str2 == '\0')//if (!*str2):��*str2=='\0'ʱASCII����0����0Ϊ��.
//	{
//		return (char*)str1;//��Ϊstrԭ����const char* ������������Ҫǿתһ�·�����о��档
//	 }
//	while (*cur)
//	{
//		s1 = cur;
//		s2 =(char*) str2;
//		while ((*s1 == *s2) && (*s2 != '\0') && (*s1 != '\0'))
////Ҳ����д�ɣ�while (*s1 && *s2 && !(*s1-*s2))
//		{
//			
//			s1++;
//			s2++;
//		}
//		if (*s2 =='\0')//Ҳ����д��!*s2
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//str1�ĳ��ȱ�str2С��
//		}
//		 cur++;
//
//	}
//	return NULL;
//	
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);//bbcdef
//     }
//	return 0;
//}

//ʵ��strstr������kmp�㷨

//strtok
//char* strtok(char* str,const char* sep);
//1.sep�������ַ����������������ָ������ַ�����
//2.��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ��ı�ǡ�
// 3.strok�����ҵ�str�е���һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣��ע��strok������ı䱻�������ַ���
// ��������ʹ��strok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ģ�
// 4.strok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strok���������������ַ����е�λ�á�
//5.strok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//6.����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//192.168.31.121
//	//192  168 31 121
//	//1283784@qq.com
//	//1283784 qq com
//	char arr1[] = "192.168.31.121";
//	char* p1 = ".";
//	char arr[] = "1283784@qq.com";
//	char* p = "@.";//���Ǵ�ָ���������
//	//strtok��������Ǵ�arr�����������p��ķָ��������ҵ���@����ָ���ʱ��@��Ϊ'\0',�ڰ���Ԫ��1�ĵ�ַ���أ���1�ĵ�ַ
//	//�����ش�ӡ����ӡ��1283784����'\0'ֹͣ���ڵ�strtok����������ڴӸո�'\0'���λ����ʼ����'.'�ҵ����'.'��Ϊ��\0'
//	//�ڰ�֮ǰ\0�ĵ�ַ���ش�ӡ��qq,�ڵ���strtok������������һ��\0Ϊ��ʼ��һֱ�ҵ�arr[]��β���ַ�������ӡ����com��
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//��buf�п���arr
//	char* ret = NULL;//���պ�������ֵ��������ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�룩
//	for (ret = strtok(buf, p); ret != NULL;ret=strtok(NULL,p))//ret = strtok(buf, p)����Ǵ�������,
//		//����ret != NULL˵���ַ����д��ڸ���ı�Ǵ�ӡ�ַ���,��ִ��ret=strtok(NULL,p)�������NULLָҪ�õڶ������
//		//������ret��
//	{
//		printf("%s\n", ret);
//	}
//
//	////�и�buf
//	////��һ���и�
//	//char* ret = strtok(buf, p);//����ret��1�ĵ�ַ����������ѵ�һ��\0��λ�ü�ס�ˡ�
//	//printf("%s\n", ret);//1283784
//	////�ڶ����и�
//	//ret = strtok(NULL, p);//��'.'�ҵ�����Ϊ��\0'����q�ĵ�ַ������ס'\0'�ĵ�ַ
//	//printf("%s\n", ret);//qq
//	////�������и�
//	//ret = strtok(NULL, p);//��c��ʼ�ҷ��ֺ���û�б����
//	//printf("%s\n", ret);//com
//	return 0;
//}

//strerror ���ش����룬����Ӧ�Ĵ�����Ϣ���Ѵ����뷭��ɴ�����Ϣ��
//char* strerror(int errnum);
//#include<errno.h>
//int main()
//{
//	//������    ������Ϣ                                 ����c�����ж���
//	// 0      No error
//	// 1      Operation not permitted
//	// 2      No such file or directory
//	//char* str = strerror(0);
//	//printf("%s\n", str);//��ӡ�����No error
//
//	//char* str1 = strerror(1);
//	//printf("%s\n", str1);//��ӡ���:Operation not permitted(�������ܾ�)
//	
//	// erron��һ��ȫ�ֵĴ����������
//	// ��c���ԵĿ⺯����ִ�еĹ����У�ʹ�ÿ⺯���ǣ��������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno�У������strerror(errno)
//	// ��������Ϣ
//	//char* str3 = strerror(errno);
//	
//	//����˵����
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//r�����ļ��ķ�ʽ�Ƕ�ȡ
//	if (pf == NULL)//pf == NULL˵��fopen()�����������ʧ��
//	{
//		//��֪�����ļ�ʧ�ܵ�ԭ��
//		printf("%s\n", strerror(errno));//No such file or directory(û������ļ���Ŀ¼)
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	//char* str2 = strerror(2);
//	//printf("%s\n", str2);//��ӡ���:No such file or directory��û������ļ����ļ��У�
//	return 0;
//}


//��׼����������麯�������ڲ����������ַ������ǵ�ԭ��λ��ͷ�ļ�ctype.h�С���һ�麯�����ڶ��ַ����࣬����2�麯������ת���ַ���
//
//�ַ�����
//ÿ�����ຯ������һ�������ַ�ֵ�����Ͳ�����������������ַ�������һ������ֵ����ʾ���١���ע�⣬��׼��δָ���κ��ض�ֵ�������п��ܷ����κη���ֵ����
//
//�±��г�����Щ���ຯ���Լ�����ÿ����ִ�еĲ��ԣ�
//
//�ַ�����
//����	������Ĳ����������������ͷ�����
//iscntrl	�κο����ַ�
//isspace	�հ��ַ����ո� ������ҳ��\f��������'\n'���س�'\r'���Ʊ��'\t'����ֱ�Ʊ��'\v'
//isdigit	ʮ��������0~9
//isxdigit	ʮ���������֣���������ʮ�������֣�Сд��ĸa~f, ��д��ĸA~F
//islower	Сд��ĸa~z
//isupper	��д��ĸA~Z
//isalpha	��ĸa~z��A~Z
//isalnum	��ĸ������a~z��A~Z��0~9
//ispunct	�����ţ��κβ��������ֻ���ĸ��ͼ���ַ����ɴ�ӡ���ţ�
//isgraph	�κ�ͼ���ַ�
//isprint	�κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
//
//
//�ַ�ת��
//ת�������Ѵ�д��ĸת��ΪСд��ĸ���߰�Сд��ĸת��Ϊ��д��ĸ��
//
//int tolower(int ch);//תСд
//
//int toupper(int ch);//ת��д
//
//toupper ��������������Ķ�Ӧ��д��ʽ��tolower���������������Ӧ��Сд��ʽ����������Ĳ��������Ǵ����ʵ���Сд״̬���ַ�����toupper�Ĳ�������Сд��ĸ��tolower�Ĳ������Ǵ�д��ĸ�������������޸Ĳ���ֱ�ӷ��ء�


//�ַ���������
#include<ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret=islower(ch);//�ж��Ƿ�ΪСд��ĸ�������Сд�ַ��򷵻ط�0ֵ��������Сд�ַ��򷵻�0��
//	printf("%d\n", ret);//2
//
//	//�ַ�ת��
//	//ת�������Ѵ�д��ĸת��ΪСд��ĸ���߰�Сд��ĸת��Ϊ��д��ĸ��
//	char ch1 = tolower('Q');
//	putchar(ch1);//putchar��ӡ�ַ�������ǣ�q
//	return 0;
//}

//����ַ������е����д�дתΪСд
//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))//isupper�����ж��Ƿ��Ǵ�д
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);//i am a student
//	return 0;
//}

//memcpy �ڴ濽��
//void* memcpy (void* destination,const void* source,size_t num);//�����num��source���ڴ��С��
// void* ��ͨ�����͵�ָ��-������ָ��
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
// �������������'\0'��ʱ�򲢲���ͣ����
//���source��destination���κ��ص������ƵĽ������δ����ġ�
//
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int arr1[6] = { 0 };
//	memcpy(arr1, arr, sizeof(arr));
//	struct S arr3[] = { {"gss",20},{"hhhh",25},{"gss",20},{"hhhh",25} };
//	struct S arr4[5] = { 0 };
//	memcpy(arr3, arr4, sizeof(arr3));//���Դ����ռ�ռ����Ŀ��ռ���������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
////	����	C6385	�ӡ�arr4���ж�ȡ��������Ч : �ɶ���СΪ��72�����ֽڣ������ܶ�ȡ�ˡ�96�����ֽڡ�	Run-Time Check Failure #2 - Stack around the variable 'arr1' was corrupted.
//	return 0;
//}

//�Լ�ʵ��һ��my_memcpy()
//#include<assert.h>
//void*  my_memcpy(void* des, const void* sou, size_t num)//���ص���des�ĵ�ַ
//{
// void* ret = des;
//	//void* ���ܽ�����Ҳ����+ -��
//	assert(des != NULL);
//	assert(sou != NULL);
//	char* cdes = (char*)des;//ǿתchar*����λһ���ֽ�
//	char* csou = (char*)sou;
//	//if (sizeof(des) < sizeof(sou))
//	//{
//
//	//}
//	while (num--)
//	{
//		*cdes++ =*csou++ ;
//	}
// return des;
//}

//void* my_memcpy(void* des, const void* sou, size_t num)//���ص���des�ĵ�ַ
//{
//	void* ret = des;
//	//void* ���ܽ�����Ҳ����+ -��
//	assert(des != NULL);
//	assert(sou != NULL);
//	while (num--)
//	{
//		*(char*)des = *(char*)sou;
//		++(char*)des;
//		++(char*)sou;
//	}
//	return des;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//		int arr2[5] = { 0 };
//
//		my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//���source��destination���κ��ص������ƵĽ������δ����ġ���������ӽ�����仰
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//���2345��ֵ������3456��λ�ã�����memcpy������Ϊ�����й������ڿ����Ĺ����иı���Դ�ռ����ֵ��
//	my_memcpy(arr + 2, arr, 20);//�ڴ��е�ֵ
//	return 0;
//}


//memmove �����ص�������
//void memmove (void* dest,const void* src,size_t num);

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//���3456��ֵ������2345��λ�ã�����memcpy������Ϊ�����й������ڿ����Ĺ����иı���Դ�ռ����ֵ��
//	memmove(arr + 2, arr, 20);//�ڴ��е�ֵ
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9
//	}
//	return 0;
//}

//����ʵ��my_memmove();
//#include<assert.h>
//void my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if (dest > src &&dest<((char*)src)+ num)//�Ӻ���ǰcopy�����򿽱�(dest��Χ����src��(char*)src+count֮��)��
//		//��dest>(char*)src+count����dest��Χsrc+count���ұߣ����Դ�ǰ->���Ӻ�->ǰ��
//	{
//		while (num--)
//		{
//			*((char*)(dest)+num )= *((char*)(src)+num);
//		}
//
//	}
//
//	if (dest < src)//dest��src�ұ��ǣ���ǰ����copy�����򿽱�
//	{
//		while (num--)
//				{
//					*(char*)dest = *(char*)src;
//					++(char*)dest;
//					++(char*)src;
//				}
//	}
//	return ret;
//}
////�����ж����Ҳ��д�ɣ�
////1.if(dest>src || dest>(char*)src+num){ǰ->��}��else{��->ǰ}��
////2.if(dest>src){ǰ->��};else{��->ǰ}��
//
//int main()
//{
//	int i = 0;
//		int arr[] = { 1,2,3,4,5,6,7,8,9 };
//		
//		my_memmove(arr + 2, arr, 20);
//		for (i = 0; i < 9; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	return 0;
//}

//memcmp �ڴ�Ƚ�
// ͷ�ļ�
//#include <string.h>��#include<memory.h>
//����ֵ
//�������ֵ < 0�����ʾ str1 С�� str2��
//	�������ֵ > 0�����ʾ str2 С�� str1��
//	�������ֵ = 0�����ʾ str1 ���� str2��
//int memcmp(const void* ptr1,const void* ptr2,size_t num);
//int main()
//{
//    //01 00 00 00 02 00 00 00 03 00 00 00......
//    int arr1[] = {1,2,3,4,5,6,7,8};
//    //01 00 00 00 02 00 00 00 05 00 00 00......
//    int arr2[] = { 1,2,5,3,2,6,2 };
//    int ret = memcmp(arr1, arr2, 9);//8��λ���ֽ�
//    printf("%d\n", ret);//-1
//    return 0;
//}


//memset --�ڴ�����
//memset--set buffers to a specified character--���û�����Ϊһ���ض����ַ�
//void* memset(void* dest,int c,size_t count):dest-Pointer to destination;c:Character to set:Ҫ���õ��ַ�
//count:Number of characters.
int main()
{
	//char arr[10] = "";
	//memset(arr, '#', 10);//��arr���ڴ��з���10�ֽڸ�#

	//����ʾ����
	int arr[10] = { 0 };//���������40���ֽ�
	//�޸ĺ��Ϊ��01 01 01 01 01 01 01 01 01 01 00  00  00 ......
	memset(arr, 1, 10);//10����ʮ���ֽڣ��޸���ʮ���ֽڵ�����

	return 0;
}
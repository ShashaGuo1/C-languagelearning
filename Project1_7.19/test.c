#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{   //��������ָ��Ԫ�ص�ַ����һ����������
	//1.sizeof(������)-��������ʾ��������
	//2.&������-��������ʾ��������
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a+0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a+1));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(a[1]));//
	//printf("%d\n", sizeof(*&a));//
	//printf("%d\n", sizeof(&a+1));//
	//printf("%d\n", sizeof(&a[0]));//
	//printf("%d\n", sizeof(&a[0]+1));//
	// 
//int main()
//{   //��������ָ��Ԫ�ص�ַ����һ����������
	//1.sizeof(������)-��������ʾ��������
	//2.&������-��������ʾ��������
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16  ����Ĵ�С
	//printf("%d\n", sizeof(a+0));//4  ����aû�е�������sizeof���������a��ʾ������Ԫ�ص�ַ��������Ԫ�ص�ַ+0=��Ԫ�ص�ַ����ַ�Ĵ�С4bety��32λ�����У���64λ��������8bety
	//printf("%d\n", sizeof(*a));//4  ������Ԫ�ؽ����ã���Ԫ����ռ�ռ�
	//printf("%d\n", sizeof(a+1));//4 �����еڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a));//4  ����ĵ�ַ����ַ�Ĵ�С4(32λ����)/8��64λ���ԣ�
	//printf("%d\n", sizeof(a[1]));//4  �����еڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(*&a));//16   *&a=a,����ĵ�ַ�ڽ�����=����
	//printf("%d\n", sizeof(&a+1));//4    ����ĵ�ַ�����������֮��ĵ�ַ
	//printf("%d\n", sizeof(&a[0]));//4   ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a[0]+1));//4  �ڶ���Ԫ�ص�ַ
//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); //
	//printf("%d\n", sizeof(arr+0));//
	//printf("%d\n", sizeof(*arr));//
	//printf("%d\n", sizeof(arr[1]));//
	//printf("%d\n", sizeof(&arr));//
	//printf("%d\n", sizeof(&arr+1));//
	//printf("%d\n", sizeof(&arr[0]+1));//
	// 
	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); //6   ����Ĵ�С
	//printf("%d\n", sizeof(arr+0));//4  ������Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));//1   ������Ԫ�ؽ����ã���Ԫ�ش�С
	//printf("%d\n", sizeof(arr[1]));//1 ����ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&arr));// 4   ����ĵ�ַ
	//printf("%d\n", sizeof(&arr+1));//4   ����a����һ������ռ��ĵ�ַ
	//printf("%d\n", sizeof(&arr[0]+1));//4   ����ڶ���Ԫ�ص�ַ

	//char arr[] = { 'a','b','c','d','e','f' };//
	//printf("%d\n", strlen(arr));// 
	//printf("%d\n", strlen(arr+0));//
	//printf("%d\n", strlen(*arr));//
	//printf("%d\n", strlen(arr[1]));//
	//printf("%d\n", strlen(&arr));//
	//printf("%d\n", strlen(&arr+1));//
	//printf("%d\n", strlen(&arr[0]+1));//
	// 
	//char arr[] = { 'a','b','c','d','e','f' };//strlen(�ŵ���ʼ��ַ)��
	//printf("%d\n", strlen(arr));// ���ֵ  ������ַ������ȣ��������������\0ͣ�¼��㣬
	//printf("%d\n", strlen(arr+0));//���ֵ    ��Ԫ�ؿ�ʼ��������\0ֹͣ
	//printf("%d\n", strlen(*arr));//err   *arr����Ԫ��=��a��=97->strlen(97)����д���Ǵ��󱨴����ʳ�ͻ
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ

	 //char arr[] = "abcdef";//
	//printf("%d\n", strlen(arr));//
	//printf("%d\n", strlen(arr+0));//
	//printf("%d\n", strlen(*arr));//
	//printf("%d\n", strlen(arr[1]));//
	//printf("%d\n", strlen(&arr));//
	//printf("%d\n", strlen(&arr+1));//
	//printf("%d\n", strlen(&arr[0]+1));// 

	//char arr[] = "abcdef";//�ַ�����Ԫ�أ�a b c d e f \0
	//printf("%d\n", strlen(arr));//6     ��������Ԫ�ص�ַ��ʼ���㳤������\0ͣ�¼���
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err  �Ƿ�����
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));// 6  ����ᱨ���棺strlen��const char* str��(���ǹ涨)��������&arr=char(*p)[7],û��const
	//printf("%d\n", strlen(&arr+1));//���
	//printf("%d\n", strlen(&arr[0]+1));//5

// char arr[] = "abcdef";//
 //printf("%d\n", sizeof(arr));//
 //printf("%d\n", sizeof(arr + 0));//
 //printf("%d\n", sizeof(*arr));//
 //printf("%d\n", sizeof(arr[1]));//
 //printf("%d\n", sizeof(&arr));// 
 //printf("%d\n", sizeof(&arr + 1));//
 //printf("%d\n", sizeof(&arr[0] + 1));//

	//char arr[] = "abcdef";//�ַ�����Ԫ�أ�a b c d e f \0
	//printf("%d\n", sizeof(arr));//7     �ַ�����С���ռ��С��
	//printf("%d\n", sizeof(arr + 0));//4  ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));//1      ��Ԫ��
	//printf("%d\n", sizeof(arr[1]));//1     �ڶ���Ԫ��
	//printf("%d\n", sizeof(&arr));// 4       ���������ַ
	//printf("%d\n", sizeof(&arr + 1));//4  arr����������������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	 //char* p = "abcdef";  //
	//printf("%d\n", sizeof(p));//
	//printf("%d\n", sizeof(p+1));//
	//printf("%d\n", sizeof(*p));//
	//printf("%d\n", sizeof(p[0]));//
	//printf("%d\n", sizeof(&p));//
	//printf("%d\n", sizeof(&p+1));//
	//printf("%d\n", sizeof(&p[0]+1));//

	//char* p = "abcdef";  //��a��ַ����p(p�д���ַ�����Ԫ�ص�ַ)   a b c d e f \0
	//printf("%d\n", sizeof(p));//4     char* p,p��ָ�룬�ַ�������Ԫ�ص�ַ������ָ�����p�Ĵ�С��
	//printf("%d\n", sizeof(p+1));//4       �ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(*p));//1          ��һ��Ԫ��
	//printf("%d\n", sizeof(p[0]));//1         ��һ��Ԫ�� int arr[10];arr[0]==*(arr+0);p[0]=*(p+0)=='a'
	//printf("%d\n", sizeof(&p));//4         �����ַ
	//printf("%d\n", sizeof(&p+1));//4         ����һ��������ַ
	//printf("%d\n", sizeof(&p[0]+1));//4       �ڶ���Ԫ�ص�ַ

	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//
	//printf("%d\n", strlen(p+1));//
	//printf("%d\n", strlen(*p));//
	//printf("%d\n", strlen(p[0]));//
	//printf("%d\n", strlen(&p));//
	//printf("%d\n", strlen(&p+1));// 
	//printf("%d\n", strlen(&p[0]+1));//

	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6   �ӵ�һ��Ԫ�ؿ�ʼ
	//printf("%d\n", strlen(p+1));//5   �ӵڶ���Ԫ�ؿ�ʼ
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//���     ָ��ĵ�ַ
	//printf("%d\n", strlen(&p+1));// ���      ָ��ĵ�ַ����4bety���ַ
	//printf("%d\n", strlen(&p[0]+1));//5         ȡ��һ��Ԫ�ص�ַ+1=�ڶ���Ԫ�ص�ַ

	//��ά����
	//int a[3][4] = { 0 };//
	//printf("%d\n", sizeof(a));// 
	//printf("%d\n", sizeof(a[0][0]));//
	//printf("%d\n", sizeof(a[0]));//
	//printf("%d\n", sizeof(a[0]+1));//
	//printf("%d\n", sizeof(*(a[0]+1)));//
	//printf("%d\n", sizeof(a+1));//
	//printf("%d\n", sizeof(*(a+1)));//
	//printf("%d\n", sizeof(&a[0]+1));//
	//printf("%d\n", sizeof(*(&a[0]+1)));// 
	//printf("%d\n", sizeof(*a));// 
	//printf("%d\n", sizeof(a[3]));//
//	return 0;
//}

	//��ά����
	//int a[3][4] = { 0 };//��ʵһ����ά�������ڴ�����������
	//printf("%d\n", sizeof(a));// 12*4=48     ����Ĵ�С
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16        a[0]�൱�ڵ�һ����Ϊһά�����������sizeof(a[0])������������������sizeof�ڣ�������ǵ�һ�д�С
	//printf("%d\n", sizeof(a[0]+1));//4         a[0]�ǵ�һ�е������������ǰ������ά���������3��һά������ɣ��������a[0]������������ʾ���ǵ�һ����Ԫ�ص�ַ��a[0]+1��һ�еڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(*(a[0]+1)));//4     ��һ�еڶ���Ԫ�ؽ�����
	//printf("%d\n", sizeof(a+1));//4             a����Ԫ�ص�ַ�����ǰѶ�ά���鿴��3��һά������ɣ�a����ֻ������Ԫ�أ�a����Ԫ����a[0]��һ�е�ַ������a+1�ǵڶ��������ַ
	//printf("%d\n", sizeof(*(a+1)));//16            �ڶ��е�ַ�����ã��õ��ڶ�������ֵ
	//printf("%d\n", sizeof(&a[0]+1));//4            �ڶ��е�ַ
	//printf("%d\n", sizeof(*(&a[0]+1)));// 16         �ڶ��е�ַ������
	//printf("%d\n", sizeof(*a));// 16                 a[0]��Ԫ�ؽ����ã���Ԫ�ش�С��Ԫ���ǵ�һ��
	//printf("%d\n", sizeof(a[3]));//16             sizeof(a[3])�в�ȥ���������ַ��ֻ�Ǹ�����֪���㣬��Ȼ��4�в����ڵ�����������
//	return 0;
//}

//int main()
//{   
//	int a[5] = { 1,2,3,4,5 };  
//	int* ptr = (int*)(&a + 1);   //
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));// 
//	return 0;
//}

//int main()
//{   
//	int a[5] = { 1,2,3,4,5 };  
//	int* ptr = (int*)(&a + 1);   //����ĵ�ַ�����һ�������ĵ�ַ��(&a + 1)����ָ������������Ҫǿ��ת��
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));// 2 ��5    (a+1)��Ԫ�ص�ַ+1=�ڶ���Ԫ�أ�
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}; *p;  //�ṹ��ָ��  
////����p��ֵ��0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪�ṹ��Test���͵ı�����С��20�ֽ�,ÿ������ռ4bety
////������ָ��+1
//int main()
//{   //0x1��16���Ƶ�1��ֵ��ʮ����1ֵһ��
//	p =(struct Test*) 0x100000;//
//	printf("%p\n", p + 0x1);  //
//	printf("%p\n", (unsigned long)p + 0x1); //
//	printf("%p\n", (unsigned int*)p + 0x1); //
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}; *p;  //�ṹ��ָ��  
////����p��ֵ��0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪�ṹ��Test���͵ı�����С��20�ֽ�,ÿ������ռ4bety
////������ָ��+1
//int main()
//{   //0x1��16���Ƶ�1��ֵ��ʮ����1ֵһ��
//	p =(struct Test*) 0x100000;//������ǿ��ת��Ϊ�ṹ��ָ�루�ṹ���ַ��
//	printf("%p\n", p + 0x1);  //�ṹ��ָ���ַ+1=�����ṹ��ĵ�ַ��ַ0x00100014
//	printf("%p\n", (unsigned long)p + 0x1); //pָ��ǿתΪ�޷��ų�����0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1); //pָ��ǿתΪ�޷��ų�����ָ��+1=�����4bety-��0x00100004
//	return 0;
//}

//int main()
//{ //                                                       
//	int a[4] = { 1,2,3,4 };//
////
//	int* ptr1 = (int*)(&a + 1);//
//	int* ptr2 = (int*)((int)a + 1);//
//	printf("%x,%x", ptr1[-1], *ptr2);//
//}
//
//int main()
//{ //                                                       
//	int a[4] = { 1,2,3,4 };//������ÿ���ֽڵ����ݶ��������01 00 00 00| 02 00 00 00|03 00 00 00|04 00 00 00
////��ǰ��С�˴洢                                        �͵�ַ                                          �ߵ�ַ
//	int* ptr1 = (int*)(&a + 1);//(&a + 1)����ָ��+1=������������ĵ�ַ���ٰ������ַǿתΪ����ָ��
//	int* ptr2 = (int*)((int)a + 1);//��a������Ԫ�ص�ַǿתΪ����+1-����ǿתΪ����ָ��Ҳ������Ԫ�ص�ַ�����1byte
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1]==*(ptr+-1):��Ϊ������ָ����ǰ��4byte�ڽ�����ȡ4byteȡ���ݴ��ڴ��е���ȡ�������Ϊ0x00 00 00 04��0x4��*ptr2���׵�ַ�Ⱥ���1byte��ַ�ڽ����ã�int*������4byte��00 00 00 02:С�˴洢.���ڴ����ó�ֵ�������ó�����0x02 00 00 00
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//
//	int* p;
//	p = a[0]; //
//	printf("%d", p[0]); // 
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//(0,1):�������Ƕ��ű��ʽ��1��(2,3)�����3��(4,5)��5��
//	//int a[3][2] = { (0,1),(2,3),(4,5) };==int a[3][2] = {1,2,5 };��ʾa[0][0]=1;a[0][1]=2;a[1][0]=5
//	int* p;
//	p = a[0]; //��ά����a[0]�൱�ڰѵ�һ�е���һ��������һά����,�����������a[0]��p = a[0]����һά����a[0]��Ԫ�ص�ַ����pָ��
//	printf("%d", p[0]); // 0  p�д���a[0][0]��ַ:p[0]=*(p+0)
//	return 0;
//}

//int main()
//{
//	int a[5][5];  
//	int(*p)[4];    
//	p = a;       
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	
//}

//int main()
//{
//	int a[5][5];  //����
//	int(*p)[4];    //p��һ��ָ��ָ��һ�����飬������4��int����Ԫ�ء�
//	//p������int(*)[4]��a[0]��������int(*)[5],���ߵ����Ͳ�һ���������ᱨ����
//	p = a;       //��a������Ԫ�ص�ַ����p��a������Ԫ����a[0],��Ԫ�ص�ַ��ʾΪ&a[0][0]==a[0];
//	//p[4][2]==*(*(p+4)+2)=>p��int*[4] �������4��4*4bety=64byte���������ַ��m��
//	//�ڽ������õ��������ַ��m����4byte�Ŀռ䣨�൱���õ�һ��4byte�ռ��������趨��Ϊarr[4]����
//	//�õ�4byte�ռ�������൱���õ����������arr,����������൱����Ԫ�ص�ַ֮��+2�����2*4=8bety��֮���ڽ�����
//	//�õ������ַ�е�����
//	//ָ��-ָ��=����֮��Ԫ�ظ���������&p[4][2] < &a[4][2]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC ,-4
//	// -4��%p��ʽ��ӡ��-4ԭ���ǣ�10000000000000000000000000000100
//	//                     ���룺11111111111111111111111111111011
//	//                     ���룺11111111111111111111111111111100 �ڴ��� ����%d��ʽ��ӡ�ڰѲ���ת��Ϊԭ���ӡ����
//	//                     ����%p��ʽ��ӡ��Ҫת��Ϊ16���ƣ�������Ϊ�ڴ���(����)��ľ��ǵ�ַ%p���Դ�ӡ��ַ
//	//                     ����ת��Ϊԭ����ֱ�Ӵ�ӡ��������16���Ʒ�ʽ����0xfffffffc
//}

//����С֪ʶ�����������ṩ˼·
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;//arr[0]�ĵ�ֵַ��ֵ��pָ��
//	//*(p + 2) == arr[2] == p[2] = *(arr + 2);
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);  
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);  //�����ַ+1�������ַ�����������ռ��ĵ�ַ
//	int* ptr2 = (int*)(*(aa + 1));//*(aa + 1)==aa[1] aa[1]==�ڶ�����Ԫ�ص�ַ
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//  *(ptr1 - 1):��Ϊ��int*ptr1-1��ַ��ǰ��4bety���ڽ�����ȡ4bety�ռ��е�ֵ��10��
//	//*(ptr2 - 1):�ڶ��е�ַ-1==�ڶ��е�ַ��ǰ��4bety���ڽ�����4bety�ռ䣬5,��
//}

//����С֪ʶ�����������ṩ˼·
// int main()
//{
//char* p = "abcdef";//�ַ�ָ��ָ��һ���ַ���������ĸ
//return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;     
//	pa++;               
//	printf("%s\n", *pa);
//}





//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//����a��������ʵ������ָ��w��a��a�����ַ���ָ�롣a������������Ԫ�أ�char* w��char* a,char* a.
//	char** pa = a;      //ȡa������Ԫ�ص�ַ�ĵ�ַ��paָ��ָ��a,
//	pa++;               //char** pa:�ĺ���char* *pa:*pa��ʾ*pa��һ��ָ��ָ��char*�ġ�
//	//pa++ָpa+1������һ��paָ��Ԫ�ص�������ռ�Ŀռ䡣paָ��Ԫ��������char*������һ��char*Ԫ���ڴ棬
//	//����ָ����char* a�ĵ�ַ��
//	//*pa�ҵ�paָ������ݣ�paָ�����char* aҲ����paָ��at���ַ������׸���ĸa���õ������a���ĵ�ַ
//	printf("%s\n", *pa);//��ӡ�ӡ�a����ַ��ʼ,�����ڡ�\0��
//}//�����at

//          a[]
//char**-->char*-->'work'
//         char*-->'at'
//	       char*-->'alibaba'
// 
//       cpp[]            cp[]                   c[]
//      char***---->     char**->(4)          (1)char*--->"ENTER"
//                       char**->(3)          (2)char*--->"NEW"
//                       char**->(2)          (3)char*--->"POINT"
//                       char**->(1)          (4)char*--->"FIRST"
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);  
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);  //POINT  ��++��ָ��ָ��ڶ���Ԫ�ء�char**->(3) ��
//	//��'*'�õ���char**->(3)���������ǣ��൱�ڵõ�(3)char*--->"POINT"��ַ���ڡ�*���õ���POINT������ĸ��P���ĵ�ַ��%s����POINT��
//	printf("%s\n", *--*++cpp + 3);//�������������cppָ�򣺡� char**->(3)�� ����++��char***ָ�� char**->(2)��
//	//�ڡ�*���õ���char**->(2)�����ݣ������ǡ� (2)char*--->"NEW"����ַ���ڡ�--�����õ���char*--->"ENTER""����ַ��
//	// �ڡ�*���õ�"ENTER"��Ԫ�ء�E����ַ����+3����λ��char�������3bety�ġ�E����ַ��%s��ER
//	printf("%s\n", *cpp[-2] + 3);//��������������cppָ��" char**->(2)",cpp[-2]=*(cpp-2);cpp-2 ���cppָ��char**->(4)����ַ
//	//��*�õ���char**->(4)������Ҳ���ǡ�(4)char*--->"FIRST"����ַ����*�õ���FIRST������Ԫ�ص�ַ��F��,��+3�ĵ�'S'��ַ��%s��ST
//	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]==*(*(cpp-1)-1):��������������cppָ��" char**->(2)",
//	//��-1ָ��char**->(3)������*�ġ�char**->(3)�������൱�� "(3)char*--->"POINT""��ַ����-1�õ�(2)char*--->"NEW"��ַҲ���ǡ�N����ַ
//	//��+1de'E'�ĵ�ַ����%s�ģ�EW��
//	return 0;
//}


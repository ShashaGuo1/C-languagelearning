#define _CRT_SECURE_NO_WARNINGS

//字符串全面学习

//字符函数和字符串函数
//1.求字符串长度：
//strlen
//2.长度不受限制的字符串函数
//strcpy
//strcat
//strcmp
//3.长度受限的字符串函数介绍
//strncpy
//strncat
//strnemp
//4.字符查找
//strstr
//strtok
//5.字符串操作
//6.内存操作函数
//memcpy
//memmpve
//memset
//memcmp
//7.错误信息报告
//strerror

//c语言中对字符串的处理很频繁，但c语言本身是没有字符串类型的，字符串通常放在常量字符串中或者字符数组中，
//字符串常量适用于哪些对它不做修改的字符串函数
//strlen：
// 库函数：size_t strlen(const char* string)
// 字符串以'\0'作为结束标志，strlen函数返回的是在字符串中‘\0’前面出现的字符个数（不包含‘\0’）
// 参数指向的字符串必须以‘\0’结束
// 注意函数的返回值为size_t,是无符号的（易错）。
//int main()
//{
//	int len = strlen("abcdef");//strlen 是从首元素开始计数到遇到第一个‘\0’停止计数。
//	char arr[] = { 'a','b','c','d','e' };
//	int len1 = strlen(arr);//数组名是首元素地址开始计数到，遇到第一个'\0'停止，显然arr[]数组中无‘\0’
//	//所以len1的值是随机的。
//	printf("%d\n", len);
//	return 0;
//}

//创建自定义my_strlen()有三种方法
//1.计数器法
//2.递归法
//3.指针-指针

//计数器法
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
//	//请告诉我下面的代码是？
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");//这个结果是hehe
//	}
////	解析:为什么是hehe呢？
////自己写的函数：返回值是int ，int my_strlen(const char* str)
////而库中给的函数是：返回类型， size_t strlen(const char* string)
////	想知道size_t 是什么点击它右击鼠标-》转到定义看到这句话：typedef unsigned int    size_t;(意思是把
//// size_t重定义了unsigned int，所以size_t==unsigned int无符号数)
////	size_t
////(strlen("abc") - strlen("abcdef")
////    3          -      6     =     -3(此时我们把-3当做一个无符号数来看)这个结果被看成是一个大于0的数。
//
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//strcpy
//char* strcpy(char* destination,const char* source);
// source：源， destination：目的地
//源字符串必须以'\0'结束
//会将源字符串的‘\0’拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char ch[20] = "##########";
//	strcpy(ch, arr); //会将源字符串的‘\0’拷贝到目标空间,也就是把源字符串拷进目标字符串
//	//（把目标字符串的内容覆盖为源字符串）
//	printf("%s", ch);//打印%s是以‘\0’结束
//	return 0;
//}

//模拟实现一个my_strcpy
//#include<assert.h>
//char* my_strcpy(char* des, const char* sou)
//{
//	asserrr(des != NULL);
//	asserrr(sou != NULL);
//	char* ret = des;
//	//拷贝sou指向的字符串到des指向的空间，包含‘\0’
//	while (*sou != '\0')
//	{
//		*des = *sou;
//		des++;
//		sou++;
//	}
//	*des = *sou;//这里是把‘\0’考到des中
//
//	//上面代码精简
//	//while (*des++ = *sou++)
//	//{
//		//;
//	//}
//
//	return des;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char ch[20] = "##########";
//	//错误的示范
//	//char arr2[] = { 'b','a','c' };//因为没有‘\0’
//    //错误示范
//	//char* arr1 = "abcdefg";//arr1目标空间必须可变
//	my_strcpy(ch, arr);
//	printf("%s", ch);
//	return 0;
//}


//strcat:字符串追加
//char* strcat (char* destination,const char* source);
//源字符串和目标字符串必须以'\0'结束：因为源字符串找到目标字符串的第一个‘\0’从此覆盖上拷贝过去。
//目标空间必须足够大，能容纳下源字符串内容
//目标空间必须可修改
//字符串自己不能给自己追加：会崩溃。

//int main()
//{   //目的地字符串
//	char arr1[30] = "hello";//char arr1[] = "hello";这样写会报错:因为arr1的空间不够
//	//Run-Time Check Failure #2 - Stack around the variable 'arr1' was corrupted.
//	char arr2[] = "world";//源头字符串，源头是连‘\0’也拷贝过去的，因为两字符串合体时，目的字符串还要用这个‘\0’结束。
//	strcat(arr1, arr2);//把arr2的字符串追加到arr1里
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现一个my_strcat
//#include<assert.h>
//char* my_strcat(char* des, const char* sou)
//{
//	assert(des && sou);//等同于assert(des!=NULL);assert(sou!=NULL);
//	char* ret = des;
//	//找到目标字符串的‘\0’
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

//strcmp字符串比较
//int strcmp(const char* str1,const char* str2)
//value        relationship of string1 to string2
//  <0          string1 less than string2
//  0           string1 identical string2
//  >0          string1 greater than string2
//#include<string.h>
//int main()
//{
////	在vs这编译器中
//// 	     value
////s1>s2   1
////s1=s2   0
////s1<s2   -1
////
//// 	在linux-gcc
//// 	     value
////s1>s2   >0
////s1=s2   ==0
////s1<s2   <0
//	char arr1[] = "abcde";//也可写成：char* p1="sssf";char* p2="sasf";
//	char arr2[] = "abcda";
//	int ret=strcmp(arr1, arr2);//strcmp(地址1, 地址2):
//	printf("%d\n", ret);//-1  说明字符串arr1小于arr2，这里比大小比的是字符串arr1与arr2首元素大小，因为a<s.
//	//若两字符串首元素相等那就比较两个第二个元素之间的大小关系。
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


//模拟比较函数
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
//	if (*p1 > *p2)  //在liunx中大于和小于直接写成一句话return (*p1-*p2);
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


//比较strncpy 与strcpy 库函数
//char* strcpy (char* strDestination,const char* strSource);
//char* strncpy (char* strDest,const char* strSource,size_t count);//单位字节

//char* strncpy(char* destination,const char* source,size_t num);
//拷贝num个字符从源字符串到目标空间
//如果源字符串的长度小于num则拷贝完源字符串后，在目标的后边追加0，直到num个字节空间被占满。
//int main()
//{
//	//char arr1[10] = "abcdef";
//	//char arr2[] = "hello world";
//	//strncpy(arr1, arr2, 4);//把arr2中的前4个字符拷贝到arr1中。:这四个字符没有'\0',
//	//printf("%s\n", arr1); //hellef
//
//	//char arr11[10] = "abcde";//这个字符串在内存中是：abcde\0\0\0\0\0
//	//char arr22[] = "hello world";
//	//strncpy(arr11, arr22, 8);//这里是把“hello wo”：(其中没有拷贝‘\0’)拷贝进arr2中
//	//printf("%s\n", arr11);//hello wo
//
//	char arr3[10] = "abcde";//这个字符串在内存中是：abcde\0\0\0\0\0
//	char arr4[] = "hel";
//	strncpy(arr3, arr4, 6);//这里是把“hel\0\0\0”(多出的三位用\0填充)：拷贝进arr2中
//	printf("%s\n", arr3);//hel
//	return 0;
//}

//模拟实现strncpy
//#include<stdio.h>
//char* my_strncpy(char* des,const char* sou, size_t num)// typedef unsigned int     size_t;(无符号整型)
//{
//	int i = 0;
//	char* ret = des;
//	while (num && (*des++ = *sou++))//num=0：把num个数字符赋给des时终止循环，或sou赋给des‘\0’时终止循环
//	{
//		num--;
//	}
//	if (num) //直到把num个字符赋给des为止。
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
//	char arr11[10] = "abcde";//这个字符串在内存中是：abcde\0\0\0\0\0
//    char arr22[] = "hello world";
//	my_strncpy(arr11, arr22, 8);//这里是把“hello wo”：(其中没有拷贝‘\0’)拷贝进arr2中
//	printf("%s\n", arr11);
//
//	char arr3[10] = "abcde";//这个字符串在内存中是：abcde\0\0\0\0\0
//	char arr4[] = "hel";
//	my_strncpy(arr3, arr4, 6);//这里是把“hel\0\0\0”(多出的三位用\0填充)：拷贝进arr2中
//	printf("%s\n", arr3);//
//	return 0;
//}

//strncat  追加函数
//char* strncat(char* strDest,const char* strSource,size_t num)
//这种有size_num的参数最好定义char arr1[] 形式
//#include<string.h>
//int main()
//{
//	//char arr1[8] = "hello";//因为是追加所以目标函数要足够大。它的内存中存放的：hello\0\0\0
//	//char arr2[] = "i think";
//	//strncat(arr1, arr2, 4);
//	//printf("%s\n", arr1);//Run-Time Check Failure #2 - Stack around the variable 'arr1' was corrupted.
//	//// 变量arr1周围的堆栈已损坏
//	////报错原因是arr1的内存太小了
//
//	//char arr3[30] = "hello\0*******";//这个代码是帮助我们验证arr4取3个字符追加到arr3后面时有加\0吗？
//	////假设没有追加\0:则内存结果是：hellowor*****\0\0\0\0\0\0......
//	////这个假设是对的如追加了arr3的三个字符外加\0则内存结果是:hellowor\0****\0\0\0\0\0......
//	////追加无论是arr4中几个字符都要在后面加一个‘\0’，因为只有\0才能结束字符串。
//	//char arr4[] = "world";
//	//strncat(arr3, arr4, 3);
//	//printf("%s\n", arr3);//hellowor
//
//	//char arr5[30] = "hello\0*************";//arr5内存中：hello\0*************\0\0\0\0....
//	//char arr6[] = "world";//arr6内存中：world\0
//	//strncat(arr5, arr6, 8);//8超过了arr6字符个数（arr6字符个数是6），那我们只在arr5中追加arr6的这6个字符
//	////arr6内存中：helloworld\0********\0\0\0\0....
//	//printf("%s\n", arr5); //helloworld
//	//return 0;
//}

//模拟strncat
//#include<string.h>
////方法一：
//char* my_strncat(char* des, const char* sou, size_t num)
//{
//    //追加是在目标字符串的第一个\0开始
//    //结束1：追加个数num<sou字符串元素个数，则追加num字符后在加'\0'.
//    //结束2：追加num>sou 字符串元素个数，则之追加sou整个字符串包括'\0';
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
////方法二
//char* my_strncat(char* des, const char* sou, size_t num)
//{
//    //追加是在目标字符串的第一个\0开始
//    char* start = des;
//    while (*des++)
//    {
//        ;
//    }
//    //找到des‘\0’地址
//    des--;
//    while (num--)
//    {
//        if (!(*des++ = *sou++))//单目操作符 ！取反，把真变假，假变真,这里是只有*des++ = *sou++&&*des++=='\0',
//            //也就是把sou字符串全追加在des后面。
//        {
//            return(start);
//        }
//    //这是num--==0时sou字符串没有全部追加载des后，在末尾补上‘\0’;
//     *des = '\0';
//    return(start);
//    }
//}
//int main()
//{
//    int num = 0;
//	char arr5[30] = "hello gss";//arr5内存中：h e l l o ''g s s '\0''\0''\0'......
//    char arr6[] = "world";//arr6内存中：world\0
//    //strncat(arr5, arr6, 8);//8超过了arr6字符个数（arr6字符个数是6），
//    //那我们只在arr5中追加arr6的这6个字符
//    //h e l l o ''g s s w o r l d '\0''\0''\0'......
//    printf("请输入想要追加的个数：");
//    scanf("%d", &num);
//    my_strncat(arr5, arr6, num);
//    printf("%s\n", arr5); //hello gssworld  
//    return 0;
//}

//本电脑找库函数的路径C:\Program Files (x86)\Windows Kits\10\Source\10.0.19041.0\ucrt\string\strncmp.c
//strncmp  字符串比较
//int strncmp(const char* str1,const char* str2,size_t num);
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdea";
//	const char* p1 = "skfsfhk";//加const原因：p1指向的是一个常量字符串，是不可改变的，加上const一旦有代码想改变它
//	                            //系统会报错
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
//		if (*str1 == 0 || n == num)//1、当全部字符比较完或2、比较的字符个数等于限制的个数
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
//	printf("请输入比较几位数：");
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

//函数原型：int strncmp(const char* str1, const char* str2, size_t num)
//头  文  件：#include <string.h>
//返  回  值：（与strncmp相同）str1 = str2   则返回0，
//str1 > str2  则返回大于0的值，
//str1 < str2  则返回小于0的值
//
//	说明：
//	判断两个字符串大小
//	1）ACSII码 2）长度
//	注：区分大小写比较的，如果希望不区分大小写进行字符串比较，可以使用stricmp函数
//
//	strncmp()函数首先将str1字符串的第一个字符的ACSII值减去str2第一个字符的ACSII值(自左向右比较前n个字符，直到出现不同的字符或遇'\0'为止)
//
//	若差值为零则继续比较下去；若差值不为零，则返回差值。
//
//	特别注意：strncmp可用于比较两个字符串常量或比较数组和字符串常量，不能比较数字等其他形式的参数。
//
//	与strcmp的区别
//	1、先比较一下两个函数传参的不同：
//
//	int My_strncmp(const char* str1, const char* str2, int num)
//
//	int My_strcmp(const char* str1, const char* str2)
//
//	strcmp与strncmp都是用来比较字符串的，区别在于能否比较指定长度字符串，故要多传一个长度参数，这也使得strncmp比strcmp更加精细。
//
//
//
//	函数实现：
//	//以null结尾的字符串 const修饰防止字符串被修改，进行保护
//	int My_strncmp(const char* str1, const char* str2, int n)
//{
//	if (!n)   //n=0时，无字符要比，直接return 0
//		return 0;
//	while (--n && *str1 && *str1 == *str2) //当字符相等且不为’\0‘时比较下个字符，直到n=0比完
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;//字符不相等时，（*str1 - *str2）可以满足返回值正负的需求
//}
//用法示例：
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
//	//经过手算可发现O的ACSII=79，S的ACSII=83,应该返回4 
//	printf("%d\n", My_strncmp(str1, str2, 2));
//	return 0;
//}

//strstr  查找字符串：find a substring
//char* strstr(const char* string ,const char* strCharSet);//const 是只查找两个字符串。
//string :Null-terminated string to search:\0结束的字符串被查找（母字符串）
//strCharSet:Null-terminated  to search for.：\0结束的字符串要查找（子字符串）
//在文档中：NULL--空指针；  NUL或Null--‘\0'

//int main()
//{
//	char arr[] = "abcdefgbcd";
//	char arr1[] = "bcd";//在arr[]中找有没有arr1[],若有则返回arr1[]在arr[]中出现的子字符串的首元素地址
//	//若arr[]中有不止一个arr1[]字符串则以从左向右第一个为准。
//	char arr2[] = "bcda";//若找不到则返回空指针
//	char* ret=strstr(arr, arr1);
//	char* ret1 = strstr(arr, arr2);
//	//printf("%p\n",arr+1);//009DFC1D
//	//printf("%p\n", ret);//009DFC1D
//	//printf("%p\n", ret1);//00000000
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);//bcdefg
//	}
//	return 0;
//}


//本电脑中strstr（）的库函数路径：C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.29.30133\crt\src\x64
// 或C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.29.30133\crt\src\vcruntime
//模拟my_strstr（）
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//特殊情况排查：若str2是空字符串呢？：说明str2中此时只有一个'\0'.
//	//这里有多种特殊情况：1.str1*="abcdef",str2*="def";2.str1*="abcde",str2*="def";3.str1*="abcdeqa",str2*="def";
//	//4.str1*="abbbcdef",str2*="bbc";//这种第一次查询会失败，就从abbbcdef第二个b在开始查找。但是在比较的过程中
//	//str1与str2指针改的乱七八糟了。所以起初拿个自定义指针存放str1与str2，进行操作。
//	//str1*="ab",str2*="bbcsh";
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)str1;//比较的实时起始位置
//	if (*str2 == '\0')//if (!*str2):当*str2=='\0'时ASCII码是0，！0为真.
//	{
//		return (char*)str1;//因为str原本是const char* 类型所以这里要强转一下否则会有警告。
//	 }
//	while (*cur)
//	{
//		s1 = cur;
//		s2 =(char*) str2;
//		while ((*s1 == *s2) && (*s2 != '\0') && (*s1 != '\0'))
////也可以写成：while (*s1 && *s2 && !(*s1-*s2))
//		{
//			
//			s1++;
//			s2++;
//		}
//		if (*s2 =='\0')//也可以写成!*s2
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//str1的长度比str2小。
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
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);//bbcdef
//     }
//	return 0;
//}

//实现strstr函数用kmp算法

//strtok
//char* strtok(char* str,const char* sep);
//1.sep参数是字符串，定义了用作分隔符的字符集合
//2.第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分隔的标记。
// 3.strok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。（注：strok函数会改变被操作的字符串
// ，所以在使用strok函数切分的字符串一般都会临时拷贝的内容并且可修改）
// 4.strok函数的第一个参数不为NULL，函数将找到str中第一个标记，strok函数将保存它在字符串中的位置。
//5.strok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//6.如果字符串中不存在更多的标记，则返回NULL指针
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
//	char* p = "@.";//这是存分隔符的数组
//	//strtok这个函数是从arr这个数组中找p里的分隔符，先找到了@这个分隔符时把@改为'\0',在把首元素1的地址返回，从1的地址
//	//在往回打印：打印出1283784遇到'\0'停止，在调strtok这个函数是在从刚刚'\0'这个位置起始再找'.'找到后把'.'改为’\0'
//	//在把之前\0的地址返回打印出qq,在调用strtok函数，再以上一个\0为起始找一直找到arr[]结尾的字符串，打印出来com。
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//在buf中拷贝arr
//	char* ret = NULL;//接收函数返回值，（如果字符串中不存在更多的标记，则返回NULL指针）
//	for (ret = strtok(buf, p); ret != NULL;ret=strtok(NULL,p))//ret = strtok(buf, p)这个是触发条件,
//		//满足ret != NULL说明字符串中存在更多的标记打印字符串,在执行ret=strtok(NULL,p)；这里的NULL指要拿第二个标记
//		//并放入ret中
//	{
//		printf("%s\n", ret);
//	}
//
//	////切割buf
//	////第一次切割
//	//char* ret = strtok(buf, p);//这里ret是1的地址，这个函数把第一个\0的位置记住了。
//	//printf("%s\n", ret);//1283784
//	////第二次切割
//	//ret = strtok(NULL, p);//把'.'找到并改为‘\0'返回q的地址，并记住'\0'的地址
//	//printf("%s\n", ret);//qq
//	////第三次切割
//	//ret = strtok(NULL, p);//从c开始找发现后面没有标记了
//	//printf("%s\n", ret);//com
//	return 0;
//}

//strerror 返回错误码，所对应的错误信息（把错误码翻译成错误信息）
//char* strerror(int errnum);
//#include<errno.h>
//int main()
//{
//	//错误码    错误信息                                 这是c语言中定义
//	// 0      No error
//	// 1      Operation not permitted
//	// 2      No such file or directory
//	//char* str = strerror(0);
//	//printf("%s\n", str);//打印结果：No error
//
//	//char* str1 = strerror(1);
//	//printf("%s\n", str1);//打印结果:Operation not permitted(操作被拒绝)
//	
//	// erron是一个全局的错误码变量。
//	// 当c语言的库函数在执行的过程中（使用库函数是），发生了错误，就会把对应的错误码，赋值到errno中，用这个strerror(errno)
//	// 看错误信息
//	//char* str3 = strerror(errno);
//	
//	//举例说明：
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//r：打开文件的方式是读取
//	if (pf == NULL)//pf == NULL说明fopen()这个函数调用失败
//	{
//		//想知道打开文件失败的原因
//		printf("%s\n", strerror(errno));//No such file or directory(没有这个文件或目录)
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	//char* str2 = strerror(2);
//	//printf("%s\n", str2);//打印结果:No such file or directory（没有这个文件和文件夹）
//	return 0;
//}


//标准库包含了两组函数，用于操作单独的字符，它们的原型位于头文件ctype.h中。第一组函数用于对字符分类，而第2组函数用于转换字符。
//
//字符分类
//每个分类函数接受一个包含字符值的整型参数。函数测试这个字符并返回一个整型值，表示真或假。（注意，标准并未指定任何特定值，所以有可能返回任何非零值。）
//
//下表列出了这些分类函数以及它们每个所执行的测试：
//
//字符分类
//函数	如果它的参数符合下列条件就返回真
//iscntrl	任何控制字符
//isspace	空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车'\r'，制表符'\t'，或垂直制表符'\v'
//isdigit	十进制数字0~9
//isxdigit	十六进制数字，包括所有十进制数字，小写字母a~f, 大写字母A~F
//islower	小写字母a~z
//isupper	大写字母A~Z
//isalpha	字母a~z或A~Z
//isalnum	字母或数字a~z，A~Z或0~9
//ispunct	标点符号，任何不属于数字或字母的图像字符（可打印符号）
//isgraph	任何图像字符
//isprint	任何可打印字符，包括图像字符和空白字符
//
//
//字符转换
//转换函数把大写字母转换为小写字母或者把小写字母转换为大写字母。
//
//int tolower(int ch);//转小写
//
//int toupper(int ch);//转大写
//
//toupper 函数返回其参数的对应大写形式，tolower函数返回其参数对应的小写形式。如果函数的参数并不是处于适当大小写状态的字符（即toupper的参数不是小写字母或tolower的参数不是大写字母），函数将不修改参数直接返回。


//字符分类例子
#include<ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret=islower(ch);//判断是否为小写字母，如果是小写字符则返回非0值，若不是小写字符则返回0。
//	printf("%d\n", ret);//2
//
//	//字符转换
//	//转换函数把大写字母转换为小写字母或者把小写字母转换为大写字母。
//	char ch1 = tolower('Q');
//	putchar(ch1);//putchar打印字符，结果是：q
//	return 0;
//}

//想把字符串的中的所有大写转为小写
//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))//isupper函数判断是否是大写
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);//i am a student
//	return 0;
//}

//memcpy 内存拷贝
//void* memcpy (void* destination,const void* source,size_t num);//这里的num是source的内存大小。
// void* ：通用类型的指针-无类型指针
//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
// 这个函数在遇到'\0'的时候并不会停下来
//如果source和destination有任何重叠，复制的结果都是未定义的。
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
//	memcpy(arr3, arr4, sizeof(arr3));//如果源内容占空间大于目标空间则，严重性	代码	说明	项目	文件	行	禁止显示状态
////	警告	C6385	从“arr4”中读取的数据无效 : 可读大小为“72”个字节，但可能读取了“96”个字节。	Run-Time Check Failure #2 - Stack around the variable 'arr1' was corrupted.
//	return 0;
//}

//自己实现一个my_memcpy()
//#include<assert.h>
//void*  my_memcpy(void* des, const void* sou, size_t num)//返回的是des的地址
//{
// void* ret = des;
//	//void* 不能解引用也不能+ -；
//	assert(des != NULL);
//	assert(sou != NULL);
//	char* cdes = (char*)des;//强转char*，单位一个字节
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

//void* my_memcpy(void* des, const void* sou, size_t num)//返回的是des的地址
//{
//	void* ret = des;
//	//void* 不能解引用也不能+ -；
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

//如果source和destination有任何重叠，复制的结果都是未定义的。下面的例子解释这句话
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//想把2345的值拷贝到3456的位置，是用memcpy不行因为在运行过程中在拷贝的过程中改变了源空间里的值。
//	my_memcpy(arr + 2, arr, 20);//内存中的值
//	return 0;
//}


//memmove 处理重叠的问题
//void memmove (void* dest,const void* src,size_t num);

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//想把3456的值拷贝到2345的位置，是用memcpy不行因为在运行过程中在拷贝的过程中改变了源空间里的值。
//	memmove(arr + 2, arr, 20);//内存中的值
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9
//	}
//	return 0;
//}

//自我实现my_memmove();
//#include<assert.h>
//void my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if (dest > src &&dest<((char*)src)+ num)//从后往前copy，逆序拷贝(dest范围是在src与(char*)src+count之间)，
//		//（dest>(char*)src+count）而dest范围src+count的右边（可以从前->后或从后->前）
//	{
//		while (num--)
//		{
//			*((char*)(dest)+num )= *((char*)(src)+num);
//		}
//
//	}
//
//	if (dest < src)//dest在src右边是，从前往后copy，逆序拷贝
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
////上面判断语句也可写成：
////1.if(dest>src || dest>(char*)src+num){前->后}；else{后->前}；
////2.if(dest>src){前->后};else{后->前}；
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

//memcmp 内存比较
// 头文件
//#include <string.h>或#include<memory.h>
//返回值
//如果返回值 < 0，则表示 str1 小于 str2。
//	如果返回值 > 0，则表示 str2 小于 str1。
//	如果返回值 = 0，则表示 str1 等于 str2。
//int memcmp(const void* ptr1,const void* ptr2,size_t num);
//int main()
//{
//    //01 00 00 00 02 00 00 00 03 00 00 00......
//    int arr1[] = {1,2,3,4,5,6,7,8};
//    //01 00 00 00 02 00 00 00 05 00 00 00......
//    int arr2[] = { 1,2,5,3,2,6,2 };
//    int ret = memcmp(arr1, arr2, 9);//8单位是字节
//    printf("%d\n", ret);//-1
//    return 0;
//}


//memset --内存设置
//memset--set buffers to a specified character--设置缓冲区为一个特定的字符
//void* memset(void* dest,int c,size_t count):dest-Pointer to destination;c:Character to set:要设置的字符
//count:Number of characters.
int main()
{
	//char arr[10] = "";
	//memset(arr, '#', 10);//在arr的内存中放入10字节个#

	//错误示范：
	int arr[10] = { 0 };//这个数组有40个字节
	//修改后改为：01 01 01 01 01 01 01 01 01 01 00  00  00 ......
	memset(arr, 1, 10);//10：是十个字节，修改这十个字节的内容

	return 0;
}
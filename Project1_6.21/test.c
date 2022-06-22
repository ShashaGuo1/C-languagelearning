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

//#include<string.h>
//#include<assert.h>
////写一个函数可以逆序字符串内容
//void reverse_printing(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (right > left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{   
//	char arr[256] = {0};
//	//scanf("%s", arr);//scanf 遇到空格就不在录入了
//	gets(arr);//读取一行中间可以有空格
//	reverse_printing(arr);
//	
//		printf("%s", arr);
//	return 0;
//}

//2 22 222 2222 22222 叠加
//22=2*10+2,222=22*10+2
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	int count = 0;
//	int ret = 0;
//	for (i = 0; i < b; i++)
//	{
//		ret = ret * 10 + a;
//		count += ret;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//打印水仙花数，自幂数各各位上的数n次方和为这个数算1-100000中水仙花数有哪些。
//#include<math.h> 
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 100000; i++)  //这里设个变量为的是不对i进行运算防止改变i值，变成死循环
//	{
//		int tmp2 = i;
//		int sum = 0;
//		int tmp = i;
//		int n =1;//count 这个变量要写在循环 里面，没回运算要归一。
//		//123 为例：123/10=12,12/10=1
//		//计算有几位数
//		while (tmp /= 10 )
//		{
//			n++;
//		}
//		//把每位数取出在立方之和
//		//以123为例上已算出3位数，取每位数1. 123%10=3 123/10=12；2. 12%10=2,12/10=2;3. 2%10=2;
//		
//		while (tmp2)
//		{ 
//			sum +=(int)pow(tmp2 % 10,n);  //pow返回的是double类型所以这块应该强转一下
//			tmp2 /=  10;
//		}
//		if (i ==sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//打印一个菱形:解题思路：把菱形分成上下两部分打印，最上面是6个空格1个*，5空格3*，4空格5*，3空7*
//      *
//     *** 
//    *****
//   *******
//  *********
// ***********
//*************
// *********** 
//  *********   
//   *******
//    *****
//     ***
//      *
//解题思路：把菱形分成上下两部分打印上部分7行，下部分6行，最上面是6个空格1个*，5空格3*，4空格5*，3空7*
//下不分规律，1空11*，2空9*，3空7*
//int main()
//{
//	int n = 0;
//	printf("请输入上半部分几列：");
//	scanf("%d", &n);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; n -1- i >= j; j++)//6 5 4 3 2 1 0
//		{
//			printf(" ");
//		}
//		//打印*
//		int k = 0;
//		for (k = 0; k < i * 2 + 1; k++) //1,3,5..13
//		{
//			printf("*");
//		}printf("\n");
//	}
//		//下半部打印
//	     int q = 0;
//		 for (q = 0; q < n - 1; q++)
//		 {	//打印空格
//			 int m = 0;
//			 for (m = 0; m <= q + 1; m++)//1,2,3,4,5,6
//			 {
//				 printf(" ");
//			 }
//			 //打印*
//			 int o = 0;
//			 for (o = 0; o <(n - 1-q) * 2 -1; o++) //11,9,7,5,3,1，;
//			 {
//				 printf("*");
//			 }
//			 printf("\n");
//		 }
//
//	return 0;
//}
//

//输出的结构体成员a的数据？
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{ 
//	struct S a, * p = &a;
//	a.a = 99;
//	//------输入什么的a的数据
//	printf("%d\n", p->a);
//	printf("%d\n", a.a);
//	printf("%d\n", (*p).a);
//	return 0;
//}


//输出结果是什么
//struct stu
//{
//	int num;
//	char name[20];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{ 
//	struct stu students[3] = { {9801,"zhang ",20},
//		{9802,"wang",19},
//		{9803,"zhao",18}
//	};
//	fun(students + 1); //wang
//	return 0;
//}


//编程题：喝汽水，一瓶汽水1元钱，两个空瓶换一个汽水，给20元，可以喝多少汽水。
//


//编程题：一个数组里调整奇数使奇数全部位于偶数前边。
//这个方法不够好，没有自定函数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ar[sizeof(arr) / sizeof(arr[0])] = { 0 };
//	int* p = &ar;
//	int* pp = &ar;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			*p = arr[i];
//			p += 1;
//		}
//		else
//		{
//			*(pp + sz - 1) = arr[i];
//			pp--;
//		}
//
//	}
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		arr[j] = ar[j];
//		printf("arr[%d]=%d ",j, arr[j]);
//	}
//	return 0;
//}

//编程题：一个数组里调整奇数使奇数全部位于偶数前边。
//void print(int arr[], int sz)
//{   
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//#include<string.h>
////1 2 3 4 5 6 7 8 9 10
////两头同时进行从前面找一个偶数，从尾部开始找一个奇数把这两个找到的数交换数。
//void move(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左边找偶数,left<right)加上这句话 的原因是防止全是奇数这样left++会越界。
//		while ((left<right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数left<right)加上这句话 的原因是防止全是偶数这样right++会越界。
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//	}
//	
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//输出结果是什么
//int main()
//{   //unsigned char 的范围是0-255.
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	//a:11001000
//    //b:01100100
//	// 相加要整形提升：因为是无符号的所以高位直接补0；若是char型有符号位对于11001000：整形提升高位补1
//	// 00000000000000000000000011001000
//	// 00000000000000000000000001100100  相加
//	// 00000000000000000000000100101100   这个是a+b的值 得把这个值放入unsigned char c
//	//从上面的数中截取8位 c:00101100
//	//a和b都是char类型运算时要进行整型提升，
//	//:00000000000000000000000011001000
//	//a:11001000
//	//:00000000000000000000000001100100
//	//b:01100100
//	printf("%d %d", a + b, c);//300 44
//	// 00000000000000000000000100101100   这个是a+b直接整型打印，的值这是个正数的补码所以原码补码一样
//	//从上面的数中截取8位 c:00101100，c这是是char型，打印%d所以要在整形提升（因为c是unsigned char）
//	//所以高位补0：00000000000000000000000000101100这是内存中存的补码，应该打印原码，但发现是正数所以原码与补码相同，直接打印。
//	return 0;
//}


//这里先回忆一下大端和小端字节存储的知识点
//有一个值0x11223344  这个数低位是44，高位是11
//内存低低地址                              高地址
//小端字节序存储模式44332211（低位放在低地址）  大端字节序存储模式  11223344（低位放在高地址）
//int main()
//{
//	//在32位小端模式处理器上变量b等于什么
//	unsigned int a = 0x1234;  //0x00001234  在内存中小端存储：0x00001234
//
//	unsigned int b = *(unsigned char*)&a;
//	//内存中a：0x00001234
//	//*(unsigned char*)&a:0x00
//
//	//若是小端存储的话a：0x34120000
//	//*(unsigned char*)&a:0x34;%d打印出来是因为是无符号所以高位补0，内存补码与打印出的原码是相同的，
//	printf("%d\n", b);//52  (32位小端存储时b得)
//	return 0;
//}

//#include<string.h>
//int main()
//{  //有符号char范围：-128--127；
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ...-128 (-128-1)=127,126...3 2 1 0,
//	printf("%d\n", strlen(a));//255   strlen是找‘\0’停止这里0相当于‘\0’
//}


//打印杨辉三角
//           1
//          1 1
//         1 2 1
//        1 3 3 1
//       1 4 6 4 1
// 
//可以把上面的图改一下更好理解
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//让第一列与对角线都为一
//	for (i = 0; i < 10; i++)	
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++) 
//		{
//			
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜凶手的题：日本某地发生一起谋杀，警察通过排查确定杀人凶手必为四个人中之一
//a说：不是我；b说：是c；c说：是d；d说：c在胡说
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}


//赛马问题，有36匹马，6个跑道，没有计时器，找出36匹马中前3名，最少比几次？11次

//有一种香，材质不均匀但是每根香燃烧完是1小时，给你两根香，帮忙确定15分钟的时间段、
//思路：第一根香两头都点着同时把第二根香一头点燃，第一根香烧完用时30分，此时再把第二个根香另一头也点上
//第二根香烧完正好15分钟。


//编程
//5为运动员参加10米跳水比赛，有人让他们预测比赛结果
//a.说：b第二，我第一。  b说我第二，e第四
//c说：我第一，d第二。d说：c最后，我第三
//e说我第四，a第一
//比赛结束后每位选手都数对了一半，请编程确定比赛名次。

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	
//		for (a = 1;a <= 5; a++)
//		{
//			for (b = 1; b <= 5; b++)
//			{
//				for (c = 1; c <= 5; c++)
//				{
//					for (d = 1; d <= 5; d++)
//					{
//						for (e = 1; e <= 5; e++)
//						{
//							if (((b == 2) + (a == 3)==1)
//								&& ((b == 2) + (e == 4) == 1)
//								&& ((c == 1) + (d == 2) == 1)
//								&& ((c == 5) + (d == 3) == 1)
//								&& ((e == 4) + (a == 1) == 1))
//							{
//								if (a * b * c * d * e==120)
//								{
//									printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//								}
//							}
//							
//						}
//					}
//				}
//			}
//		}
//	return 0;
//}

//#include<stdlib.h>
////这句话对吗？当使用free释放掉一个指针内容后，指针变量的值被置为NULL：这里free不会改变指针的指向
//int main()
//{
//	//malloc这个函数是向内存申请空间的，默认返回型是void*
//	//申请空间
//	int* p = (int*)malloc(10*sizeof(int));//申请了40bety空间。
//	//使用空间
//	//*****这里以后学习
//	//释放空间
//	free(p);
//	//看监控：这里free后内存没有改，而free后系统是不会该p的值，但人为应该改值的。
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	char* str3 = "hello bit";
//	char* str4 = "hello bit";
//	if (str1 == str2)
//	{
//		printf("str1 == str2\n");//两个数组的是分配不同的存储空间的，数组名指的首元素地址，这两个首元素地址自是不同的
//	}                             //数组是放在栈上的是可以改里面的值的
//	else
//	{
//		printf("str1!=str2\n");
//	}
//	if (str1 == str2)
//	{
//		printf("str3 == str4\n");//str3与ste4指向的是以个常量字符串，内存中相同常量只有一份，所以他们指向的是同一常量字符串
//	}                            //常量是放在内存的只读数据区的，是不可修改。
//	else
//	{
//		printf("str3!=str4\n");
//	}
//	//结果：str1!=str2  str3!=str4
//	return 0;
//}

//下面那个是函数指针？
//int* fun(int a,int b);//只是一个函数声明，参数是(int a,int b)，返回类型int*
// int(*)fun(int a,int b);//这个语法是错误的。
//int (*fun)(int a,int b);//这是函数指针*fun代表是一个指针，指向一个参数为(int a,int b)返回值为int的函数
//(int*)fun(int a,int b);//这是一个函数声明，参数是(int a,int b)，返回类型是int*
// 


//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参且返回int的函数？
//int main()
//{
//	//它的返回类型是去掉函数名和参数的部分
//	int(*(*p)(int, int))(int);  //类型是：函数指针int(*)(int)
//	return 0;
//}


//声明一个指向含有10个元素的数组的指针，其中每一个元素是一个函数指针，该函数的返回值是int，参数是int*
//int main()
//{
//	int(*(*p)[10])(int*);
//	return 0;
//}

//设有一下函数void fun(int n.char* s){......},则下面对函数指针的定义和赋值均正确的是。
//void (*pf)(int,char);pf=&fun;
//void(*pf)(int n,char* s);pf=fun;//right
//void *pf();*pf=fun();
//void *pf();pf=fun;

//test函数设计正确的是：
//char* arr[5]={"hello","bit"};
//test(arr);//
//题目内容：//下面声明函数正确的是
//void test(char* arr);
//void test(char** arr);//对的
//void test(char arr[5]);
//void test(char* arr[5]);//对的

//下面代码中print_arr函数参数设计正确的？
//int arr[3][5]={1,2,3,4,5,6,7,8,9,10};
//print_arr(arr,3,5);//arr数组名这里表示把二维数组的首元素地址传入，arr首元素地址是第一行
//a.void print_arr(int arr[][],int row,int col);//不对没有指定行和列
//b.void print_arr(int* arr,int row,int col);//传的是数组这里传的是一级指针是不行的
//c.void print_arr(int(*arr)[5],int row,int col);//对的把5个元素的数组指针
//d.void print_arr(int (*arr)[3],int row,int col);

//下面代码执行结果是？
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);//(&a + 1):跳过这个数组的地址，在强转类型为int*把值付给ptr
//	printf("%d,%d", *(a + 1), *(ptr - 1));//4 1   a是数组名是首元素地址。
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };//二维数组
//	int* ptr1 = (int*)(&aa + 1);//&aa+1:向后跳一个数组，在强转。
//	int* ptr2 = (int*)(*(aa + 1));//aa：数组名是首元素地址对于二维数组首元素地址是数组第一行地址，aa==aa[0],
//	//aa+1==aa[1],*(aa + 1)==aa[1]->第二行解引用相当于拿到数组名。
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1  6                                                                                     
//	return 0;
//}

//编程题：实现一个函数，可以左旋字符串中的k个字符，
//例如ABCD左旋一个字符得到BCDA
//ABCD 左旋两个字符得到CDAB

//分析一个数组有ABCD   a[0]=A;a[1]=B;a[2]=C;a[3]=D,左旋一位把a[0]移到a[3]的中其他a[1]->移到a[0],a[2]->a[1];a[3]->a[2]
//ABCD 左旋两位
#include<string.h>
#include<assert.h>
//暴力求解法方法一
//void left_move(char* arr, int  n)//可以写成char arr[]
//{
//	assert(arr);//断言一下arr指针是否有效，无效是arr是一个NULL指针
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int tmp = 0;
//		tmp = *arr;
//		int j = 1;
//		for (j = 0; j < strlen(arr)-1; j++)
//		{
//			*(arr+j)= *(arr + j+1);
//		}
//		*(arr + strlen(arr) - 1) = tmp;
//	}
//}
//方法二：三步翻转法
//abcdef
//把ab与cdef分别逆序变为：bafedc
//再把整个逆序排列：cdefab

//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int n)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(n <= len);
//	reverse(arr,arr+n-1);//逆序左边字符串（里面放入左右两边界地址）
//	reverse(arr+n,arr+len-1);//逆序右边字符串
//	reverse(arr,arr+len-1);//逆序整体字符串
//	
//}
//int main()
//{//举例说明abcdef这个字符串左旋2次  abcdef'\0',先把a取出来放在一个临时变量中，再把bcdef各向前移一位，把a放在字符串尾部
//	//在把b拿出放入临时变量中，在把字符串中其他字符向前移一位。
//	int n = 0;
//	char arr[] = "abcdef";
//	printf("请输入左旋一位：");
//	scanf("%d", &n);
//	//left_move(arr, n);
//	left_move(arr,n);
//	printf("%s\n", arr);
//	return 0;
//}

////判断两字符串是互相左旋的到的吗？方法一
//int is_left_move(char* arr1,char*  arr2)
//{//把所有可能都比较一遍，左旋转1，左旋转2......左旋转n
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);//每次旋转一个
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)//ret==0表示两字符串相等
//		{
//			return 1;
//		}
//	}
//		return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	//判断两字符是左旋得到的吗？
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("是左旋");
//	}
//	else
//	{
//		printf("不是左旋");
//	}
//	return 0;
//}


////判断两字符串是互相左旋的到的吗？方法二
//把arr1 重复写两编abcdefabcdef
//而任何一个arr1的左旋字符串都是abcdefabcdef字符串的子字符串
//#include<stdio.h>//用NULL要引的头文件
//#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1= strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)  //判断两个字符串长度相等，在判断是否是左旋。
//	{
//		return 0;
//	}
//	//1.在str1字符串中追加一个str1字符串。
//	//strcat( 被追加的字符串,追加的字符串):但自己给自己追加字符串不能用这个函数，否则系统会崩溃。strcat(str1, str1);
//	//strncat可以自己追加自己strncat(被追加的字符串,追加的字符串,被追加的字符个数)
//	strncat(str1, str1,len1);//这里str1变为abcdefabcdef
//	
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串。
//	//strstr-找子串的函数:strstr(str1, str2);在str1：abcdefabcdef中找str2：cdefab如果找到了把字符串str1中c的地址传出来
//	//若找不到则返回一个空指针。
//	char* ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}


//编程题：杨氏矩阵：有一个数字矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否
//存在。要求:时间复杂度小于o(N);
//1 2 3
//4 5 6
//7 8 9  
//1.举例说明，假如让找7，那就先拿最右边这一列中的数与7比较，因为最右一列是是每一行最大的数，
// 依次比较，第一行右上角的数是3,3<7,则7不在第一行，把第一行去掉，这是原来的第二行变成新的第一行，新的第一行最右边是6
// 6<7，再把这一行去掉这是原来的第三行变为了新的第一行，它的右上角的数值是9>7,说明7在这一行里但不在9所在的这一列里。
//再让7与8这个数比较7<8,在往左比较（这里找到7用了5次）【这里是用右上角的数比较】
// 
//2.在举例找2，我先找右上角的这个数是3>2,而右边的一列数字从上到下是递增的，所以2一定不在第三列上
// 
//3.假如要找数字k，k>右上角的数说明k一定不在第一行，若k<右上角的数则k一定不在最右列上。
// 
//4.当然也可以用左下角的数来比较的方法

//1 2 3
//3 4 5
//4 5 6
//int FindNum(int arr[3][3],int k, int row, int col)
//{
//	//右上角的坐标
//	int x = 0;
//	int y = col - 1;
//	while (x<=col-1 && y>=0)
//	{
//		//num与右上角数比较大小
//		if (arr[x][y]>k)
//		{
//			y--;
//		}
//		else if  (arr[x][y]<k)
//		{
//			x++;
//		}
//		else if (arr[x][y] == k)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	//找到返回1，否则返回0；
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
//优化代码，我们想知道这个数字所在的下标？
int FindNum(int arr[3][3], int k, int* px, int* py)
{
	//右上角的坐标
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		//num与右上角数比较大小
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] == k)
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	//找到返回1，否则返回0；
	//返回型参数（ &x, &y）可以把值带回来
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标为%d %d\n", x, y);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}


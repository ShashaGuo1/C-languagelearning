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

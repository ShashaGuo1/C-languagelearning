#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{   //数组名是指首元素地址除了一下两个特例
	//1.sizeof(数组名)-数组名表示整个数组
	//2.&数组名-数组名表示整个数组
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
//{   //数组名是指首元素地址除了一下两个特例
	//1.sizeof(数组名)-数组名表示整个数组
	//2.&数组名-数组名表示整个数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16  数组的大小
	//printf("%d\n", sizeof(a+0));//4  这里a没有单独放在sizeof（）里，所以a表示数组首元素地址，这里首元素地址+0=首元素地址，地址的大小4bety在32位电脑中，在64位电脑中是8bety
	//printf("%d\n", sizeof(*a));//4  数组首元素解引用，首元素所占空间
	//printf("%d\n", sizeof(a+1));//4 数组中第二个元素的地址
	//printf("%d\n", sizeof(&a));//4  数组的地址，地址的大小4(32位电脑)/8（64位电脑）
	//printf("%d\n", sizeof(a[1]));//4  数组中第二个元素的大小
	//printf("%d\n", sizeof(*&a));//16   *&a=a,数组的地址在解引用=数组
	//printf("%d\n", sizeof(&a+1));//4    数组的地址跳过这个数组之后的地址
	//printf("%d\n", sizeof(&a[0]));//4   首元素地址
	//printf("%d\n", sizeof(&a[0]+1));//4  第二个元素地址
//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); //
	//printf("%d\n", sizeof(arr+0));//
	//printf("%d\n", sizeof(*arr));//
	//printf("%d\n", sizeof(arr[1]));//
	//printf("%d\n", sizeof(&arr));//
	//printf("%d\n", sizeof(&arr+1));//
	//printf("%d\n", sizeof(&arr[0]+1));//
	// 
	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); //6   数组的大小
	//printf("%d\n", sizeof(arr+0));//4  数组首元素地址
	//printf("%d\n", sizeof(*arr));//1   数组首元素解引用，首元素大小
	//printf("%d\n", sizeof(arr[1]));//1 数组第二个元素大小
	//printf("%d\n", sizeof(&arr));// 4   数组的地址
	//printf("%d\n", sizeof(&arr+1));//4   数组a跳过一个数组空间后的地址
	//printf("%d\n", sizeof(&arr[0]+1));//4   数组第二个元素地址

	//char arr[] = { 'a','b','c','d','e','f' };//
	//printf("%d\n", strlen(arr));// 
	//printf("%d\n", strlen(arr+0));//
	//printf("%d\n", strlen(*arr));//
	//printf("%d\n", strlen(arr[1]));//
	//printf("%d\n", strlen(&arr));//
	//printf("%d\n", strlen(&arr+1));//
	//printf("%d\n", strlen(&arr[0]+1));//
	// 
	//char arr[] = { 'a','b','c','d','e','f' };//strlen(放的起始地址)，
	//printf("%d\n", strlen(arr));// 随机值  数组的字符串长度，计算过程中遇到\0停下计算，
	//printf("%d\n", strlen(arr+0));//随机值    首元素开始计算遇到\0停止
	//printf("%d\n", strlen(*arr));//err   *arr是首元素=‘a’=97->strlen(97)这种写法是错误报错：访问冲突
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//随机值

	 //char arr[] = "abcdef";//
	//printf("%d\n", strlen(arr));//
	//printf("%d\n", strlen(arr+0));//
	//printf("%d\n", strlen(*arr));//
	//printf("%d\n", strlen(arr[1]));//
	//printf("%d\n", strlen(&arr));//
	//printf("%d\n", strlen(&arr+1));//
	//printf("%d\n", strlen(&arr[0]+1));// 

	//char arr[] = "abcdef";//字符串中元素：a b c d e f \0
	//printf("%d\n", strlen(arr));//6     从数组首元素地址开始计算长度遇到\0停下计算
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err  非法访问
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));// 6  这里会报警告：strlen（const char* str）(这是规定)，而这里&arr=char(*p)[7],没有const
	//printf("%d\n", strlen(&arr+1));//随机
	//printf("%d\n", strlen(&arr[0]+1));//5

// char arr[] = "abcdef";//
 //printf("%d\n", sizeof(arr));//
 //printf("%d\n", sizeof(arr + 0));//
 //printf("%d\n", sizeof(*arr));//
 //printf("%d\n", sizeof(arr[1]));//
 //printf("%d\n", sizeof(&arr));// 
 //printf("%d\n", sizeof(&arr + 1));//
 //printf("%d\n", sizeof(&arr[0] + 1));//

	//char arr[] = "abcdef";//字符串中元素：a b c d e f \0
	//printf("%d\n", sizeof(arr));//7     字符串大小（空间大小）
	//printf("%d\n", sizeof(arr + 0));//4  首元素地址
	//printf("%d\n", sizeof(*arr));//1      首元素
	//printf("%d\n", sizeof(arr[1]));//1     第二个元素
	//printf("%d\n", sizeof(&arr));// 4       整个数组地址
	//printf("%d\n", sizeof(&arr + 1));//4  arr数组跳过这个数组后的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	 //char* p = "abcdef";  //
	//printf("%d\n", sizeof(p));//
	//printf("%d\n", sizeof(p+1));//
	//printf("%d\n", sizeof(*p));//
	//printf("%d\n", sizeof(p[0]));//
	//printf("%d\n", sizeof(&p));//
	//printf("%d\n", sizeof(&p+1));//
	//printf("%d\n", sizeof(&p[0]+1));//

	//char* p = "abcdef";  //把a地址放在p(p中存放字符串首元素地址)   a b c d e f \0
	//printf("%d\n", sizeof(p));//4     char* p,p是指针，字符串的首元素地址（计算指针变量p的大小）
	//printf("%d\n", sizeof(p+1));//4       第二个元素地址
	//printf("%d\n", sizeof(*p));//1          第一个元素
	//printf("%d\n", sizeof(p[0]));//1         第一个元素 int arr[10];arr[0]==*(arr+0);p[0]=*(p+0)=='a'
	//printf("%d\n", sizeof(&p));//4         数组地址
	//printf("%d\n", sizeof(&p+1));//4         跳过一个数组后地址
	//printf("%d\n", sizeof(&p[0]+1));//4       第二个元素地址

	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//
	//printf("%d\n", strlen(p+1));//
	//printf("%d\n", strlen(*p));//
	//printf("%d\n", strlen(p[0]));//
	//printf("%d\n", strlen(&p));//
	//printf("%d\n", strlen(&p+1));// 
	//printf("%d\n", strlen(&p[0]+1));//

	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6   从第一个元素开始
	//printf("%d\n", strlen(p+1));//5   从第二个元素开始
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机     指针的地址
	//printf("%d\n", strlen(&p+1));// 随机      指针的地址跳过4bety后地址
	//printf("%d\n", strlen(&p[0]+1));//5         取第一个元素地址+1=第二个元素地址

	//二维数组
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

	//二维数组
	//int a[3][4] = { 0 };//其实一个二维数组在内存中是连续的
	//printf("%d\n", sizeof(a));// 12*4=48     数组的大小
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16        a[0]相当于第一行作为一维数组的数组名sizeof(a[0])：把数组名单独放在sizeof内，计算的是第一行大小
	//printf("%d\n", sizeof(a[0]+1));//4         a[0]是第一行的数组名（我们把这个二维数组想成由3个一维数组组成），这里的a[0]（数组名）表示的是第一行首元素地址，a[0]+1第一行第二个元素地址
	//printf("%d\n", sizeof(*(a[0]+1)));//4     第一行第二个元素解引用
	//printf("%d\n", sizeof(a+1));//4             a是首元素地址，我们把二维数组看成3个一维数组组成，a数组只有三个元素，a的首元素是a[0]第一行地址，所以a+1是第二行数组地址
	//printf("%d\n", sizeof(*(a+1)));//16            第二行地址解引用，拿到第二行所有值
	//printf("%d\n", sizeof(&a[0]+1));//4            第二行地址
	//printf("%d\n", sizeof(*(&a[0]+1)));// 16         第二行地址解引用
	//printf("%d\n", sizeof(*a));// 16                 a[0]首元素解引用：首元素大小首元素是第一行
	//printf("%d\n", sizeof(a[3]));//16             sizeof(a[3])中不去访问这个地址，只是根据已知计算，虽然第4行不存在但不妨碍计算
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
//	int* ptr = (int*)(&a + 1);   //数组的地址向后跳一个数组后的地址，(&a + 1)数组指针类型所以需要强制转换
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));// 2 ，5    (a+1)首元素地址+1=第二个元素，
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}; *p;  //结构体指针  
////假设p的值是0x100000，如下表达式的值分别为多少？
////已知结构体Test类型的变量大小是20字节,每个参数占4bety
////考点是指针+1
//int main()
//{   //0x1是16进制的1的值与十进制1值一样
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
//}; *p;  //结构体指针  
////假设p的值是0x100000，如下表达式的值分别为多少？
////已知结构体Test类型的变量大小是20字节,每个参数占4bety
////考点是指针+1
//int main()
//{   //0x1是16进制的1的值与十进制1值一样
//	p =(struct Test*) 0x100000;//把整形强制转换为结构体指针（结构体地址）
//	printf("%p\n", p + 0x1);  //结构体指针地址+1=跳过结构体的地址地址0x00100014
//	printf("%p\n", (unsigned long)p + 0x1); //p指针强转为无符号长整型0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1); //p指针强转为无符号长整型指针+1=向后跳4bety-》0x00100004
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
//	int a[4] = { 1,2,3,4 };//把数组每个字节的内容都标出来：01 00 00 00| 02 00 00 00|03 00 00 00|04 00 00 00
////当前是小端存储                                        低地址                                          高地址
//	int* ptr1 = (int*)(&a + 1);//(&a + 1)数组指针+1=跳过这个数组后的地址，再把这个地址强转为整型指针
//	int* ptr2 = (int*)((int)a + 1);//把a数组首元素地址强转为整型+1-》在强转为整型指针也就是首元素地址向后移1byte
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1]==*(ptr+-1):因为是整形指针先前移4byte在解引用取4byte取数据从内存中倒着取出，结果为0x00 00 00 04：0x4，*ptr2：首地址先后移1byte地址在解引用（int*）拿走4byte：00 00 00 02:小端存储.从内存中拿出值（倒序拿出）：0x02 00 00 00
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
//	int a[3][2] = { (0,1),(2,3),(4,5) };//(0,1):这里面是逗号表达式：1；(2,3)结果是3，(4,5)：5。
//	//int a[3][2] = { (0,1),(2,3),(4,5) };==int a[3][2] = {1,2,5 };表示a[0][0]=1;a[0][1]=2;a[1][0]=5
//	int* p;
//	p = a[0]; //二维数组a[0]相当于把第一行当做一个独立的一维数组,这个数组名叫a[0]，p = a[0]：把一维数组a[0]首元素地址赋给p指针
//	printf("%d", p[0]); // 0  p中存着a[0][0]地址:p[0]=*(p+0)
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
//	int a[5][5];  //数组
//	int(*p)[4];    //p是一个指针指向一个数组，数组有4个int类型元素。
//	//p类型是int(*)[4]，a[0]的类型是int(*)[5],两边的类型不一样编译器会报警告
//	p = a;       //把a数组首元素地址赋给p，a数组首元素是a[0],首元素地址表示为&a[0][0]==a[0];
//	//p[4][2]==*(*(p+4)+2)=>p是int*[4] 先向后移4个4*4bety=64byte假设这个地址是m，
//	//在解引用拿到了这个地址（m）后4byte的空间（相当于拿到一个4byte空间的数组假设定义为arr[4]），
//	//拿到4byte空间的数组相当于拿到这个数组名arr,这个数组名相当于首元素地址之后+2向后移2*4=8bety，之后在解引用
//	//拿到这个地址中的内容
//	//指针-指针=他们之间元素个数，这里&p[4][2] < &a[4][2]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC ,-4
//	// -4以%p形式打印，-4原码是：10000000000000000000000000000100
//	//                     反码：11111111111111111111111111111011
//	//                     补码：11111111111111111111111111111100 内存中 若以%d形式打印在把补码转换为原码打印出来
//	//                     若以%p形式打印：要转换为16进制，我们认为内存中(补码)存的就是地址%p所以打印地址
//	//                     不用转换为原码了直接打印出来（以16进制方式），0xfffffffc
//}

//点引小知识点对下面解题提供思路
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;//arr[0]的地址值赋值给p指针
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
//	int* ptr1 = (int*)(&aa + 1);  //数组地址+1，数组地址跳过这个数组空间后的地址
//	int* ptr2 = (int*)(*(aa + 1));//*(aa + 1)==aa[1] aa[1]==第二行首元素地址
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//  *(ptr1 - 1):因为是int*ptr1-1地址向前移4bety，在解引用取4bety空间中的值：10；
//	//*(ptr2 - 1):第二行地址-1==第二行地址向前移4bety，在解引用4bety空间，5,。
//}

//点引小知识点对下面解题提供思路
// int main()
//{
//char* p = "abcdef";//字符指针指向一个字符串的首字母
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
//	//这里a数组中其实存着是指向w，a，a三个字符的指针。a数组中有三个元素：char* w，char* a,char* a.
//	char** pa = a;      //取a数组首元素地址的地址，pa指向指针a,
//	pa++;               //char** pa:的含义char* *pa:*pa表示*pa是一个指针指向char*的。
//	//pa++指pa+1（跳过一个pa指向元素的类型所占的空间。pa指向元素类型是char*）跳过一个char*元素内存，
//	//所以指向到了char* a的地址。
//	//*pa找到pa指向的内容，pa指向的是char* a也就是pa指向“at”字符串的首个字母a，拿到这个‘a’的地址
//	printf("%s\n", *pa);//打印从‘a’地址开始,结束于‘\0’
//}//结果是at

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
//	printf("%s\n", **++cpp);  //POINT  先++：指针指向第二个元素“char**->(3) ”
//	//在'*'得到“char**->(3)”中内容是：相当于得到(3)char*--->"POINT"地址，在“*”得到“POINT”首字母‘P’的地址，%s：的POINT。
//	printf("%s\n", *--*++cpp + 3);//上面运算结束后cpp指向：“ char**->(3)” ，先++得char***指向： char**->(2)，
//	//在“*”得到“char**->(2)”内容，内容是“ (2)char*--->"NEW"”地址，在“--”：得到“char*--->"ENTER""”地址，
//	// 在“*”得到"ENTER"首元素‘E’地址，在+3（单位是char）向后跳3bety的‘E’地址，%s的ER
//	printf("%s\n", *cpp[-2] + 3);//上面的运算结束后cpp指向" char**->(2)",cpp[-2]=*(cpp-2);cpp-2 后的cpp指向“char**->(4)”地址
//	//在*得到“char**->(4)”内容也就是“(4)char*--->"FIRST"”地址，在*得到“FIRST”的首元素地址“F”,在+3的到'S'地址，%s：ST
//	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]==*(*(cpp-1)-1):上面的运算结束后cpp指向" char**->(2)",
//	//先-1指向“char**->(3)”，在*的“char**->(3)”内容相当于 "(3)char*--->"POINT""地址，在-1得到(2)char*--->"NEW"地址也就是‘N’地址
//	//在+1de'E'的地址，在%s的：EW。
//	return 0;
//}


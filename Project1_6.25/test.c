#define _CRT_SECURE_NO_WARNINGS


//内置类型:c语言自己的数据类型：
//char  short int long float double

//复杂对象：
//复杂类型-自定义类型：结构体，枚举，联合体

//结构体：
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//数组是一组相同类型的元素的集合。
// 
//结构体声明
//int main()
//{
//	struct tag   //struct :结构体关键字；tag：结构体标签（自定义）
//	{
//		//member-list:成员列表
//	};//variable-list:变量列表
//	return 0;
//}

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生属性：成员变量，名字+电话+性别+年龄
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//s4 s5 s6:是全局结构体变量，总称：变量列表
//
//struct Stu s3;//全局变量（在代码块以外）
//int main()
//{
//	//用结构体类型（struct Stu）创建结构体变量s1,s2:这两个变量是局部变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
//
////特殊的结构体声明（普通不建议这样写，了解即可）
////匿名结构体类型：下面结构体声明没有结构体标签（名字）：因为每有创建标签所以声明后直接在结尾创建变量x，
////在创建匿名结构体类型的时候要在创建一个变量x，否则事后就创建不了变量因为没有结构体标签（名字）。
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
////匿名结构体指针类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}*sp;//p是结构体指针
//struct
//{
//	int a;
//	char b;
//	float c;
//}sp;
//int main()
//{
//	//是否可以一下写法：是非法不合理的（编译器会把上面的两个声明当做完全不同的两个类型，所以是非法的）
//	//sp = &sp;是不可以的就算两个结构体类型的成员变量都相同，编译器在处理的时候也会把他们当做各自不同的类型，分别是独立不相关的
//	//类型，一个独立的类型加个*创建的独立的指针是不可以存放另一个结构体的类型的变量的地址的。（在编译器看他们是不同的类型），不同
//	//内存空间
//	return 0;
//}

// 数据结构：数据在内存中存储的结构
//链表：数据之间像链子一样链接：找到了第一个数据（第一个数据叫做节点：这个节点既能存储数据又能找到第二个数据）后面的就直接顺的找到。
// 下面struct Node 看似像链表，其实不是（可以存储数据：int data；又可以找到下个元素：struct Node next;）
// 真正链表：元素1中存自己的数据以及元素二的地址，元素2中存自己的数据以及元素3的地址，最后一个元素中存自己的数据不在存放地址地址
//结构体自引用（是不可以的）
//结构体中包含一个类型为该结构本身的成员是否可以呢？ 
//#include<stdio.h>
//struct Node
//{
//	int data;
//	struct Node next;//这里报错：“next” 使用未定义的struct “Node”
//};
////可行否：那么sizeof(struct Node)是多少？
//int main()
//{
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//}
////链表表示：正确的结构体自引用
//struct Node
//{
//	int data; //int 4字节，存放数据的地方叫：数据域。
//	struct Node* next;//struct Node*:这种这个结构体类型的指针变量。一个指针的大小是 4/8字节，管存放struct Node*地方叫做：指针域。
//};

//错误写法
//typedef struct   //typedef 重命名（重命名类型名），匿名的结构体没有名字就无法下面的自引用，而重命类型名是在自引用之后，所以自引用时不能用。
//{
//	int data;
//	 Node* next;
//}Node; //把这个名字（struct Node ）简化为Node
//
////正确写法
//typedef struct Node   //typedef 重命名
//{
//	int data; 
//	struct Node* next;
//}Node; //把这个名字是类型名（struct Node ）简化为Node
//int main()
//{
//	struct Node n1;
//	Node n2;//上下这两种定义变量都对。
//	return 0;
//}


//结构体定义和初始化

//struct s
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct s s1 = { 'a',20,2.0,"hello" };
//	printf("%c %d %fl %s \n", s1.c, s1.a, s1.d, s1.arr);
//	return 0;
//}


////结构体定义和初始化
//struct T
//{
//	double weight;
//	short age;
//};
//struct s
//{
//	char c;
//	int a;
//	struct T st;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct s s1 = { 'a',20,{45.5,25},2.0,"hello" };
//	printf(" %fl  \n", s1.st.weight);
//	return 0;
//}

//结构体定义和初始化例子
//#include<stdio.h>
//struct Point
//{
//	int x;
//	int y;
//}p1;  //声明类型的同时定义变量（这是全局变量：在代码块以外：{}）
//struct Piont p2; //定义结构体变量（是全局变量：在代码块以外：{}）
//
//struct Stu   //类型声明
//{
//	char name[20];
//	int age;
//};
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;//自引用
//}n1 = { 20,{1,5} ,NULL};//结构体嵌套初始化,对于NULL要加头文件：#include<stdio.h>
//int main()
//{
//	struct Point p3 = { 1,2 };//初始化：定义变量的同时赋初值
//	struct Stu s = { "zhangsan",29 };//初始化
//	struct Node n2 = { 21,{1,6},NULL };
//	return 0;
//}




//结构体内存对齐
//热门考点：计算结构体的大小，结构体的内存对齐。
//1.第一个成员与结构体变量偏移量为0的地址处。
// 解释1：以下面代码struct S1为例：第一个成员是c1（占一个字节），结构体变量是：struct S1 s1 中s1，
// 偏移量（距离）为0的地址处：说明他俩在同一地址。
// 
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处：对齐数的整数倍（在这里对齐数是4）
//其他成员：第一个成员以外的成员，举例：第二个成员变量int a占4字节， 所以a地址放在离c1 4字节处的地址上，因为int所以a地址向后延伸4字节
// c2是一个字节，对齐数=8与1中取小的=1所以c2放在a后地址偏移一位的地方，char型向后延伸一位。
// 
//对齐数=编译器默认的一个对齐数与该成员大小的较小值。
//vs中默认值为8，第二个成员变量int a占4字节，所以这里对齐数为4.
// 
//3.结构体总大小为最大对齐数（每个成员变量都要一个对齐数）的整数倍。
// 这里最大对齐数为4，结构体总大小为4的倍数，我们通过画图算出为9字节，但9不是4的倍数，那就要在浪费3个字节，凑够12字节内存。
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（函嵌套结构体的
// 对齐数）的整数倍。

//对于上面讲解的图像说明c1占内存用*表示，a占内存用#表示，c2占内存用@表示（每一行代表一字节）什么也没标的是浪费的内存，’~‘表示成员变量起始位置
//1   char c1 ~：********      0偏移
//2                            1偏移
//3                            2偏移
//4                            3偏移
//5     int a~： ########      4偏移
//6              ########
//7              ########
//8              ########
//9   char c2~： @@@@@@@@
//10
//11
//12

//#include <stdio.h>
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };//初始化指定第一个元素是0，其他元素也都是0.
//	printf("%d\n", sizeof(s1));//12
//
//	struct S2 s2 = { 0 };//初始化指定第一个元素是0，其他元素也都是0.
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}
//算一下s2占内存大小
//c1与s2起始位置相同(0偏移)，c1占一个字节，
//（其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处）,c2的其实位置是，对齐数的倍数，对齐数=8与1取小=1
//所以c2起始位置与c1一个偏移量
//a的起始位置是对齐数的倍数，对齐数=8与4取小=4，a的起始位置为c2地址偏移4字节
//3.结构体总大小为最大对齐数（每个成员变量都要一个对齐数）的整数倍。：最大对齐数为4，下图中刚好占8字节为4的倍数

//1          char c1~:********    以c1为坐标：0偏移
//2          char c2~:########                1偏移   
//3                                           2偏移                 
//4                                           3偏移                   
//5            int a:@@@@@@@@                 4偏移                        
//6                  @@@@@@@@
//7                  @@@@@@@@
//8                  @@@@@@@@                                                  




//gcc--编译器没有默认对齐数：它的对齐数是成员的大小。

//默认在vs编译器：求内存大小:
#include<stdio.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
// };
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}
//1           double d占8字节: ********            0偏移
//2                            ********            1偏移
//3                            ********            2偏移
//4                            ********            3偏移
//5                            ********            4偏移
//6                            ********            5偏移
//7                            ********            6偏移 
//8                            ********            7偏移
//9(起始于1的倍数的偏移)char c:########            8偏移
//10                                               9偏移
//11                                               10偏移
//12                                               11偏移
//13                 int i：   @@@@@@@@            12偏移
//14                           @@@@@@@@
//15                           @@@@@@@@
//16                           @@@@@@@@


//默认在vs编译器：求内存大小:(结构体嵌套)
//如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（函嵌套结构体的
// 对齐数）的整数倍。

struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;
	struct S3 s3;//对齐到自己的最大对齐数的整数倍处，s3最大对齐数：8,8偏移
	double d;
};
//偏移
//0   c1:********
//1    
//2
//3
//4
//5
//6
//7
//8   s3:########
//.      ########
//24  d  @@@@@@@@
//.      @@@@@@@@
//32     @@@@@@@@

//int main()
//{
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//32是8的倍数
//	return 0;
//}

//为什么要内存对齐？
//1.平台原因(移植原因)：不是所有的硬件平台都能访问任意地址上的任意数据的；
//某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
//2.性能原因：数据结构(尤其是栈)应该尽可能地在自然边界上对齐。原因在于，
//为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
//总体来说：结构体的内存对齐是拿空间来换取时间的做法。
// 
//那在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到？
//让占用空间小的成员尽量集中在一块。

//修改默认对齐数
//#pragma 这个预处理指令，可以改变我们的默认对齐数。
//struct S
//{
//	char c1;//占1个字节
//	//7(中间浪费)
//	double d;//占8字节
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//16字节
//	return 0;
//}

//设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;//占1个字节
//	//3(中间浪费)
//	double d;//占8字节
//};
// #pragma pack()
////取消设置的默认对齐数（对齐数改变在这两语句之间代码中生效）
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//12字节
//	return 0;
//}


//#pragma pack(1)
//struct S
//{
//	char c1;//占1个字节
//	double d;//占8字节
//};
//#pragma pack()
////取消设置的默认对齐数（对齐数改变在这两语句之间代码中生效）
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//9字节
//	return 0;
//}

//百度笔试题：
//写一个宏，计算结构体中某变量相对首地址的偏移，并给出说明。
//考察offsetof宏的实现。offset：偏移量；offsetof：谁的偏移量
//size_t offsetof(structName,memberName);size_t offsetof(结构体名,成员名)
//#include<stddef.h>
//struct S
//{
//	char c;//相对起始位置偏移量为：0
//	int i;//相对起始位置偏移量为：4
//	double d;//相对起始位置偏移量为：8
//};
//int main()
//{
//	//offsetof();//结构体成员相对于结构体起始位置的偏移量是几
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//	return 0;
//}


//外部函数调用结构体，传参：传址或传值：最好是传址：传址可以通过外部函改该结构体内部数据,传址是不想让外部函数
// 传址比传参的优势还在，传址只传4bety字节，而传值有可能结构体所占空间很大（结构体参数是需要压栈，系统开销较大，
// 导致性能下降）
// 函数传参的时候，参数是需要压栈的，会有时间和空间上的系统开销。
// 改结构体的数据可以传参数加const 。而传值是在是在外部空间开辟一个临时拷贝新空间，只能对数据进行判断不可改数据。

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
////传值(值可传进来，但不可改结构体变量的值，因是两个完全不同的空间)
////void Init(struct S tmp)
////{
////	tmp.a = 2;
////	tmp.c = 'e';
////	tmp.d = 3.22;
////}
//void Init1(struct S* p)
//{
//	p->a = 2;
//	p->c = 'd';
//	p->d = 2.32;
//}
//void Print(struct S s1)
//{
//	printf("%d\n", s1.a);
//	printf("%c\n", s1.c);
//	printf("%fl\n", s1.d);
//}
//void Print1(const struct S* sp)
//{
//	////sp->a = 23;因为有const所以不可以改值
//	printf("%d\n", sp->a);
//	printf("%c\n", sp->c);
//	printf("%fl\n", sp->d);
//
//}
//int main()
//{
//	struct S s = {0};
//	//Init(s);
//	Init1(&s);
//	//打印函数：
//	Print(s);
//	Print1(&s);
//	return 0;
//}


//位段（位段对于底层的网络开发比较常见），结构体可以实现位段。
// 位段就是为了节省空间
// 位段：中的位是二进制为
// 位段的声明和结构体是类似的,有两个不同
//1.位段的成员必须是：int ,unsigned int 或signed int（也可以是short等整型类型，也可以是char，但char不可以和int型混用
// 也就是是int类型的全是int类型，是char的全是char）
//位段的成员名后边有一个冒号和一个数字。
#include<stdio.h>
//struct S   //S是一个位段类型
//{//a,b.....是成员
//	//对于int占内存4字节，32bite位数，,能表示的状态有2^32种。
//	int a : 2; //2：bit位是两位。若a中只有2到4种状态：只要给a两个比特位就能装下4或4以下个状态
//	int b : 5;//5bit(b需要5个bit位存数据)
//	int c : 23;
//	int d : 30;//位段后面的数字不能大于32；int型内存32bit
//};//2.位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟的。
////分析:上面结构体内存8字节：
////位段是以4字节（32bit）为单位的开辟空间，a占2bit，b占5bit，c占23bit，a+b+c=30bit，这第一个开辟的32bit空间被占的指
////剩两2bit为，不够装下d，所以要在开辟第二个空间（32bit）来装d的30bit位，所以结构体内存占了8字节。
//
////总共需要47个bit位-6个字节就够了（6*8=48）；但其实结果是8字节。
////位段的内存分配：
////1.位段的成员可以是int ,unsigned int ,signed int 或者是 char(属于整形家族)类型。
////2.位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟的。
////3.位段涉及很多不确定因素，位段是不跨品台，注重可移植的程序应该避免使用位段。
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8字节
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
////因为是char类型，所以是1个1个字节的开辟空间。1字节=8bit，
//// vs中：
////a占3bit，b占4bit，放入的顺序是从右向左（在开辟的空间中从低位到高位依次排开）依次排开
//// (所以右边7bit占满左边空了一个比特位)，所以a与b占第一个字节，c占5bit放在第二个开辟的1个字节空间中
//// （因为c+d空间>8，所以只能在开辟 一个空间放d，d在第三个开辟的1字节空间中，总共占3字节空间。
////画图说明vs编译器中：a分配空间用*，b用#，c用&，d用@
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}
//   |0####***|000&&&&&|0000@@@@|
//a中方的值：10二进制：1010。但a只给3bit，所以内存a中放入的是010
//b中方的值：20二进制：10100。但b只给4bit，所以内存b中放入的是0100
//c中方的值：3二进制：011。但c给5bit，所以内存c中放入的是00011
//d中方的值：4二进制：100。但d给4bit，所以内存d中放入的是0100
//最终内存存放：
//                                          |00100010|00000011|00000100|
//因为内存中存的形式是16进制：就是4bit为一位：2    2   0   3     0   4


 /*位段的跨平台问题
1. int 位段被当成有符号数还是无符号数是不确定的。
2. 位段中最大位的数目不能确定。（ 16 位机器最大 16 ， 32 位机器最大 32 ，写成 27 ，在 16 位机
器会出问题。
3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是
舍弃剩余的位还是利用，这是不确定的。
总结：
跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。*/




//枚举：不可能的取值一一列举

//枚举类型的定义
//enum Day  //enum:关键字定义，Day：枚举类型名，enum Day：枚举类型
//{
//	Mon,  //枚举的可能取值--枚举常量
//	Tus,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color1
//{
//	RED=2, //可自定义枚举常量的初始值，因为是常量之后就不能改它的值了。
//	GREEN,
//	BLUE=8
//};//这个枚举打印值为：2 3 8

//enum Color3
//{
//	RED , 
//	GREEN=7,
//	BLUE 
//};////这个枚举打印值为：0 7 8

// enum Color2
//{
//	RED, //可自定义枚举常量的初始值，因为是常量之后就不能改它的值了。
//	GREEN,
//	BLUE=8
//};//这个枚举打印值为：0 1 8
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//0 1 2
//	printf("%d %d %d %d %d \n", Mon, Tus, Wed, Thur, Fri);//0 1 2 3 4(系统自带的枚举的值从上到下是0,1,2.....)
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//
//	return 0;
//}

//枚举的优点
//我们可以使用#define定义常量，为什么非要使用枚举？枚举的优点：
//1.增加代码的可读性和可维护性
//2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
//#define RED 0：#define 定义的RED是一个符号，未来在代码中遇到RED的是会被替换为0（是在预编译中进行的）。
// 
//知识扩充： 代码在电脑中的执行过程“c语言源代码->预编译（预处理）->编译->链接->可执行程序
// #define RED 0 在电脑中预编译时把RED变为了0.  预编译：还能把注释删除
// 
// 而枚举中的RED是有类型的它的类型是Color
//3.防止了命名的污染（封装）：枚举的可能取值放在{}中和别人的名字不会冲突。
//4. 便于调试：调试是在 可执行程序这里才可进行调试，而#define RED不便于调试，因为早在可执行程序之前的预编译中
// 把RED替换为了0。
//5. 使用方便，依次可以定义多个常量。



//联合（共用体）：成员变量公用同一个空间起始位置相同
//联合类型的定义：
//联合是以中特殊的自定义类型，这种类型定义的变量也包含一系类的成员，
//特征是这些成员公用同一块空间（所以联合也叫共同体）。

//联合的特点：
//联合的成员共用同一块内存空间，这样一个联合变量的空间的大小，至少是最大成员的大小（因为联合至少得有能力报存最大的
//那个成员）

//union Un   //union是关键字，union Un 是定义的类型（在同一时间使用c和i，因为改变c的时候会改变i，改i时会改c。）
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	//联合体成员变量都是放在同一个地址下的内存空间(在这里这个空间是4字节)中。
//	printf("%p\n", &u);//00CFFE6C
//	printf("%p\n", &(u.c));//00CFFE6C
//	printf("%p\n", &(u.i));//00CFFE6C
//	return 0;
//}


//面试题：判断当前计算机的大小段存储。

	//int a = 0x11223344;
	//低地址-------------------------------->高地址:下面一个[]中存放1字节元素
	// 下面是存在内存中的顺序
	//......[][][][11][22][33][44][][][][][]......把一个数的低字节的内容放到内存的高地址处：大端字节序存储模式。
	//......[][][][44][33][22][11][][][][][]......把一个数的低字节的内容放到内存的低地址处：小端字节序存储模式。
	//讨论一个数据，放在内存中的存放的字节顺序
	//大小段的字节序问题。
	
	//举例说明：int a=1；0x00000001；
	// 内存：低地址------------------->高地址
	//若a在内存中存放：01000000 那么就可以判断是小端存储
	//若a在内存中存放：00000001 那么就可以判断是大端端存储
	//所以想判断是大端还是小端直接观察内存中第一字节是01还是00。
//方法一：
//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//方法三
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//方法二
//int check_sys()
//{
//	union Un                    
//	{
//		char a;
//		int i;
//	};                   
//	
//	union Un u = { 0 };
//	u.i = 1;
//	return u.a;
//}
//
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//这两种写法定义u都可以
//union Un
//{
//	char a;
//	int i;
//}u;
////匿名的
//union 
//{
//	char a;
//	int i;
//}u;

//枚举大小
//enum Sex
//	{
//		MALE,
//		FEMALE,
//		SECRET
//	};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));//4,枚举中的成员变量在（vs编译器）是int。
//	return 0;
//}


//联合体大小的计算
//联合体的大小至少是最大成员大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
union Un
{
	int a;//a:4bety  系统默认对齐数是8,4与8取小是4，a的对齐数是4.
	char arr[5];//5bety，大小至少是最大成员大小，所以联合体大小至少5个字节。
	//char 类型大小是1，系统默认对齐数是8,1与8取小是1，char arr[]的对齐数是1.
};
int main()
{
	union Un u;
	printf("%d\n",sizeof(u));//8
	return 0;
}



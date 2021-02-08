#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>//引入system 
//#include<windows.h>//引入Sleep 注意：s为大写 
//#include<string.h>//引入stelen 
//#include<limits.h>
//int main()//模拟验证身份
//{
//	char pw[20]={0};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s",&pw);
//		if(strcmp(pw,"123456")==0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("登录失败\n");
//		}
//	}
//	if(i==3)
//		{
//			printf("三次错误，请重置密码\n");
//		}
//	return 0;
// }————————————————————————
//int main()//模拟验证身份
//{
//	int i = 0;
//	char name[20] = { 0 };
//	char pw[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入用户名：\n");// 不能这样连输两个 
//		scanf("%s", &name);
//		printf("请输入密码：\n");
//		scanf("%s", &pw);
//		if (strcmp(name, "周传") == 0 && strcmp(pw, "123456" )==0)//注意是==0
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("登陆失败\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次错误，请重置密码\n");
//	}
//	return 0;
//}——————————————————————————————————
//int main()//找两个数的最小公倍数
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	for (i = 1; ; i++)
//	{
//		if (i%m == 0 && i%n == 0)
//		{
//			printf("m=%d", i);
//			break;
//		}
//	}
//	return 0;
//}————————————————————————————
//找100-200间的所有素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (m = 2; m<=sqrt(i); m++)
//		{
//			if (i%m == 0)
//			{
//				break;
//			}
//		}
//		if (m >= sqrt(i))//sqrt(开平方）-数学中的库函数-math.h
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}———————————————————————————
//计算1/1+1/2+1/3+.....+1/100
//int main()
//{
//	int i = 0;
//	int m = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+= m*(1.0 / i);
//		m = -m;
//	}
//	printf("%1f", sum);
//	return 0;
//}——————————————————————————
//找到十个数中最大值
//int main()
//{
//	int arr[] = { 1,-1,-2,3,4,5,6,121,8,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}—————————————————————————
//九九乘法表的打印
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i ; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, j*i);//%-2d代表左对齐，%2d代表右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}————————————————————————
//#include<time.h>//猜随机数 挺复杂的
//#include<stdlib.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("***1.play            0.exit***\n");
//	printf("******************************\n");
//}
//void game()
//{
//	int m = 0;
//	int sum = 0;
//	int n = 0;
//	m = rand()%100+1;
//	//printf("m=%d\n ", m);
//	while (1)
//	{
//		printf("请猜数字：\n");
//		scanf("%d",&n);
//		if (n > m)
//		{
//			printf("猜大了\n");
//			sum++;
//		}
//		else if (n < m)
//		{
//			printf("猜小了\n");
//			sum++;
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			printf("m=%d\n", m);
//			sum++;
//			printf("共猜了%d次\n", sum);
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}——————————————————————————
//#include<math.h>//判定一个数是否为素数
//int judge(int m)
//{
//	int n = 0;
//	for (n = 2; n <= sqrt(m); n++)
//	{
//		if (m%n == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (m > sqrt(n))
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	printf("请输入I的值：\n");
//	//判断i是否为素数
//	scanf("%d", &i);
//	if (judge(i) == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	printf("judge(i)=%d", judge(i));
//	return 0;
//}————————————————————————
//strcpy-string copy-字符串拷贝
//#include<string.h>
//int main()
//{
//	char arr1[]= "bit";
//	char arr2[]= "#########";//注：[]不可省
//	strcpy(arr2, arr1);
//	printf("arr2=%s\n", arr2);//答案为：arr2=bit而不是arr2=bit####,因为arr1=bit后隐藏有\0
//	return 0;
//}————————————————————————
//void swap1(int x, int y)//数字交换  传值调用
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)  传址调用
//{
//	int tem =* pa;
//	*pa= *pb;//
//	*pb= tem;
//}
//int main()
//{
//	int m = 10;
//	int n = 20;
//	printf("m=%d n=%d\n", m, n);//m=10 n=20
//	swap1(m, n);
//	printf("m=%d n=%d\n", m, n);//m=10 n=20 交换失败
//	swap2(&m, &n);//以地址改值
//	printf("m=%d n=%d\n", m, n);//m=20 n=10 交换成功
//	return 0;
//}——————————————————————————
//找下标
//int binary_search(int arr[],int m,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < m)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > m)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int m = 0;
//	printf("请输入要查找的值m：\n");
//	scanf("%d",&m);
//	int ret=binary_search(arr, m, sz);
//	if (ret == 0)
//	{
//		printf("查无此数\n");
//	}
//	else
//	{
//		printf("m的下标为：%d\n", ret);
//	}
//	return 0;
//}——————————————————————
//int main()//小测试
//{
//	printf("%d", printf("%d", printf("%d", 43)));//答案：4321，第三个printf打印43，第二个printf打印2，第一个printf打印1
//	//  1          2            3
//	return 0;
//}————————————————————————
//函数和递归
//递归函数
//int main()
//{
//	printf("hehe\n");//一直打印heh直到栈溢出
//	main();
//	return 0;
//}——————————————————————
//print(int n)
//{
//	if (n > 9)
//	{
//		print( n /10);//递归：自己调用自己
//	}
//	printf("%d ", n % 10);//1 2 3 4 
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//输入1234
//	print(num);
//	return 0;
//}——————————————————————————
//#include<string.h>
//int str_len1(char* str)//不用递归函数制作strlen函数
//{
//	int count = 0;
//	while (*str != '\0')//只能是'\0',不能是"\0".
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int str_len2(char* str)//用递归函数制作strlen函数
//{
//	if (*str != '\0')
//	{
//		return 1 + str_len2(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int str_len3(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//指针间相加减
//}
//int main()
//{
//	char arr[] = "z h o u";
//	int len = str_len1(arr);
//	int len2 = str_len2(arr);
//	int len3 = str_len3(arr);
//	printf("len=%d\n ", len);//len=7  制作成功！
//	printf("len=%d\n ", len2);//len=7 制作成功！
//	printf("len=%d\n ", len3);//len=7 制作成功！
//	return 0;
//}
//用递归计算n的阶乘
//int fac(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac(n - 1);
//	}
//}
////不用递归计算n的阶乘
//int fac1(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入n的值\n");
//	scanf("%d", &n);//n=5
//	int ret = fac(n);
//	int ret1 = fac1(n);
//	printf("%d的阶乘为%d\n", n,ret);//120 成功
//	printf("%d的阶乘为%d\n", n, ret1);//120 成功
//	return 0;
//}——————————————————————————
//不用递归计算第n个斐波那契数
//int fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int sum = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 1; i <= n-2; i++)
//		{
//			sum = a + b;
//			a = b;
//			b = sum;
//		}
//		return sum;
//	}
//}
////比较麻烦 优化
//int fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int sum = 1;
//	while (n > 2)
//	{
//		sum = a + b;
//		a = b;
//		b = sum;
//		n--;
//	}
//	return sum;
//
//}
////用递归函数算第n个斐波那契数
//int fib1(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib1(n-1) + fib1(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入n的值\n");
//	scanf("%d", &n);
//	int ret = fib(n);
//	int ret1 = fib1(n);
//	int ret2 = fib2(n);
//	printf("第%d个斐波那契值为%d\n", n, ret);
//	printf("第%d个斐波那契值为%d\n", n, ret1);
//	printf("第%d个斐波那契值为%d\n", n, ret2);
//	return 0;
//}
//题目：计算以下算法的值
//int fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * fun(n + 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//输入n=2 结果为16 n=3 结果为8
//	int ret = fun(n);
//	printf("%d\n", ret);
//	return 0;
//}————————————————————————————
/*青蛙跳台阶问题：
一只青蛙一次可以跳一个台阶或两个台阶
问跳n个台阶有多少种跳法
分析：
跳一个台阶：1种方法
两个：2
三个：3
四个：5
五个：8
再用数学归纳法可得结论
......*/
//极像斐波那契数列，所以可用相似办法解决
//——————————————————————————
//二维数组
//int main()
//{
//	int arr[][4] = { { 1,2,3,4 },{5,6,7,8} };//第一个[]为行，第二个[]为列，行可以省，列不可省
//	return 0;
//}————————————————————————
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,1,2,3,4 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);//1234
//									//5678
//		}                           //1234
//		printf("\n");
//	}
//	return 0;
//}——————————————————————
//大工程：三子棋（井字棋）
//首先创建game.c文件和game.h文件（为了便捷清晰）
//#include "game.h"
//void game()
//{
//	char board[ROW][LIS] = { 0 };
//	//先初始化棋盘
//	initboard(board, ROW, LIS);
//	//创建棋盘
//	displayboard(board, ROW, LIS);
//	//玩家下
//	while (1)
//	{
//		srand((unsigned int)time(NULL));
//		playermove(board, ROW, LIS);
//		displayboard(board, ROW, LIS);
//		//判定是否赢
//		/*
//		如果玩家赢  *
//		如果电脑赢  #
//		如果满了    f (再来一局）
//		*/
//		char ret;
//		ret=iswin(board, ROW, LIS);
//		if (ret == '*')
//		{
//			printf("耶！赢了！\n");
//			break;
//		}
//		else if (ret == 'f')
//		{
//			printf("平局哦！再来一局吧！\n");
//			initboard(board, ROW, LIS);
//	//创建棋盘
//	displayboard(board, ROW, LIS);
//			continue;
//		}
//		//电脑下
//		computermove(board, ROW, LIS);
//		displayboard(board, ROW, LIS);
//		ret = iswin(board, ROW, LIS);
//		if (ret == '#')
//		{
//			printf("咦!输了！\n");
//			break;
//		}
//		//判断是否赢
//	}
//}
//void menu()
//{
//	printf("************************************\n");
//	printf("*****1.play              0.exit*****\n");
//	printf("************************************\n");
//}
//void test()
//{
//	int n = 0;
//	do
//	{
//		menu();
//		printf("请输入0或1：");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (n);
//}
//int main()
//{
//	test();
//	return 0;
//}————————————————————————
//扫雷
//#include "game.h"
//void game()
//{
//	char mine[ROWS][LISS] = { 0 };
//	char show[ROWS][LISS] = { 0 };
//	int win = 0;
//	//初始化雷盘
//	initboard(show, ROWS, LISS, '*');
//	initboard(mine, ROWS, LISS, '0');
//	//展示show盘
//	
//	//displayboard(mine, ROW, LIS);
//	//布置雷
//	srand((unsigned int)time(NULL));
//	setmine(mine, ROW, LIS);
//	displayboard(mine, ROW, LIS);
//	displayboard(show, ROW, LIS);
//	//排雷
//	findmine(show, mine, ROW, LIS);
//}
//void menu()
//{
//	printf("***********************************\n");
//	printf("*****1.play             0.exit*****\n");
//	printf("***********************************\n");
//}
//void test()
//{
//	int n = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("输入错误！\n");
//			break;
//		}
//	} while (n);
//}
//int main()
//{
//	test();
//	return 0;
//}——————————————————————
//左右移
//int main()
//{
//	//int a = 6;
//	//a >>= 1;//110向右移以为即011
//	//printf("%d\n", a);
//	//return 0;
//	int a = -2;
//	a >>= 1;//右移规则：右边丢弃，左边补原符号为，即正数补0；负数补1
//	printf("%d\n", a);
//}
//计算机中数字储存的是反码，其中整数的原反补码相同，
//源码变反码：符号位（即表符号的第一位（0或1））不变，其他位按位取反最后加一即可
//int main()
//{
//	int a = 5;
//	a <<= 1;//左移：左边丢弃，右边补0
//	printf("%d\n", a);
//	return 0;
//}——————————————————————
//& | ^
//int main()
//{
//	int a = 3;    //011
//	int b = 5;    //101
//	//int c = a&b;//001  &:按位与：有0为0；全1为1；
//	//printf("%d\n", c);//1
//	int c = a | b;//111  |:按位或：有1为1，全0为0；
//	printf("%d\n", c);//7
//	c = a^b;     //110  ^:按位异或：相同为0；不同为1；
//	printf("%d\n", c);//6
//	return 0;
//}
//题目:不创建第三个函数交换两个数的值
//int main()
//{
//	int a = 3;//011
//	int b = 5;//110
//	a = a^b;  //101 返现它们不管谁异或谁都得第三个数
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);//a=5 b=3 交换成功
//	return 0;//但实际不推荐此法，可读性不好，还是创建第三个数可读性强
//}————————————————————
//计算一个数的二进制数中1的个数
//int main()
//{
//	int count = 0;
//	int a =-3;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	printf("%d\n", count);//就像%10再除10一样可得十进制数每一位样 %2再除2可得二进制中每一位
//	return 0;//但此法不可算负数 因为负数%2不可能为一，即count一直为0
//}
//优化
//int main()
//{
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n >> i & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//再优化
//int countbit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);//n&(n-1)则会消除n二进制中最右边的1一直消到0
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = countbit(n);
//	printf("%d ", count);
//	return 0;
//}
//题目：打印七张表，每张表表示1-127中二进制某位为1的所有情况
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 127; i++)
//	{
//		if (i >> 1 & 1 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}————————————————————————
//按位取反
//int main()
//{
//	int i = 1;
//	printf("%d\n", ~i);//-2   ~:按位取反，即0变1，1变0（二进制数）
//	return 0;
//}——————————————————————————
//题目
//int main()
//{
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("a=%d b=%d c=%d d=%d", a, b, c, d);//2 3 3 5
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//先为a再++ 有a=0为假，所以停止计算后面的最后只有a加了1
//	//printf("a=%d b=%d c=%d d=%d", a, b, c, d);//1 2 3 4、
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//只要出现1即为真，停止计算，计算++b时停止计算
//	printf("a=%d b=%d c=%d d=%d", a, b, c, d);//1 3 3 4
//	return 0;
//}————————————————————————————
//三目操作符
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int max = (a > b ? a : b);//用法1
//	printf("max=%d\n", max);
//	return 0;
//}
//int max(int x,int y)
//{
//	return x > y ? x : y;//用法2
//}
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int c = max(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}
//#define max(x,y)(x>y?x:y)//用法3
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int c = max(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}——————————————————————
//自定义结构体变量（像int char等一样的）
//struct def//struct:结构，结构体，（不可少）
//{
//	char name[20];//[20]不可少
//	int age;
//	char id[20];
//};//‘；’不可少
//int main()
//{
//	struct def stu = { "张三",18,"123456" };
//	struct def* p = &stu;
//	printf("%s\n", stu.name);//stu.name即在stu中找到name(方法1)
//	printf("%d\n", stu.age);
//	printf("%s\n", (*p).name);//*p与stu等价(方法2)
//	printf("%s\n", p->name);//用stu都不行，可以用p而不是*p(方法3)
//	return 0;
//}————————————————————————
//指针
//int*  char*  flout* double*  是指针的类型
//int main()
//{
//	int a = 1;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);//006FFC20
//	printf("%p\n", pb);//006FFC20相同
//	printf("%p\n", pa+1);//006FFC24（移动四个字节）
//	printf("%p\n", pb+1);//006FFC21（移动一个字节） 不同
//	return 0;
//	//所以，即使char* 和 int* 都可以存放a的地址，但它们访问内存的权限不同
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;//此处为首项即arr[0]
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//0-10
//	}
//	return 0; 
//}
//int* test()
//{
//	int a = 20;
//	return &a;
//}
//int main()
//{
//	//int a = 10;
//	int* p = test();
//	printf("%d \n", *p);//虽然可以得到20，但这样是有问题的（后有警告：返回局部变量或临时变量的地址 : a）
//	return 0;
//}
//指针间相加减
//int main()
//{
//	int arr[10] =   { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] =  { 10,9,8,7,6,5,4,3,2,1 };
//	char arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* p = arr;//代表首元素
//	int* p1 = arr1;
//	char* p2 = arr2;
//	printf("%d \n", *p - *(p + 9));//-9
//	printf("%d \n", *p - *p1);//-9
//	printf("%d \n", *p - *p2);//-9 虽然可以，但这样不行，int 和char不兼容
//	return 0;
//}
//注：&arr取出的是整个arr中的地址，就像sizeof(arr)计算的是整个数组大小一样
//int main()
//{
//	int arr[10] = { 0 }; 
//	printf("%p\n", &arr[0]);//0133F7BC  地址不是不变的 每次运行地址都不相同
//	printf("%p\n", arr);//0133F7BC  这样也行
//	printf("%p\n", arr + 1);//0133F7C0  加了4个字节
//	printf("%p\n", &arr); //0133F7BC
//	printf("%p\n", &arr+1);//0133F7E4  加了40个字节
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** p1 = &p;
//	printf("%d\n", **p1);//10  据此可推测三级指针等
//	return 0;
//}
//冒泡排序
//int main()
//{
//	int arr[10] = {'m','i','j','t','z'};//此处为ask码表上的值
//	int arr[] = { 9,5,2,6,4,5,4,3,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int tem = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}————————————————————————
//设置一个打印函数，并将arr中数字反序
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//void print(int arr[],int sz)//注：其中arr[]中[]不可省，否则有问题
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);//reverse:颠倒，反转 ，背面
//	print(arr,sz);//注：不是printf
//	return 0;
//}——————————————————————————
//交换两个数组内的值
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	int tem = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}————————————————————————————
//题目
//int i;//全局变量不赋值，默认为0；局部变量不赋值，为随机值
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">");//结果为：>
//	}
//	else
//	{
//		printf("<");//原因：sizeof返回的是无符号数，若要与i比较则i也要转换为无符号数，即-1二进制表示的最前面的1翻译成2^31，则i的值将特别大
//	}
//	return 0;
//}————————————————————————
//题目：计算两个数二进制数不同的位数
//int countbit(int ret)
//{
//	int count = 0;
//	while (ret)
//	{
//		ret = ret&(ret - 1);
//		count++;
//	}
//	return count;
//}
//int difbit(int m, int n)
//{
//	int ret = m^n;
//	int count=countbit(ret);
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = difbit(m, n);
//	printf("%d\n", count);
//	return 0;
//}——————————————————————————
//题目：将一个数的二进制数的奇数和偶数为分别打印出来
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	printf("奇数位\n");
//	for (i = 30; i>=0; i-=2)
//	{
//		int ret = n >> i;
//		j = ret & 1;
//		printf("%d ", j);
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for (i = 31; i>=1; i -= 2)
//	{
//		int ret = n >> i;
//		j = ret & 1;
//		printf("%d ", j);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}——————————————————————————
//题目：数组逆序
//#include<string.h>
////递归方法
//void reverse(char arr[])
//{
//	int len = strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
////非递归方法
//void reverse1(char arr[])
//{
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefghigk";
//	char arr1[] = "abcdefghigk";
//	reverse(arr);
//	reverse1(arr1);
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//	return 0;
//}——————————————————————
//题目：写一个函数，计算组成一个数的数字之和
//int sum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + sum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d\n", ret);
//	return 0;
//}—————————————————————————————————
//题目：计算n的k次方
//float power(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n*power(n, k - 1);
//	}
//	else
//	{
//		return (1.0 / (power(n, -k)));//1.0写成1也行
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	float ret = power(n, k);//power有次方的意思
//	printf("%lf\n", ret);
//	return 0;
//}

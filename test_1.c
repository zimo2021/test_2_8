#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>//����system 
//#include<windows.h>//����Sleep ע�⣺sΪ��д 
//#include<string.h>//����stelen 
//#include<limits.h>
//int main()//ģ����֤���
//{
//	char pw[20]={0};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		printf("���������룺\n");
//		scanf("%s",&pw);
//		if(strcmp(pw,"123456")==0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��¼ʧ��\n");
//		}
//	}
//	if(i==3)
//		{
//			printf("���δ�������������\n");
//		}
//	return 0;
// }������������������������������������������������
//int main()//ģ����֤���
//{
//	int i = 0;
//	char name[20] = { 0 };
//	char pw[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������û�����\n");// ���������������� 
//		scanf("%s", &name);
//		printf("���������룺\n");
//		scanf("%s", &pw);
//		if (strcmp(name, "�ܴ�") == 0 && strcmp(pw, "123456" )==0)//ע����==0
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��½ʧ��\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���δ�������������\n");
//	}
//	return 0;
//}��������������������������������������������������������������������
//int main()//������������С������
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
//}��������������������������������������������������������
//��100-200�����������
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
//		if (m >= sqrt(i))//sqrt(��ƽ����-��ѧ�еĿ⺯��-math.h
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}������������������������������������������������������
//����1/1+1/2+1/3+.....+1/100
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
//}����������������������������������������������������
//�ҵ�ʮ���������ֵ
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
//}��������������������������������������������������
//�žų˷���Ĵ�ӡ
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i ; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, j*i);//%-2d��������룬%2d�����Ҷ���
//		}
//		printf("\n");
//	}
//	return 0;
//}������������������������������������������������
//#include<time.h>//������� ͦ���ӵ�
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
//		printf("������֣�\n");
//		scanf("%d",&n);
//		if (n > m)
//		{
//			printf("�´���\n");
//			sum++;
//		}
//		else if (n < m)
//		{
//			printf("��С��\n");
//			sum++;
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			printf("m=%d\n", m);
//			sum++;
//			printf("������%d��\n", sum);
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}����������������������������������������������������
//#include<math.h>//�ж�һ�����Ƿ�Ϊ����
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
//	printf("������I��ֵ��\n");
//	//�ж�i�Ƿ�Ϊ����
//	scanf("%d", &i);
//	if (judge(i) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	printf("judge(i)=%d", judge(i));
//	return 0;
//}������������������������������������������������
//strcpy-string copy-�ַ�������
//#include<string.h>
//int main()
//{
//	char arr1[]= "bit";
//	char arr2[]= "#########";//ע��[]����ʡ
//	strcpy(arr2, arr1);
//	printf("arr2=%s\n", arr2);//��Ϊ��arr2=bit������arr2=bit####,��Ϊarr1=bit��������\0
//	return 0;
//}������������������������������������������������
//void swap1(int x, int y)//���ֽ���  ��ֵ����
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)  ��ַ����
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
//	printf("m=%d n=%d\n", m, n);//m=10 n=20 ����ʧ��
//	swap2(&m, &n);//�Ե�ַ��ֵ
//	printf("m=%d n=%d\n", m, n);//m=20 n=10 �����ɹ�
//	return 0;
//}����������������������������������������������������
//���±�
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
//	printf("������Ҫ���ҵ�ֵm��\n");
//	scanf("%d",&m);
//	int ret=binary_search(arr, m, sz);
//	if (ret == 0)
//	{
//		printf("���޴���\n");
//	}
//	else
//	{
//		printf("m���±�Ϊ��%d\n", ret);
//	}
//	return 0;
//}��������������������������������������������
//int main()//С����
//{
//	printf("%d", printf("%d", printf("%d", 43)));//�𰸣�4321��������printf��ӡ43���ڶ���printf��ӡ2����һ��printf��ӡ1
//	//  1          2            3
//	return 0;
//}������������������������������������������������
//�����͵ݹ�
//�ݹ麯��
//int main()
//{
//	printf("hehe\n");//һֱ��ӡhehֱ��ջ���
//	main();
//	return 0;
//}��������������������������������������������
//print(int n)
//{
//	if (n > 9)
//	{
//		print( n /10);//�ݹ飺�Լ������Լ�
//	}
//	printf("%d ", n % 10);//1 2 3 4 
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//����1234
//	print(num);
//	return 0;
//}����������������������������������������������������
//#include<string.h>
//int str_len1(char* str)//���õݹ麯������strlen����
//{
//	int count = 0;
//	while (*str != '\0')//ֻ����'\0',������"\0".
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int str_len2(char* str)//�õݹ麯������strlen����
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
//	return end - start;//ָ�����Ӽ�
//}
//int main()
//{
//	char arr[] = "z h o u";
//	int len = str_len1(arr);
//	int len2 = str_len2(arr);
//	int len3 = str_len3(arr);
//	printf("len=%d\n ", len);//len=7  �����ɹ���
//	printf("len=%d\n ", len2);//len=7 �����ɹ���
//	printf("len=%d\n ", len3);//len=7 �����ɹ���
//	return 0;
//}
//�õݹ����n�Ľ׳�
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
////���õݹ����n�Ľ׳�
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
//	printf("������n��ֵ\n");
//	scanf("%d", &n);//n=5
//	int ret = fac(n);
//	int ret1 = fac1(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n,ret);//120 �ɹ�
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret1);//120 �ɹ�
//	return 0;
//}����������������������������������������������������
//���õݹ�����n��쳲�������
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
////�Ƚ��鷳 �Ż�
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
////�õݹ麯�����n��쳲�������
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
//	printf("������n��ֵ\n");
//	scanf("%d", &n);
//	int ret = fib(n);
//	int ret1 = fib1(n);
//	int ret2 = fib2(n);
//	printf("��%d��쳲�����ֵΪ%d\n", n, ret);
//	printf("��%d��쳲�����ֵΪ%d\n", n, ret1);
//	printf("��%d��쳲�����ֵΪ%d\n", n, ret2);
//	return 0;
//}
//��Ŀ�����������㷨��ֵ
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
//	scanf("%d", &n);//����n=2 ���Ϊ16 n=3 ���Ϊ8
//	int ret = fun(n);
//	printf("%d\n", ret);
//	return 0;
//}��������������������������������������������������������
/*������̨�����⣺
һֻ����һ�ο�����һ��̨�׻�����̨��
����n��̨���ж���������
������
��һ��̨�ף�1�ַ���
������2
������3
�ĸ���5
�����8
������ѧ���ɷ��ɵý���
......*/
//����쳲��������У����Կ������ư취���
//����������������������������������������������������
//��ά����
//int main()
//{
//	int arr[][4] = { { 1,2,3,4 },{5,6,7,8} };//��һ��[]Ϊ�У��ڶ���[]Ϊ�У��п���ʡ���в���ʡ
//	return 0;
//}������������������������������������������������
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
//}��������������������������������������������
//�󹤳̣������壨�����壩
//���ȴ���game.c�ļ���game.h�ļ���Ϊ�˱��������
//#include "game.h"
//void game()
//{
//	char board[ROW][LIS] = { 0 };
//	//�ȳ�ʼ������
//	initboard(board, ROW, LIS);
//	//��������
//	displayboard(board, ROW, LIS);
//	//�����
//	while (1)
//	{
//		srand((unsigned int)time(NULL));
//		playermove(board, ROW, LIS);
//		displayboard(board, ROW, LIS);
//		//�ж��Ƿ�Ӯ
//		/*
//		������Ӯ  *
//		�������Ӯ  #
//		�������    f (����һ�֣�
//		*/
//		char ret;
//		ret=iswin(board, ROW, LIS);
//		if (ret == '*')
//		{
//			printf("Ү��Ӯ�ˣ�\n");
//			break;
//		}
//		else if (ret == 'f')
//		{
//			printf("ƽ��Ŷ������һ�ְɣ�\n");
//			initboard(board, ROW, LIS);
//	//��������
//	displayboard(board, ROW, LIS);
//			continue;
//		}
//		//������
//		computermove(board, ROW, LIS);
//		displayboard(board, ROW, LIS);
//		ret = iswin(board, ROW, LIS);
//		if (ret == '#')
//		{
//			printf("��!���ˣ�\n");
//			break;
//		}
//		//�ж��Ƿ�Ӯ
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
//		printf("������0��1��");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (n);
//}
//int main()
//{
//	test();
//	return 0;
//}������������������������������������������������
//ɨ��
//#include "game.h"
//void game()
//{
//	char mine[ROWS][LISS] = { 0 };
//	char show[ROWS][LISS] = { 0 };
//	int win = 0;
//	//��ʼ������
//	initboard(show, ROWS, LISS, '*');
//	initboard(mine, ROWS, LISS, '0');
//	//չʾshow��
//	
//	//displayboard(mine, ROW, LIS);
//	//������
//	srand((unsigned int)time(NULL));
//	setmine(mine, ROW, LIS);
//	displayboard(mine, ROW, LIS);
//	displayboard(show, ROW, LIS);
//	//����
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
//		printf("��ѡ��");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (n);
//}
//int main()
//{
//	test();
//	return 0;
//}��������������������������������������������
//������
//int main()
//{
//	//int a = 6;
//	//a >>= 1;//110��������Ϊ��011
//	//printf("%d\n", a);
//	//return 0;
//	int a = -2;
//	a >>= 1;//���ƹ����ұ߶�������߲�ԭ����Ϊ����������0��������1
//	printf("%d\n", a);
//}
//����������ִ�����Ƿ��룬����������ԭ��������ͬ��
//Դ��䷴�룺����λ��������ŵĵ�һλ��0��1�������䣬����λ��λȡ������һ����
//int main()
//{
//	int a = 5;
//	a <<= 1;//���ƣ���߶������ұ߲�0
//	printf("%d\n", a);
//	return 0;
//}��������������������������������������������
//& | ^
//int main()
//{
//	int a = 3;    //011
//	int b = 5;    //101
//	//int c = a&b;//001  &:��λ�룺��0Ϊ0��ȫ1Ϊ1��
//	//printf("%d\n", c);//1
//	int c = a | b;//111  |:��λ����1Ϊ1��ȫ0Ϊ0��
//	printf("%d\n", c);//7
//	c = a^b;     //110  ^:��λ�����ͬΪ0����ͬΪ1��
//	printf("%d\n", c);//6
//	return 0;
//}
//��Ŀ:����������������������������ֵ
//int main()
//{
//	int a = 3;//011
//	int b = 5;//110
//	a = a^b;  //101 �������ǲ���˭���˭���õ�������
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);//a=5 b=3 �����ɹ�
//	return 0;//��ʵ�ʲ��Ƽ��˷����ɶ��Բ��ã����Ǵ������������ɶ���ǿ
//}����������������������������������������
//����һ�����Ķ���������1�ĸ���
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
//	printf("%d\n", count);//����%10�ٳ�10һ���ɵ�ʮ������ÿһλ�� %2�ٳ�2�ɵö�������ÿһλ
//	return 0;//���˷������㸺�� ��Ϊ����%2������Ϊһ����countһֱΪ0
//}
//�Ż�
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
//���Ż�
//int countbit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);//n&(n-1)�������n�����������ұߵ�1һֱ����0
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
//��Ŀ����ӡ���ű�ÿ�ű��ʾ1-127�ж�����ĳλΪ1���������
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
//}������������������������������������������������
//��λȡ��
//int main()
//{
//	int i = 1;
//	printf("%d\n", ~i);//-2   ~:��λȡ������0��1��1��0������������
//	return 0;
//}����������������������������������������������������
//��Ŀ
//int main()
//{
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("a=%d b=%d c=%d d=%d", a, b, c, d);//2 3 3 5
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//��Ϊa��++ ��a=0Ϊ�٣�����ֹͣ�����������ֻ��a����1
//	//printf("a=%d b=%d c=%d d=%d", a, b, c, d);//1 2 3 4��
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//ֻҪ����1��Ϊ�棬ֹͣ���㣬����++bʱֹͣ����
//	printf("a=%d b=%d c=%d d=%d", a, b, c, d);//1 3 3 4
//	return 0;
//}��������������������������������������������������������
//��Ŀ������
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int max = (a > b ? a : b);//�÷�1
//	printf("max=%d\n", max);
//	return 0;
//}
//int max(int x,int y)
//{
//	return x > y ? x : y;//�÷�2
//}
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int c = max(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}
//#define max(x,y)(x>y?x:y)//�÷�3
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int c = max(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}��������������������������������������������
//�Զ���ṹ���������int char��һ���ģ�
//struct def//struct:�ṹ���ṹ�壬�������٣�
//{
//	char name[20];//[20]������
//	int age;
//	char id[20];
//};//������������
//int main()
//{
//	struct def stu = { "����",18,"123456" };
//	struct def* p = &stu;
//	printf("%s\n", stu.name);//stu.name����stu���ҵ�name(����1)
//	printf("%d\n", stu.age);
//	printf("%s\n", (*p).name);//*p��stu�ȼ�(����2)
//	printf("%s\n", p->name);//��stu�����У�������p������*p(����3)
//	return 0;
//}������������������������������������������������
//ָ��
//int*  char*  flout* double*  ��ָ�������
//int main()
//{
//	int a = 1;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);//006FFC20
//	printf("%p\n", pb);//006FFC20��ͬ
//	printf("%p\n", pa+1);//006FFC24���ƶ��ĸ��ֽڣ�
//	printf("%p\n", pb+1);//006FFC21���ƶ�һ���ֽڣ� ��ͬ
//	return 0;
//	//���ԣ���ʹchar* �� int* �����Դ��a�ĵ�ַ�������Ƿ����ڴ��Ȩ�޲�ͬ
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;//�˴�Ϊ���arr[0]
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
//	printf("%d \n", *p);//��Ȼ���Եõ�20����������������ģ����о��棺���ؾֲ���������ʱ�����ĵ�ַ : a��
//	return 0;
//}
//ָ�����Ӽ�
//int main()
//{
//	int arr[10] =   { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] =  { 10,9,8,7,6,5,4,3,2,1 };
//	char arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* p = arr;//������Ԫ��
//	int* p1 = arr1;
//	char* p2 = arr2;
//	printf("%d \n", *p - *(p + 9));//-9
//	printf("%d \n", *p - *p1);//-9
//	printf("%d \n", *p - *p2);//-9 ��Ȼ���ԣ����������У�int ��char������
//	return 0;
//}
//ע��&arrȡ����������arr�еĵ�ַ������sizeof(arr)����������������Сһ��
//int main()
//{
//	int arr[10] = { 0 }; 
//	printf("%p\n", &arr[0]);//0133F7BC  ��ַ���ǲ���� ÿ�����е�ַ������ͬ
//	printf("%p\n", arr);//0133F7BC  ����Ҳ��
//	printf("%p\n", arr + 1);//0133F7C0  ����4���ֽ�
//	printf("%p\n", &arr); //0133F7BC
//	printf("%p\n", &arr+1);//0133F7E4  ����40���ֽ�
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** p1 = &p;
//	printf("%d\n", **p1);//10  �ݴ˿��Ʋ�����ָ���
//	return 0;
//}
//ð������
//int main()
//{
//	int arr[10] = {'m','i','j','t','z'};//�˴�Ϊask����ϵ�ֵ
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
//}������������������������������������������������
//����һ����ӡ����������arr�����ַ���
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
//void print(int arr[],int sz)//ע������arr[]��[]����ʡ������������
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
//	reverse(arr, sz);//reverse:�ߵ�����ת ������
//	print(arr,sz);//ע������printf
//	return 0;
//}����������������������������������������������������
//�������������ڵ�ֵ
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
//}��������������������������������������������������������
//��Ŀ
//int i;//ȫ�ֱ�������ֵ��Ĭ��Ϊ0���ֲ���������ֵ��Ϊ���ֵ
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">");//���Ϊ��>
//	}
//	else
//	{
//		printf("<");//ԭ��sizeof���ص����޷���������Ҫ��i�Ƚ���iҲҪת��Ϊ�޷���������-1�����Ʊ�ʾ����ǰ���1�����2^31����i��ֵ���ر��
//	}
//	return 0;
//}������������������������������������������������
//��Ŀ����������������������ͬ��λ��
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
//}����������������������������������������������������
//��Ŀ����һ�����Ķ���������������ż��Ϊ�ֱ��ӡ����
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	printf("����λ\n");
//	for (i = 30; i>=0; i-=2)
//	{
//		int ret = n >> i;
//		j = ret & 1;
//		printf("%d ", j);
//	}
//	printf("\n");
//	printf("ż��λ\n");
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
//}����������������������������������������������������
//��Ŀ����������
//#include<string.h>
////�ݹ鷽��
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
////�ǵݹ鷽��
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
//}��������������������������������������������
//��Ŀ��дһ���������������һ����������֮��
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
//}������������������������������������������������������������������
//��Ŀ������n��k�η�
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
//		return (1.0 / (power(n, -k)));//1.0д��1Ҳ��
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	float ret = power(n, k);//power�дη�����˼
//	printf("%lf\n", ret);
//	return 0;
//}

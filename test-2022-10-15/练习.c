#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	/*字符串的结束标志是：'\0'
//	"abcdef";这里在f的后面其实是有一个\0的字符的，只是不显现出来，作为结束标志
//	'\0'是一个字符
//	0是一个数字，就是数字0
//	'0'  这个是ASCII码值，48*/
//	
//	return 0;
//}

//定义一个比较大小的函数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	/*if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);*/
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//sizenof
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//这里的输出是4，因为a的字节是4，下面两种同样是4
//	printf("%d\n", sizeof(int));//这里的int是整形的变量指向，a属于整形变量，所以这里还是4
//	printf("%d\n", sizeof a);//这里和第一种的差不多的，所以这里的括号是可以省略的
//	printf("%d\n", sizeof(arr));//这里的话就是计算数组里面的大小，单位是比特（字节）
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//这里就是利用数组的总和（字节）算出数组中有多少个元素，[0]指的是数组中的1，因为在计算机中，计算是从0开始的
//	return 0;
//}


//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//~ ---按（2进制）为取反，
//	//例如：1010使用这个符号之后，取值就是0101
//	printf("%d\n", b);
//	return 0;
//}



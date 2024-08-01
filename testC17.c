﻿#include <stdio.h> 
// include指令与头文件
// 本行是预处理指令 
// stdio.h的含义是标准输入/输出头文件

int main()
// C程序从该行开始执行 
// main()函数是C程序的基本模块 
// int是该函数的返回类型，将该函数返回的整数值返回给操作系统
//（）内包含一些传入函数的信息

{
// {}标记函数体的开始与结束
// {}也可用于把函数中的多条语句合并成一个单元或块

	int num;
// 本行代码叫声明，既引入一个变量，又确定了该变量是一个整数
// int是C语言中的一个关键字，表示一种基本的数据类型
// num是一个标识符，即一个变量、函数或其他实体的名称
// 声明把特定标识符与计算机内存中的特定位置联系起来，同时也确定了存储在某位置的信息类型或数据类型

	num = 1;
// 本行是赋值表达式语句，通过赋值运算符实现赋值

	printf("I am a simple ");
// 控制权转给该函数，读取""中的内容并打印，函数执行结束后，控制权被返回给主调函数 main()

	printf("computer.\n");
// \n是一个换行符，其属于转义序列，用于代表难以表示或无法输入的字符

	printf("My favourite number is %d because it is the first.\n", num);
// %d相当于一个占位符，指明输出num值的位置
// %提醒程序打印变量，d表示把变量作为十进制整数打印，f提醒用户这是一种格式化打印函数

	return 0;
// return语句是一种跳转语句，后面表示待返回的值，这是int所要求的main()函数应返回一个整数

}
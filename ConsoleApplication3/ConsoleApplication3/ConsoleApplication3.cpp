#include"stdafx.h"

int main() {
	int eof = 1;
	double number1, number2, sum;
	char symbol;
	printf("请输入需要计算的第一个数字（按回车键结束）:");
	scanf_s("%lf", &number1);
	printf("请输入需要计算的第二个数字（按回车键结束）:");
	scanf_s("%lf", &number2);
	printf("请输入运算符号（只能输入+-*/按回车键结束）:");
	while (eof)         //判断输入的运算符号是否为四则运算 
	{
		getchar();    //消除回车键留下的字符，防止下次scanf函数接收回车键
		scanf_s("%c", &symbol);
		if ((symbol == '+') || (symbol == '-') || (symbol == '*') || (symbol == '/')) eof = 0;
		else printf("你的输入有误，重新输入:");
	}
	switch (symbol)  //判断运算符号从而计算 
	{
	case '+':sum = number1 + number2;
		printf("%g+%g=%g", number1, number2, sum);    //%g合适格式输出 
		break;
	case '-':sum = number1 - number2;
		printf("%g-%g=%g", number1, number2, sum);
		break;
	case '*':sum = number1 * number2;
		printf("%g*%g=%g", number1, number2, sum);
		break;
	case '/':sum = number1 / number2;
		printf("%g/%g=%g", number1, number2, sum);
		break;
	default:break;
	}
	putchar(10);        //换行 
	return(0);
}
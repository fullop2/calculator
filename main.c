#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int number1, number2, result;
	char operator;
	
	printf("연산할 식을 입력해주세요:");
	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			result = add(number1, number2);
			break;
		case '-':
			result = sub(number1, number2);
			break;
		case '*':
			result = multi(number1, number2);
			break;
		case '/':
			result = div(number1, number2);
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int number1, int number2)
{
	//TODO implementation
	return (number1 + number2);
}
 
int sub(int number1, int number2)
{
	int ret = number1 - number2;
	return ret;
}
 
int multi(int number1, int number2)
{
	int ret = number1 * number2;
	return ret;
}
 
int div(int number1, int number2)
{
	if(number2 == 0)
	{
		printf("DIV/0\n");
		return 0;
	}
	return number1 / number2;
}

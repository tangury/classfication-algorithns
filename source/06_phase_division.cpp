/***************************************************************************************************
 **********************输入两个正整数m和n，求其最大公约数和最小公倍数**************************
 *********************************** 利用辗转相除法 ************************************************
 */
/*
#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, num1, num2, temp;
	printf("please input two number: \n");
	scanf("%d, %d", &num1, &num2);
	if(num1 < num2)
	{ temp = num1;
	num1 = num2;
	num2 = temp;
	}
	a = num1; b = num2;
	while(b != 0)   //利用辗转相除法，直到b为0为止
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	printf("Max common divisor: %d\n", a);
	printf("Max common multiple: %d\n", num1*num2/a);


}
*/

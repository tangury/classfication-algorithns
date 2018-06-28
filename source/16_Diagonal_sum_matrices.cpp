/***************************************************************************************************
 ************************************求一个3*3矩阵对角线元素纸盒************************************
 ********************利用双重for循环控制输入二维数组，再将a累加后输出********************************
 输出错误！！！数组不能用%d输出吗？*/
/*
#include <stdio.h>
#include <stdlib.h>

main()
{
	int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
	int temp1, temp2, number, end, i, j;
	printf("original array is:\n ");
	for(i=0; i<10; i++)
		printf("%5d", a);
	printf("\n");
	printf("insert a new number:");
	scanf("%d", &number);
	end = a[9];
	if(number>end)
		a[10] = number;
	else
	{
		for(i=0; i<10; i++)
		{
			if(a > number)
			{
				temp1 = a;
				a = number;
				for(j=i+1; j<11; j++)
				{
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
				}
				break;
			}
		}
	}
	for(i=0; i<11; i++)
		printf("%6d", a);

}
*/

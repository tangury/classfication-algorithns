/***************************************************************************************************
 *********************************************迭代法求方程根****************************************
 */
/*
//迭代法求一个数的平方根
#include <stdio.h>
#include <stdlib.h>
#define Epsilon 1.0E-6
#include<math.h>
main()
{
	float a, x0, x1;
	printf("请输入要求的数：");
	scanf("%f", &a);
	x0 = a/2;
	x1 = (x0 + a/x0)/2;
	while (fabs(x1 - x0) >= Epsilon)
	{
		x0 = x1;
		x1 = (x0 + a/x0)/2;
	}
	printf("%f的平方根:%f\n", a, x1);
}
*/
/*
//用牛顿迭代法，求方程2*x*x*x - 4*x*x + 3*x - 6的根
#include <stdio.h>
#include <stdlib.h>
#define Epsilon 1.0E-6
#include<math.h>
main()
{
	float x1, x0 = 1.5;
	x1 = x0 - (2*x0*x0*x0-4*x0*x0+3*x0-6)/(6*x0*x0-8*x0+3);
	while(fabs(x1 - x0) >= Epsilon)
	{
		x0 = x1;
		x1 = x0 - (2*x0*x0*x0-4*x0*x0+3*x0-6)/(6*x0*x0-8*x0+3);
	}
	printf("方程的根为%f\n", x1);
}
*/
/*有问题！！！
//用二分法求上题
#include <stdio.h>
#include <stdlib.h>
#define Epsilon 1.0E-2
#include<math.h>
main()
{
	float x1=1, x2=100, x0, f1, f2, f0;
	x0 = (x1+x2)/2.0;
	f0 = 2*x0*x0*x0-4*x0*x0+3*x0-6;   //求中点的函数值
	while (fabs(f0) >= Epsilon)
	{
		if(f0*f1 < 0)
		{
			x2 = x0;
			f2 = 2*x2*x2*x2-4*x2*x2+3*x2-6;
		}
		if(f0*f2 < 0)
		{
			x1 = x0;
			f1 = 2*x1*x1*x1-4*x1*x1+3*x1-6;
		}

		x0 = (x1 + x2)/2.0;
		f0 = 2*x0*x0*x0-4*x0*x0+3*x0-6;
	}

	printf("用二分法求得方程的根：%f\n", x0);

}
*/

/***************************************************************************************************
 * ******一个5位数，判断它是不是回文数。即12321是回文数，个数与万位相同，十位与千位相同。************
 ****************************************************************************************************/
/*
#include <stdio.h>
#include <stdlib.h>
main()
{
    long ge, shi, qian, wan, x;
    printf("please input x:");
    scanf("%ld", &x);
    if(x >= 10000)
    {
    	wan = x/10000;
    qian = x%10000/1000;
    shi = x%100/10;
    ge = x%10;
    if((ge==wan) && (shi==qian))
    	printf("this number is a huiwen\n");
    else
    	printf("this number is not a huiwen\n");
    }
    else
    	printf("input error!");

}
*/

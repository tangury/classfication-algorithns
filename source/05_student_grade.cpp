/***************************************************************************************************
 ****利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分
 *******************************以下的用C表示*******************************************************
 ***************************（a>b) ? a : b 这是条件运算的基本例子*************************************
 */
/*

#include <stdio.h>
#include <stdlib.h>

main()
{
	int score;
	char grade;
	printf("please input a score\n");
	scanf("%d", &score);
	grade = (score >= 90 ? 'A' : score >= 60 ? 'B' : 'C');
	printf("%d belongs to %c", score, grade);
}
*/

/***************************************************************************************************
 **************************************学习static定义静态变量的用法***********************************
 ***************************************************************************************************
 */

/*
#include <stdio.h>
#include <stdlib.h>
void varfunc();

void main()
{
	int i;
	for(i=0; i<3; i++)
		varfunc();
}
void varfunc()
{
	int var = 0;
	static int static_var = 0;
	printf(" var equal: %d \n", var);
	printf(" static var equal: %d \n", static_var);
	printf("\n");
	var++;
	static_var++;

}
*/

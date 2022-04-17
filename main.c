//////////跨函数使用内存///////////////////////
 
# include <stdio.h>
void f(int ** );

int main(void)
{
	int * p;
	f(&p); 
	printf("%d\n", *p); //*p就是i，本语句语法没问题，但逻辑上有问题 
				   		//i的内存在执行完调用函数语句后就被释放了，p可以保存i的地址，但*p读取不了i的值，即访问不了储存i的空间 
	return 0;
 } 
 
 void f(int ** q)
 {
 	int i = 5;
 	*q = &i; //*q就是p 
 }

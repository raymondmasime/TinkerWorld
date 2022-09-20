#include <stdio.h>
//int data; //Stored in uninitialized area
//int data1; //Stored in uninitialized area
int data1 = 0; //Stored in initialized area

int main(void)
{
	//static int data; //Stored in uninitialized area
	//static int data = 10; //Stored in initialized area
	//static int data2; //Stored in uninitialized area
	static int data2 = 0; //Stored in initialized area

	return 0;
}

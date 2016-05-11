#using "ComSharp.dll"
using namespace ComSharp;

#include<stdio.h>

int main()
{
	MyClass^ my = gcnew MyClass;
	my->Write("123");
	getchar();
	return 0;
}
#include<stdio.h>
#include<objbase.h>
#import "..\..\ComSharp\ComSharp\bin\Release\ComSharp.tlb"
using namespace ComSharp;
int main()
{
	CoInitialize(NULL);
	IMyInterfacePtr my(__uuidof(MyClass));
	my->Write("123");
	CoUninitialize();
	getchar();
}
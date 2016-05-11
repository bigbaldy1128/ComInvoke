#using "..\..\ComSharp\ComSharp\bin\Release\ComSharp.dll"
using namespace System;
using namespace System::Runtime::InteropServices;
using namespace ComSharp;
__declspec(dllexport) void WriteLine(char* str)
{
	MyClass^ my = gcnew MyClass;
	auto s= Marshal::PtrToStringAnsi((IntPtr)str);
	my->Write(s);
}
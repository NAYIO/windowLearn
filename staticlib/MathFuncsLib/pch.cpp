// pch.cpp: 与预编译标头对应的源文件

#include "pch.h"
// 当使用预编译的头时，需要使用此源文件，编译才能成功。
#include "MathFuncsLib.h"

#include <stdexcept>

using namespace std;

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		return a / b;
	}
}
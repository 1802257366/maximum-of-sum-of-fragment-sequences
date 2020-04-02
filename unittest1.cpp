#include "stdafx.h"
#include "CppUnitTest.h"
#include "E:\\作业\\软件工程第二次作业\\软件工程第二次作业\\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern void Return_Max(int &Max, int *arr, int count);

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int true_value = 20;
			int arr[] = { -2,11,-4,13,-5,-2 };
			int test_value;
			Return_Max(test_value, arr, 6);
			Assert::AreEqual(true_value,test_value);
		}
		TEST_METHOD(TestMethod2)
		{
			int true_value = 20;
			int arr[] = { 20 };
			int test_value;
			Return_Max(test_value, arr, 1);
			Assert::AreEqual(true_value, test_value);
		}
		TEST_METHOD(TestMethod3)
		{
			int true_value = 0;
			int arr[] = { -2,-2,-2,-2 };
			int test_value;
			Return_Max(test_value, arr, 4);
			Assert::AreEqual(true_value, test_value);
		}
		TEST_METHOD(TestMethod4)
		{
			int true_value = 4;
			int arr[] = { -1,2,-3,4 };
			int test_value;
			Return_Max(test_value, arr, 4);
			Assert::AreEqual(true_value, test_value);
		}
	};
}

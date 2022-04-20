#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project3.3(D)\Project3.3(D)\Car.h"
#include "D:\Study\ООП\Project3.3(D)\Project3.3(D)\Car.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			double f = 22;
			f = c.Change1();
			Assert::AreEqual(c.Change1(), f);
		}
	};
}

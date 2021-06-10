#include "pch.h"
#include "CppUnitTest.h"
#include "../Units/Person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Person testPerson{ "Harold" };
			auto result = testPerson.getName();
			Assert::AreEqual("Harold", result.c_str());
		}

		TEST_METHOD(TestMethod2)
		{
			Person testPerson{ "Harold" };
			auto result = testPerson.sum(7);
			Assert::AreEqual(result, 28);
		}
	};
}

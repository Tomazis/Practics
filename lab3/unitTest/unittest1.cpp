#include "stdafx.h"
#include "CppUnitTest.h"
#include "test_function.h"
; using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool ok = Sequence(4, 3, std::vector<int>{2, 3, 0, 2});
			Assert::AreEqual(ok, true);
		}
		TEST_METHOD(TestMethod2)
		{
			bool ok = Sequence(4, 5, std::vector<int>{1, 0, 5, 3});
			Assert::AreEqual(ok, false);
		}
		TEST_METHOD(TestMethod3)
		{
			try {
				bool ok = Sequence(-4, -5, std::vector<int>{1, 0, 5, 3});
			}
			catch(std::out_of_range ex){

			}
		}
		TEST_METHOD(TestMethod4)
		{
			try {
				bool ok = Sequence(9999999999, 99999999, std::vector<int>{1, 0, 5, 3});
			}
			catch (std::out_of_range ex) {

			}
		}
		TEST_METHOD(TestMethod5)
		{
			try {
				bool ok = Sequence(2, 5, std::vector<int>{1, 0, 5, 3});
			}
			catch (std::out_of_range ex) {

			}
		}
		TEST_METHOD(TestMethod6)
		{
			try {
				bool ok = Sequence(4, 5, std::vector<int>{-11, 0, 5, 3});
			}
			catch (std::out_of_range ex) {

			}
		}
	};
}
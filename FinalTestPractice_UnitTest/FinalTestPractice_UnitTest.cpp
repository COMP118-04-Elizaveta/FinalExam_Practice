#include "pch.h"
#include "CppUnitTest.h"
#include "../FinalExam_Practice.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FinalTestPracticeUnitTest
{
	TEST_CLASS(FinalTestPracticeUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethodSumOfRange)
		{
			//Arrange
			const int start = 0;
			const int end = 10;
			const int size = 10;
			const double array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
			double result;

			//Act
			result = sumOfRange(array, start, end, size);

			//Assert
			Assert::AreEqual(result, 45.0);
		}
	};
}

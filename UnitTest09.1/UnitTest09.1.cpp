#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_09.1/dod.h"
#include "../Lab_09.1/sum.h"
#include "../Lab_09.1/var.h"
#include "../Lab_09.1/dod.cpp"
#include "../Lab_09.1/sum.cpp"
#include "../Lab_09.1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

namespace UnitTest091
{
	TEST_CLASS(UnitTest091)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Встановлюємо значення для тесту
			x = 2.0;          // Значення x для перевірки
			e = 1e-6;         // Точність обчислень
			x_p = x_k = x;    // Початкове і кінцеве значення x (щоб обчислювати тільки одне значення)

			// Очікуване значення функції log(x)
			double expectedValue = log(x);

			// Виконуємо функцію sum(), яка обчислює суму ряду
			sum();

			// Розраховане значення буде в змінній s
			double actualValue = 2 * s;  // Домножуємо на 2, оскільки s = 1/2 логарифма

			// Допустима похибка
			double tolerance = 1e-6;

			// Перевіряємо, чи розраховане значення наближене до очікуваного
			Assert::AreEqual(expectedValue, actualValue, tolerance, L"Розраховане значення не відповідає очікуваному значенню логарифма.");
		}
	};
}

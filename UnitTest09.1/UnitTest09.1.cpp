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
			// ������������ �������� ��� �����
			x = 2.0;          // �������� x ��� ��������
			e = 1e-6;         // ������� ���������
			x_p = x_k = x;    // ��������� � ������ �������� x (��� ����������� ����� ���� ��������)

			// ��������� �������� ������� log(x)
			double expectedValue = log(x);

			// �������� ������� sum(), ��� �������� ���� ����
			sum();

			// ����������� �������� ���� � ����� s
			double actualValue = 2 * s;  // ��������� �� 2, ������� s = 1/2 ���������

			// ��������� �������
			double tolerance = 1e-6;

			// ����������, �� ����������� �������� ��������� �� �����������
			Assert::AreEqual(expectedValue, actualValue, tolerance, L"����������� �������� �� ������� ����������� �������� ���������.");
		}
	};
}

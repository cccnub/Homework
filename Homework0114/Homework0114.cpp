// Homework0114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


void ToUpper(const char* _Left, char* _Right)
{
	int Count = 0;

	for (int i = 0; i < 100; i += 1)
	{

		if (0 != _Left[i])
		{
         	if ('a' <= _Left[Count] && 'z' >= _Left[Count])
			{
				_Right[i] = _Left[i] - ('a' - 'A');


			}

			else
			{

				return;
			}

		}
	}
}

int main()
{
	char Text[100];

	ToUpper("12abCcEee", Text);
	//      "12ABCCEEE"
	printf_s(Text);
}


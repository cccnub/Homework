// Homework0114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


void ToUpper(const char* _Left, char* _Right)
{
	int nSize = strlen(_Left);

	for (int i = 0; i < nSize; i++)
	{
 		if ('\0' != _Left[i])
		{
			if ('a' <= _Left[i] && 'z' >= _Left[i])
			{
				_Right[i] = _Left[i] - ('a' - 'A');
			}
			else
				_Right[i] = _Left[i];
		}
	}
}

void ToUpper(const char* _Left)
{
	int rt = 0;
}

int main()
{
	char Text[100] = {};

	ToUpper("12abCcEee", Text);
	ToUpper("12abCcEee");
	//      "12ABCCEEE"
	printf_s(Text);
}


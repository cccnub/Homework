// 오버로딩.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



int Func(int* _Number0)
{
	*_Number0 = 100;

	return 1;
}


int main()
{
	int value = 10;
	Func(&value);

	int a = 0;

	
}

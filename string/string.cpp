// string.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int Arrint[10] = {0,1,2,3,4,5,6,7,8,9};
	char ArrChar[5] = { 'a','b','c','d',};
	//문자열,초기화방법이 하나 더 있음.
	//마지막에 0 을 넣지 않으면 괋뚜랑ㄴ뤼망루이ㅏㄹ 가 나옴
	
	
	printf_s(ArrChar);
	//내가 넣은 글자가 나오게 하는 함수 

	//상수 문자열
	//"Test" 데이터 영역에 존재한다, 중요하진 않음. 
	"Test";
	//우측에 "Test"; 를 넣어서 초기화 할 수 있다.
	//마지막에 0이 자동으로 붙기때문에 5글자의 배열이 되는것

	

	putchar('a');
	//글자하나 띄워주는 함수, 그 이상도 그이하도 아님 

	int i = 0;

	while (0 != ArrChar[i])
	{
		putchar(ArrChar[i]);

		i += 1;
		
	}
		

	
	
}


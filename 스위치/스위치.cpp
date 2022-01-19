// 스위치.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //문자형

    char Input = 'a';

	switch ('a') //인자안에 있는 내용과 비교를 하겠다.
		         //문자형만 확인할 수 있음
	{            //케이스 확인 이후, 종료가 필요하다면 브레이크를 걸어줘야 한다. 
	case'a':     //브레이크를 걸지 않을 경우 아래 디폴트 값까지 진행 될 수 있음.
	{            //지역변수를 선언할 수 없다. 
		int a = 0;
	}
	break;
	default:      //디폴트 = else 와 동일
	{
		int a = 0;
	}
		break;
	}


	{
		char A = 'a';
	    char B = 'b';

		switch ('a')
		{
		case'b':
		case'A':
		{
			int A = 0;
			break;
		}
		default:
		{
			int A = 200;
		}
			break;
		}

	}



}

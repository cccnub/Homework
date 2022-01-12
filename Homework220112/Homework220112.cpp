// Homework220112.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int Arr[10] = {};

	//홀수배열

	int Arr2[10] = {};

    //짝수배열

	

   
	int Index = 0; 
    
	int B = 1;
	
	//반복문, A가 10보다 커질경우 진행되지 않음
	
	while (Index<10)
	{

		Arr[Index] = B;

		Arr2[Index] = B + 1;
	
	
		Index += 1;
		// 배열 index + 1

		B += 2;
		// 값에 + 1 

		
	}

		
	

		

	
}


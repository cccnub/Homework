// codep2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


//축약연산자

#include <iostream>

int main()
{
    int A = 10;
    int B = 2;

    A = A - B;
    //위와 동일하지만, 귀찮아서 줄인 문법을 축약 연산자 라고 하며 그 꼴은
    A -= B;
    //가 되며, 동일한 문법이 된다. 
    //비교연산자는 축약연산자가 존재하지 않음
    
}


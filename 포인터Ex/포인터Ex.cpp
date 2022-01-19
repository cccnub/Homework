// 포인터Ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //포인터의 첫번째 특징
    //컴파일러가 문법적으로 포인터는 특수하게 체크 하고 있다.

    //명시적형변환

    int Value = 0;

    int* Ptr = &Value;

    __int64 Address = (__int64)Ptr;
    
}


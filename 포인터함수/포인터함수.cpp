// 포인터함수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int Heal(int _Hp)
{
    _Hp += 10;

    return _Hp;
}
//int로 지역함수를 만들었을 경우 결과값으 반환해야 메인에 반영된다.

int main()
{
    int playerHp = 0;

    playerHp = Heal(playerHp);
    //항상 값을 받아서 확인할 것
}


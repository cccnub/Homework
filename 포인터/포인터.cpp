

#include <iostream>

int main()
{
	int J = 100;
	// ~ 번지에 100의 값을 넣어라
	int* H = &J;
	// ~번지에 ~번지를 넣어라.
	//H 는 J의 주소값과, 값을 가지게 된다.
	// 여기서 J의 값을 주소값을 받은 H로 변경이 가능하다.

	*H = 200;
	
	int Ptrsize = sizeof(H);

	int PlayerHp = 100;
	
	int* PtrHp = &PlayerHp;

	int PlayerMp = 200;

	PtrHp = &PlayerMp;

	*PtrHp = 150;

	int b = 0;

	
	
}


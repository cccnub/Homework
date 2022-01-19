﻿// class-member.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 내가 뭘 만들고자 하는지, 무엇을 하려고 하는지 표현하지 못하는 사람은 답이 없다.
// ex) 그냥 안된다. << 절대 안됨
// 원활한 커뮤니케이션이 필요하다. 

// 1차 개념정리 

// 실체가 있다라는 말은 주소가 있다, 주소를 시작으로 한 메모리가 있는 것
// int => 4바이트 정수형
// int a = 0; = > 실체화 한것 , a가 실체화 되면
// 주소를 시작으로한 메모리가 생기게 되는데, 이걸 실체라고 부른다. 

//전역의 개념
//그 누구에게도 속하지 않은 변수와 함수들이 존재하는 공간
//{ } 이사이에 들어있지 않으면 전역이다. 
// 전역변수 , 전역 함수, 
// 사용자 정의 자료형 일체(class struct enum union) 설계도
// class > 설계도, 실체가 아님 / 전역객체
// 실체가 없는 것들이다. / int bool char 같은 자료형을 포함 
// 클래스를 통해서 만들어진 객체 

//지역의 개념
//함수의 {} 사이에 들어있으면 지역이 붙으며, 지역변수가 된다. 지역함수라는 건 존재하지 않음
// 지역변수
// 지역객체 (사용자 정의 자료형을 통해서 만들어진 메모리화 된 실체들을 부르는말)

// 멤버의 개념
// class 이름
// { } 안에 들어가 있으면 멤버라고 부른다. (사용자 정의 자료형 일체 안에 들어가있으면)

class blade
{
	//변수를 선언할 수 있으며 멤버변수 라고 한다. 
	//멤버변수를 상태라고 부른다.
	
	//내가 표현하려고 하는 개념의 상태를 표현한다.
	int Hp = 100;
	int Mp = 100; 
	

	// 플레이어는 맞을 수 있다. 라는 개념이 생긴 것 
	// 내가 표현하려는 개념의 행동을 표현한다. 
	void Damage(int _Damage)
	{
		Hp -= _Damage;
		
	}

	void Skill(int* _Skill)
	{
		Mp -= 10; 
	}
};


int main()
{
	blade Blade = blade();

	

	


	
}

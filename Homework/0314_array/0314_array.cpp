#include <iostream>

int main()
{
	{
		// 어떤 자료형을 봤다면 추가적인 문법으로 모두 다 배열이 될 수 있음
		int value = 10;

		// 배열은 괄호 안에 아무것도 안넣으면 자동으로 전부 다 0으로 초기화됨
		int Arrvalue[5] = {}; // Arrvalue : {0, 0, 0, 0, 0}
		// 맨 앞만 1, 나머지 다 0
		int Arrvalue2[5] = { 1, }; // Arrvalue2 : {1, 0, 0, 0, 0}

		// bool 배열 쓸때는 false, true로 넣기
		bool Arrvalue3[5] = { false, true, }; // Arrvalue3 : {false, true, false, false, false};

		// 문자의 배열은 축약형 표현 사용할 수 X 문법적으로 정해짐
	}
	{
		char Arrvalue[5] = { 'a', 'b', 'c' };
		char Arrvalue2[5] = "abc";
	}
}

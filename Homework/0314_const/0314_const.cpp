#include <iostream>

int main()
{
    int arrsize = 20;
    // 함수의 스택에서의 메모리 크기는 컴파일시 고정되어야 함
    // C++의 함수의 실행흐름을 만들기 위한 스택크기는 exe 파일에 이미 다 정의되어 있어야 한다.
    // 변수 : 바뀔 수 있는값 -> 배열에 넣을 수 없음 -> int value[arrsize] = {}; 안됨

    
    const int arrsize2 = 20;
    // 특정 자료형 앞에 const 키워드를 붙히면 그 메모리의 비트적 상수화를 시킴(어디에도 붙힐 수 있음)
    // 비트적 상수화 : 비트 하나도 바꿀수 없음(상수기 때문에)
    // 이미 arrsize2를 const 붙혔기 때문에 arrsize2 = 30; 처럼 다른값넣는 코드 불가
    int value[arrsize2] = {}; // 상수화됐기 때문에 배열안에 넣을 수 있음

}

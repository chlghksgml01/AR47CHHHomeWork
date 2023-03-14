#include <iostream>

// inline : 함수 안의 내용을 main 안에 복붙 -> 스택영역에 Test 자리 안만들어도 됨 -> 최적화할 수 있다면 해달라는 코드
// 컴파일러 판단에 따라 안될수도 있음
inline void Test()
{
    printf_s("Function");
}
int main()
{
    Test();
}
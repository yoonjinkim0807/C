#include <math.h>
#include <stdio.h>
int main( void )
{
double pi = 3.1415926535; // 파이값을 저장하는 지역변수이자 상수값,[변수명 pi에 원주율 파이를 저장] 파이값                                이 소수이기 때문에 더블 변수형으로 저장
double x, y;
x = pi / 2; // pi값을 2로 나누면 90도로 표현할수 있음 x=90도
y = sin( x ); //y에 sin 90도 값을 저장
printf( "sin( %f ) = %f\n", x, y ); //sin90도는 1이라고 출력하게 됨
y = cos( x ); //y에 cos 90도 값을 저장
printf( "cos( %f ) = %f\n", x, y ); //cos90도는 0이라고 출력하게 됨
} 

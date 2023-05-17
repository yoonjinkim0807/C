#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //콘솔입력 및 출력에 사용되는 라이브러리로 키보드에서 문자를 읽어내는데 사용하는 라이브러리이다.
#include <time.h>

void disp_car(int car_number, int distance) 
{
    int i;

    printf("CAR #%d:", car_number);

    for( i = 0; i < distance/10; i++ )
    {
        printf("*");
    }
    printf("\n"); //각각 자동차의 거리를 줄을 띄어 구분할 수 있도록한다.
}
/*각각 자동차의 번호와 거리를 매개변수에 받아 랜덤으로 발생된 distance(거리)값 만큼 *을 출력하는 함수이다.*/
int main(void)
{ 
    int i;
    int car1_dist=0, car2_dist=0; //각각 자동차의 거리를 담는 변수이다.
    srand( (unsigned)time( NULL ) );

        for( i = 0; i < 6; i++ ) //총 6번의 경기를 할 수 있록 반복하는 문장
        {
        car1_dist += rand() % 100; 
        car2_dist += rand() % 100;
        //난수를 발생시켜 각각 해당하는 변수에 담아 거리값을 랜덤으로 담는다 또한 %100을 사용하여 랜덤으로 발생하는 값을 100까지 제한한다.
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        //각각해당하는 자동차 번호와 랜덤거리값을 disp_car의 매개변수에 담고 *을 출력할수 있도록 호출한다.
        printf("---------------------\n");
        _getch(); // 키를 입력하기 전까지 대기상태를 유지할수 있도록 하며 키가 입력되면 반복문에 따라 다음 경기 결과를 출력할 수 있도록 한다.
        }

return 0;
}
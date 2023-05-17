#include <stdio.h>
#include <math.h>
#define PI 3.141592 //함수에서 벗어난 지역변수 이며 기호상수이다. 삼각함수를 위한 파이값을 담고 있다.
double rad(double degree)
{
return PI * degree / 180.0; //삼각함수에서 사용되는 radian값을 구하기 위한 식이다.
}
void drawbar(int height)
{
    for (int i = 0; i < height; i++) // sin의 각도의 따라 *의 개수가 달라지며 sin그래프 형태에 따라 증감이 이루어진다.
    {
        printf("*");
    }
    printf("\n");
}
int main(void)
{
    int degree, x, y;
        for (degree = 0; degree <= 90; degree += 10) //각도가 90도가 될때까지 반복되며 각도를 10씩 증가한다.
        {
            y = (int)(60 * sin(rad((double)degree)) + 0.5);
            /*drawbar에서 i가 1씩증가하게되고 *의 개수가 sin그래프에 맞추어
            개수가 바뀌어야하므로 60을 곱하고 반올림을 위한 0.5를 더한다.
            (sin90도는 1이므로 0.5를 더하지않으면 그래프가 생성되지 않고
            sin값이 증가하는 i값에 미치지 않을경우 *은 반복하여 1개씩만 나오게된다.)
            이때 60이라는 값은 그래프의 높이를 정한다.*/
            drawbar(y);// y값을 height에 담아 함수 drawbar를 호출하여 *을 출력한다.
        }
return 0;
}
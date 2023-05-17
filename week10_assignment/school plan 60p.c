#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void); /*if에 호출되는 함수값을 위해 선언되어있으며 VS code에서는 main보다 먼저 선언이 되어있지않아도 동작은 되었지만 
if의 coin_toss호출부분에서 오류발생을 야기하였고, 밑에있는 coin_toss함수부분을 main함수 위에 작성하면 오류없이 동작된다.*/

int main(void)
{
    int toss; //난수를 발생하는 횟수를 정하는데 사용하는 변수
    int heads = 0; //앞면의 카운트를 담는데 사용하는 변수
    int tails = 0; //뒷면의 카운트를 담는데 사용하는 변수
    srand((unsigned)time(NULL)); //시간적 변화에 따른 난수를 발생하는 함수이며, 난수에 따른 앞면과 뒷면을 랜덤으로 값을 나타낼 수 있도록 해준다

        for (toss = 0; toss < 100; toss++) 
        {
            if(coin_toss() == 1) //coin_toss함수에서 나머지가 1일 경우 heads의 값을 1증가시켜 앞면의 카운트를 1씩증가 한다.
            {
            heads++;
            }
            else // 위 if문에 포함되지 않는 나머지값으로 수해되며 tails의 값을 1증가시켜 뒷면의 카운트를 1증가한다.
            {
            tails++;
            }
        }

    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tails);
    /*난수로 인해 랜덤으로 100번 생성된 값이 2로 나누어져 나머지를 구한뒤 
    1에 해당하는경우와 그외의 값으로 구분되어 증가된 앞뒤면의 카운트(결과값)을 출력한다. */

    return 0;
}


int coin_toss( void )
{
    int head = rand() % 2; //위 코드 중 난수를 발행하는 함수의 값을 불러와 2로 나누어 나머지를 구하며, if문에 호출되는 값으로 사용된다

    return head;//난수를 2로나눈 나머지를 coin_toss에 정수형으로 반환한다.
}
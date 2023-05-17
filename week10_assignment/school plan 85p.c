#include <stdio.h>
#include <math.h>
int menu(void)
{
    int n;

        printf("1.팩토리얼\n");
        printf("2.싸인\n");
        printf("3.로그(base 10)\n");
        printf("4.제곱근\n");
        printf("5.순열(nPr)\n");
        printf("6.조합(nCr)\n");
        printf("7.종료\n");
        printf("선택해주세요: ");
        scanf("%d", &n);
    return n;
}

void factorial() //팩토리얼을 구하는 함수부분으로 menu함수의 1번에 해당하며 n까지 증가하는 i값을 result에 곱하여 대입한다.
{
    long long n, result=1,i; //팩토리얼은 값을 순차적으로 곱하여 값이 증가하므로 결과값이 상당히 커질 수 있으므로 long long을 사용
        printf("정수를 입력하시오: ");
        scanf("%lld", &n);

            for (i = 1; i <= n; i++)
            {
                result = result *i;
            }
        printf("결과 = %lld\n\n", result);}
void sine() //삼각함수 sin값을 구하는 함수부분으로 menu함수의 2번에 해당하며 a값을 입력하면 헤더파일<math.h>에서 불러온 sin(a)에 대입되어 결과값을 출력한다.
{
    double a, result;
        printf("각도를 입력하시오: ");
        scanf("%lf", &a);
        result = sin(a);
        printf("결과 = %lf\n\n", result);
}

void logBase10() //로그함수 중 10의 지수값을 구하는 함수부분으로 menu함수 3번에 해당한다
{
    double a, result;
        printf("실수값을 입력하시오: ");
        scanf("%lf", &a);
        if (a <= 0.0) //a는 로그함수의 밑에 해당되는 부분으로 0이하의 값을 입력하게되면 값을 계산할 수 없게 된다 
        {
         printf("오류\n");
        }
        else { //a값이 0이 초과되는 부분으로 로그함수의 밑이 되어 지수값을 구할 수 있다.
        result = log10(a);
        printf("결과 = %lf\n\n", result);
        }
}

int main(void)
{
    while (1) {
        switch (menu()) //menu 함수가 호출되어 입력받은 n값에따라 case에 해당하는 함수를 호출한다.
        {
            case 1: factorial();
                    break;
            case 2: sine();
                break;
            case 3:logBase10();
                break;
            case 7:printf("종료합니다.\n");
                return 0;
            default:printf("잘못된 선택입니다.\n");
            /*n값이 4,5,6그리고 8이후의 값을 입력한경우 출력되며 함수 menu에 4,5,6은 없는 항목이라고 할수 있다*/
                break;
        }
}
}
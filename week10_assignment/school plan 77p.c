#include <stdio.h>
#include <time.h> 
int main(void)
{
time_t start, end; // time_t는 시간정보를 담는 데이터 형식으로 <time.h>헤더 파일에서 사용가능하다
start = time(NULL); //현재시간을 start에 담는다
printf("10초가 되면 아무 키나 누르세요\n");
while (1) { //키를 입력하기전까지 main함수가 종료되지 않고 시간이 흐를 수 있도록 무한반복한다.
if (getchar()) //아무 키를 입력하게되면 반목문을 종료한다.
break;
}
printf("종료되었습니다.\n");
end = time(NULL); //시간이 경과된후 현재시간을 end에 담아 start부터 경과된 시간을 구하기 위해 사용된다.
printf("경과된 시간은 %ld 초입니다. \n", end - start); // time_t는 long과 같은 형태로 'lf'형식지정자를 사용할 수 있다.
return 0;
}

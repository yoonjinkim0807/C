#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
system("dir"); //현재 파일의 디렉토리를 나열하여 보여준다. 
printf("아무 키나 치세요\n");
_getch(); // 키를 입력받을 때까지 대기상태를 유지한다.
system("cls"); //콘솔의 명령어들을 지워주는 함수이다.
return 0;
}
//위 코드는 윈도우에 cmd와 같은 역할을 한다.
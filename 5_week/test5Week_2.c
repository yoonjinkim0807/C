#include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 입력하시오:");

    ch = getchar();
    if(ch >= 65 && ch <= 90) //아스키코드 A부터 Z까지 범위로 함
    {
        printf("%c는 대문자 입니다.\n",ch);
    }
    else if(ch >= 97 && ch <= 122) //아스키코드 a부터 z까지 범위로 함
    {
        printf("%c는 소문자 입니다.\n",ch); 
    }

    else if(ch>= 48 && ch<=57) // 아스키코드로 0부터 9까지 범위로 함
    {
        printf("%c는 숫자입니다.\n",ch);
    }
    else
    {
        printf("%c는 기타문자 입니다.\n",ch);
    }

}
2주차 교안 84페이지
#include <stdio.h>

int main(void)
{
    int x=20, y=10 , re=0;

    printf("두수의 합: %d\n",re=x+y);
    printf("두수의 차%d\n",re=x-y);
    printf("두수의 곱%d\n",re=x*y);
    printf("두수의 몫%d",re=x/y);

    return 0;
}
==========================================================
2주차 교안 97페이지
#include <stdio.h>

int main(void)
{
    int x,y;

    printf("첫번째 숫자를 입력하세요 :");
    scanf("%d",&x);
    printf("두번째 숫자를 입력하세요 :");
    scanf("%d",&y);

    printf("두수의 합: %d",x+y);

    return 0;
}
==========================================================
2주차 교안 99페이지
#include <stdio.h>

int main(void)
{
    double x;

    printf("반지름을 입력하세요:");
    scanf("%lf",&x);
    x=x*x*3.14;
    printf("원의 면적: %lf",x);
}
}
==========================================================
2주차 교안 101페이지
#include <stdio.h>

int main(void)
{
    double chan,usd=0; //chan 환율, usd 달러
    int won;  //원화
    printf("환율을 입력하시오:");
    scanf("%lf",&chan);
    printf("원화 금액을 입력하시오 :");
    scanf("%d",&won);
    
    usd=won/chan;
    
    printf("원화 %d원은 %lf달러 입니다.",won,usd);
    
    return 0;
}

==========================================================
2주차 교안 103페이지
#include <stdio.h>

int main(void)
{
  double x,y,z,sum=0,avg=0;
  
  printf("3개의 실수를 입력하시오");
  scanf("%lf %lf %lf",&x,&y,&z);
  sum=x+y+z;
  avg=sum/3;
  
  printf("합계=%lf",sum);
  printf("평균=%lf",avg);
  
  return 0;
}
==========================================================
2주차 교안 105페이지 mini project
#include <stdio.h>

int main(void)
{
	double w,h,area=0,perimeter=0;
	
	scanf("%lf %lf,&w,&h);
	area= w*h;
	perimeter= 2*(w+h);
	printf("사각형의 넓이: %lf",area);
	printf("사각형의 둘레: %lf",perimeter);
	
	return 0;
}
==========================================================
3주차 교안 134페이지 mini project
#include <stdio.h>

int main(void)
{
	duoble l=300000, m=149600000; // l 빛의 속도, m 태양과 지구와의 거리
	duoble x=0;	//도달 시간
	
	x=l/m;
	printf("빛의 속도는 %lfkm\n",l);
	printf("태양과 지구와의 거리 %lfkm\n",m);
	printf("도달 시간은 %lf초",x);
	
	return 0;
}
==========================================================
4주차 교안 42페이지 lab
#include <stdio.h>

int main(void)
{
    int x,y,z,c1000,o500,b100;
    printf("물건값을 입력하시오:");
    scanf("%d",&x);
    printf("투입한 금액을 입력하시오:");
    scanf("%d",&y);

    z = y-x;
    c1000 = z/1000;
    z = z%1000;
    o500 = z/500;
    b100 = z/100;

    printf("천원권 %d장\n",c1000);
    printf("오백원 %d개\n",o500);
    printf("백원 %d개",b100);
    return 0;
}
==========================================================
4주차 교안 76페이지 lab
#include <stdio.h>

int main(void)
{
	int x, result=0;
	
	printf("연도를 입력하시오:");
	scanf("%d",&x);
	
	result=((x%4==0)&&(x%100!=)||(x%400==0));
	printf("result=d%",result);
	return 0;
}


==========================================================
4주차 교안 122페이지 mini project
#inclue <stdio.h>

int main(void)
{
	int x, y=0;
	
	printf("화씨온도를 입력하세요:");
	scanf("%d",&x);
	
	y=5/9(x-32);
	printf("섭씨온도는 %d입니다.",y);
	
	return 0;
}
==========================================================
5차 교안 64페이지 lab
#include <stdio.h>
#include <math.h>

int main(void)
{
	duoble a,b,c,dis;
	
	printf("계수 a,계수b,계수 c를 차례대로 입력하시오:");
	scanf("%lf %lf %lf",&a,&b,&c);

	if(a==0)
	{
		printf("근은 %d",-c/b)
	}
	else
	{
		dis=b*b-4.0*a*c;
		if(dis >=0)
		{
			printf("방정식의 근은 &f입니다.\n",(-b+sqrt(dis) / (2.0*a));
			printf("방정식의 근은 &f입니다.\n",(-b-sqrt(dis) / (2.0*a));
		}
		else
		{
			printf("실근이 존재하지 않습니다.");
		}
	}
	return 0;
}

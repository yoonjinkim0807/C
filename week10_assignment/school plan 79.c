#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main(void)
{
double height, distance, tree_height, degrees, radians;
printf("나무와의 길이(단위는 미터): ");
scanf("%lf", &distance);
printf("측정자의 키(단위는 미터): ");
scanf("%lf", &height);
printf("각도(단위는 도): ");
scanf("%lf", &degrees);
radians = degrees * (3.141592 / 180.0); 
/*라디안 또는 래디안은 삼각함수 sin,cos,tan에서 사용하는 단위로 
각도*파이값/180의 식을 사용하여 구할수 있다.*/ 
tree_height = tan(radians) * distance + height;
/*각도와 거리를 알면 나무의 높이를 삼각함수중 tan을 사용하여
나무의 높이를 알수 있다 또한 측정자의 눈높에 맞추어 키를 더해주면 나무의
정확한 높이를 알 수있다.*/
printf("나무의 높이(단위는 미터): %lf \n", tree_height);
return 0;
}
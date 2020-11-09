#include <stdio.h>

int main()
{
int age;
char blood_type;
printf("몸무게를 입력하세요 : ");
scanf("%d", &age);
printf("키는? : ");
scanf("%c", blood_type);
printf("몸무 : %d, 키 : %c", age,blood_type);
return 0;

}
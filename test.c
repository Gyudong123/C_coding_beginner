#include <stdio.h>

int main()
{
    unsigned num,day,hour,min,sec;
    printf("�� ����� ��� �ͽ��ϱ�? : ");
    scanf("%u",&num);
    day = (num ) * 365;
    hour = day * 24;
    min = hour * 60;
    sec = min * 60;
    printf("%d,%u,%u,%u",day,hour,min,sec);


    return 0;

}
#include <stdio.h>

void input_score(int *, int *, int *);
int total(int, int, int);
double grade(int);

char grd;
int main()
{
    int kor, eng, mat, tot;
    double avg;

    input_score(&kor, &eng, &mat);
    tot = total(kor, eng, mat);
    avg = grade(tot);
    printf("평균 : %.1lf, 학점 : %c\n", avg, grd);
    return 0;
}
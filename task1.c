//Посчитать объем конуса Македонская Валерия УП-202
#include<stdio.h>
#include<math.h>

int main()
{
    float V;
    float h;
    float R;
    int n;
    printf("Сколько раз необходимо посчитать объем конуса? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Введите высоту конуса h: ");
        scanf("%f", &h);

        printf("Введите радиус конуса R: ");
        scanf("%f", &R);

        V = 1.0/3.0*M_PI*pow(R,2)*h;
        printf("Объем конуса равняется %f\n", V);
    }
    return 0;
}

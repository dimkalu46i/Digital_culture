#include <stdio.h>
#include <math.h>

float Z1(int a)
{
    return ((sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * sin(2 * a) * sin(2 * a)));
}

float Z2(int a)
{
    return (2 * sin(a));
}

int main()
{
    int a;
    scanf("%d", &a);

    printf("Z1 = %.2f\n", Z1(a));
    printf("Z2 = %.2f\n", Z2(a));
    cout<<"Без ошибок!<<endl;//Забыл словесно подтвердить успешное выполнение программы!
    return 0;
}

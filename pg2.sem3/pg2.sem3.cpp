#include <iostream>

typedef struct {
    char name[10];
    float a, b, c;
    double volume, perimeter;
} object;

void Read(object x) {
    printf("Введите параметры объекта:\nДлина = ");
    scanf_s("%f", &x.a);
    printf("Ширина = ");
    scanf_s("%f", &x.b);
    printf("Высота = ");
    scanf_s("%f", &x.c);
    printf("Название = ");
    scanf("%s", &x.name);
    printf("\n**************************");
}
void Display(object x) {
    printf("\nПараметры объекта\nДлина = %f\nШирина = %f\nВысота = %f", x.a, x.b, x.c);
    printf("\n**************************");
}

void Init(float lenght, float width, float height, object x) {
    x.a = lenght;
    x.b = width;
    x.c = height;
}

void calcvolume(object x) {
    x.volume = x.a * x.b * x.c;
}

void calcperim(object x) {
    x.perimeter = 2 * (x.a * x.b + x.a * x.c + x.b * x.c);
}

void DisplayFinal(object x) {
    printf("\nПараметры объекта %s\nДлина = %f\nШирина = %f\nВысота = %f\nОбъем = %f\nПериметр = %f", x.name, x.a, x.b, x.c, x.volume, x.perimeter);
    printf("\n**************************");
}

void compare(object x, object y) {
    if (x.volume == y.volume) {
        printf("\nФигуры одинакового объема");
        return;
    }
    if (x.volume > y.volume) {
        printf("\nОбъем первой фигуры больше");
    }
    if (x.volume < y.volume) {
        printf("\nОбъем второй фигуры больше");
    }
    printf("\n**************************");
}



int main()
{
    setlocale(LC_ALL, "Rus");
    
}

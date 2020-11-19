#include <iostream>
#include < stdio.h > 
#include <string.h>
#include <malloc.h>
#define value 100
struct object {
    bool deliver;
    float a, b, c;
    double volume, perimeter;
};

/*char* Read_String() {
    fflush(stdin);
    char* str = (char*)malloc(100);
    gets_s(str,10);
    return str;

}*/
void Read(struct object *x) {
    int deliv;
    printf("Введите параметры объекта:\nДлина = ");
    scanf_s("%f", &x->a);
    printf("Ширина = ");
    scanf_s("%f", &x->b);
    printf("Высота = ");
    scanf_s("%f", &x->c);
    do {
        printf("Доставлен?(1-да, 0-нет) - ");
        scanf_s("%d", &deliv);
    } while (deliv > 1 || deliv < 0);
    if (deliv) {
        x->deliver = true;
    }
    else x->deliver = false;
    printf("\n**************************");
}
void Display(struct object *x) {
    printf("\nПараметры объекта \nДлина = %f\nШирина = %f\nВысота = %f\n", x->a, x->b, x->c);
    if (x->deliver) {
        printf("\nОбъект доставлен");
    }
    else printf("\nОбъект не доставлен");
    printf("\n**************************");
}

void Init(float lenght, float width, float height,bool flag, struct object *x) {
    x->a = lenght;
    x->b = width;
    x->c = height;
    x->deliver = flag;
}

void calcvolume(object *x) {
    x->volume = x->a * x->b * x->c;
}

void calcperim(object *x) {
    x->perimeter = 2 * ((x->a) * (x->b) + (x->a) * (x->c) + (x->b) * (x->c));
}

void DisplayFinal(object *x) {
    printf("\nПараметры объекта \nДлина = %f\nШирина = %f\nВысота = %f\nОбъем = %lf\nПериметр = %lf", x->a, x->b, x->c, x->volume, x->perimeter);
    if (x->deliver) {
        printf("\nОбъект доставлен");
    }
    else printf("\nОбъект не доставлен");
    printf("\n**************************");
}

void compare(object *x, object *y) {
    if (x->volume == x->volume) {
        printf("\nФигуры одинакового объема");
        return;
    }
    if (x->volume > x->volume) {
        printf("\nОбъем первой фигуры больше");
    }
    if (x->volume < x->volume) {
        printf("\nОбъем второй фигуры больше");
    }
    printf("\n**************************");
}



int main()
{
    setlocale(LC_ALL, "Rus");
    struct object *obj1 = new object;
    struct object* obj2 = new object;
    obj1->a = 0;
    obj2->a = 0;
    printf("%f", obj1->a);
    Read(obj1);
    Init(14,17,22,true,obj2);
    //obj1->name = Read_String();
    Display(obj1);
    Display(obj2);
    calcvolume(obj1);
    calcvolume(obj2);
    calcperim(obj1);
    calcperim(obj2);
    compare(obj1,obj2);
    DisplayFinal(obj1);
    DisplayFinal(obj2);
    return 0;

    
}

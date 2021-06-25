/*Номер 1	
1.	Подсчитать число точек, находящихся внутри круга радиусом r с центром в начале координат; координаты заданы массивами X(10), Y(10).(В круге с радиусом 5)
2.	float radius, promezutok=0 – потому, что эти переменные могут быть дробными 
    int proverka, colvo=0 – первая переменная нужна для проверки максимального целочисленного значения координаты, а вторая – просто количество точек, то есть обе не могут быть дробными.*/
#include <iostream>
#include <stdio.h>
using namespace std;
void colvo(float radius)  -  //считает количество точек  
{
    float promezutok=0;
    int proverka,colvo=0;
   for(int i=1;i<radius;i++) {
        for(int j=1;j<radius;j++) {
            if((i*i+j*j)<(radius*radius)) {     //теорема пифагора
            colvo=colvo+1;                            //количество точек, не лежащих на осях координат
            } else {continue;}
        }
    }
    proverka=radius/1;       // последняя по индексу точка, лежащая на оси координат
    //cout << proverka << endl;
    promezutok=(proverka*2-1)*2-1+4;    - //количество точек, лежащих на осях координат 
    colvo=(colvo*4)+promezutok;              //общее количество точек, находящихся в кругу
    printf("Kolichestvo tochek v krugu takogo radiusa: %d",colvo);
}
void proverka_vvoda(float radius) {  //проверка введенных данных
    for(int i=0;i!=1;) {
        if (radius>=0 and radius<=5) {   //проверка на ввод числа
            i=1;
        } else {
            radius= 0 + rand() % 5;       //задание случайного радиуса (работает только при вводе буквы) 
            cout << "Povtorite vvod!Pri vvode bukvi radius budet sgenerirovan sluchaino" << endl;
            scanf("%f",&radius);
        }
    }
        cout << "Radius:" << radius << endl;
        colvo(radius);   //переход на функцию поиска количества точек
}
int main()
{
    float radius;
    cout << "VVEDITE Radius kruga ot 0 do 5!" << endl;
        scanf("%f",&radius);
    proverka_vvoda(radius);     //переход к функции проверки введенных данных
    return 0;
}

 
													 

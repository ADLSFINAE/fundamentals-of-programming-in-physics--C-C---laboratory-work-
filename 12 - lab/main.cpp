#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

/*
Разработать структуру «Окружность», окружность задается координатами ее
центра и радиусом. Написать функцию, которая вычисляет и возвращает площадь
круга. Написать функцию, которая вычисляет и возвращает длину окружности.
Написать функцию, которая вычисляет и возвращает длину стороны квадрата,
вписанного в окружность. Использовать данную структуру. Написать функции ввода
данных круга и вывода на дисплей. Написать программу, демонстрирующую работу
данных функций.*/

struct Circle{
    Circle(int x, int y, double radius){
        this->x = x;
        this->y = y;
        this->radius = radius;
    }

    double area_of_the_circle(){
        return pi * radius * radius;
    }
    double long_of_circle(){
        return pi * radius;
    };
    double long_of_side_square_in_the_circle(){
        double c = radius * 2;
        c *= c;
        return sqrt(c/2);
    }

    int x, y;
    double radius;
    const double pi = 3.14;
};

int main(){
	cout<<"Kozlov Alexander, RFZ-1"<<endl;
	cout<<"12 laboratory"<<endl;
    int type = 1;
    do{
    int x, y, radius;
    cout<<"Write x, y and radius of the circle: ";
    cin>>x>>y>>radius;
    cout<<endl;

    if(radius >= 0){
        Circle circle(x, y, radius);
        cout<<"Area of the circle: "<<circle.area_of_the_circle()<<endl;
        cout<<" Long of the circle: "<<circle.long_of_circle()<<endl;
        cout<<" Long of side square in the circle: "<<circle.long_of_side_square_in_the_circle()<<endl;
    }
    cout<<"Write type, if you want to quit write 0: ";
    cin>>type;
    cout<<endl;
    }while(type != 0);

}




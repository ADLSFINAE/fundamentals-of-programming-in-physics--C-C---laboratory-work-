#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;

/*
Класс Параллелограмм должен хранить координаты (не более 200 пикселов по
каждой координате) и размеры параллелограмма и включать:
методы, позволяющие задавать и читать координаты и размеры
параллелограмма;*/

class Parallelogram{
public:
    Parallelogram(){
        x = 0;
        y = 0;
        sizeAB = 0;
        sizeAD = 0;
    }

    Parallelogram(int coordX, int coordY, int size1, int size2)
        :x(coordX), y(coordY), sizeAB(size1), sizeAD(size2){}

    void setX(int x){
        this->x = x;
    }
    void setY(int y){
        this->y = y;
    }
    void setSizeAB(int size1){
        this->sizeAB = size1;
    }
    void setSizeAD(int size2){
        this->sizeAD = size2;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    int getSizeAB(){
        return sizeAB;
    }
    int getSizeAD(){
        return sizeAD;
    }

    void printInfo(){
        cout<<"X: "<<getX()<<" Y: "<<getY()<<" sizeAB: "<<getSizeAB()<<" sizeAD: "<<getSizeAD()<<endl;
    }
private:
    int x, y;
    int sizeAB, sizeAD;
};

class FArray
{
private:
    Parallelogram* Arr; // Указатель на будущий массив
    int Len; // Размер массива
public:
    FArray () {Len = 0; Arr = 0;}
    FArray (int k) {Len = 0; Arr = 0; SetSize(k);}
    ~FArray () {if (Arr) delete[]Arr;}
    void SetSize(int k); // Задание/изменение размера массива
    int GetSize() {return Len;} // Размер массива
    Parallelogram& operator[](int i); // Обращение к элементу массива
};

//------------------------------------------
void FArray::SetSize(int k) // Задать/изменить размер массива
{
    if (Arr) // Если память выделялась ранее,
    {
        delete[]Arr; // освобождаем ее
        Arr = 0;
    }
    Len = k; // Устанавливаем новый размер
    Arr = new Parallelogram[Len]; // и выделяем новую память
}
//------------------------------------------
Parallelogram& FArray::operator[](int i) // Обращение к i-тому
{ // элементу массива
    if (i < Len) // Если индекс не вышел за пределы массива,
        return Arr[i]; // возвращаем ссылку на этот элемент,
    throw 5; // иначе – вызываем исключительную ситуацию
}



int main(){
    int n;
    cout<<"Write size of array: ";
    cin>>n;
    cout<<endl;
    FArray A(n); // Объявление объекта-массива размером 30
    for(int i = 0; i < A.GetSize();i++){
        A[i].setX(i);
        A[i].setY(i + 1);
        A[i].setSizeAB(i + 2);
        A[i].setSizeAD(i + 3);
    }

    FArray temp = A;

    int quit = 1;
    do{
        int type = 1;
        cin>>type;
        switch(type){
        cout<<"TYPE-1: change size of array"<<endl;
        cout<<"TYPE-2: watch full info"<<endl;
        cout<<"TYPE-3: get elem info by index"<<endl;
        cout<<"TYPE-4: change elem info by index"<<endl;
        case 1:
            int newSize;
            cout<<"WRITE NEW ARRAY SIZE";
            cin>>newSize;
            cout<<endl;

            A.SetSize(newSize);
            for(int i = 0; i < A.GetSize();i++){
                A[i].setX(i);
                A[i].setY(i + 1);
                A[i].setSizeAB(i + 2);
                A[i].setSizeAD(i + 3);
            }
            break;
        case 2:
            for(int i = 0; i < A.GetSize(); i++){
                cout<<i<<": ";
                A[i].printInfo();
            }
            break;
        case 3:
            int index1;
            cout<<"Write index: ";
            cin>>index1;
            cout<<endl;
            A[index1].printInfo();

            break;
        case 4:
            int index2;
            cout<<"Write index: ";
            cin>>index2;
            cout<<endl;
            A[index2].printInfo();

            cout<<"Write new data: ";
            int x1, y1, sizeAB1, sizeAD1;
            cin>>x1>>y1>>sizeAB1>>sizeAD1;
            A[index2].setX(x1);
            A[index2].setX(y1);
            A[index2].setSizeAB(sizeAB1);
            A[index2].setSizeAD(sizeAD1);

            A[index2].printInfo();

            break;
        default:
            cout<<"WRONG TYPE"<<endl;
        }
        cin>>quit;
    }while(quit > 0);

    /*Класс должен включать методы позволяющие:
     задавать (изменять) размер массива;
     обращаться к элементам массива (перегрузить операцию [] );
    Все проверки корректности ввода должны проводиться в методах класса.
    В программе необходимо создать объект данного класса и проиллюстрировать его
    возможности:
     задать (изменить) размер объекта-массива;

    вывести на дисплей основные свойства всех элементов объекта-массива в виде
    таблицы;
     просмотреть все свойства любого элемента объекта-массива, выбрав его по
    номеру (индексу);
     задать (изменить) свойства любого элемента объекта-массива, выбрав его по
    номеру (индексу);*/
}

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
    unsigned int sizeAB, sizeAD;
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
    bool operator == (const FArray& arr){
        for(int i = 0; i < Len; i++){
            if(Len != arr.Len || Arr[i].getX() != arr.Arr[i].getX()
                    || Arr[i].getY() != arr.Arr[i].getY()
                    || Arr[i].getSizeAB() != arr.Arr[i].getSizeAB()
                    || Arr[i].getSizeAD() != arr.Arr[i].getSizeAD()){
                return false;
            }
        }
        return true;
    }

    void operator = (FArray& arr){
        Len = arr.Len;
        delete[] Arr;
        Arr = new Parallelogram[Len];
        for(int i = 0; i < Len; i++){
            Arr[i] = arr.Arr[i];
        }

    }
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
    int quit = 1;
    cout<<"Write size of 2 arrays: ";
    int n1, n2;
    cin>>n1>>n2;
    cout<<endl;

    FArray A(n1);
    FArray B(n2);

    FArray arr[2];
    arr[0] = A;
    arr[1] = B;
    do{
        int type = 1, num;
        cout<<"TYPE - 1: CREATE ARRAY"<<endl;
        cout<<"TYPE - 2: WATCH INFO ABOUT ARRAY"<<endl;
        cout<<"TYPE - 3: WATCH INFO FROM INDEX IN CURRENT ARRAY"<<endl;
        cout<<"TYPE - 4: CHANGE INFO FROM INDEX IN CURRENT ARRAY"<<endl;
        cout<<"TYPE - 5: COPY"<<endl;
        cout<<"TYPE - 6: CHECK ON EQUAL"<<endl;
        cout<<"TYPE - 7: SET NEW SIZE"<<endl;
        cout<<"WRITE TYPE and NUM OF ARRAY: ";
        cin>>type>>num;
        cout<<endl;
        switch(type){
        case 1:
            for(int i = 0; i < arr[num].GetSize(); i++){
                arr[num][i].setX(rand() % 10);
                arr[num][i].setY(rand() % 10);
                arr[num][i].setSizeAB(rand() % 10);
                arr[num][i].setSizeAD(rand() % 10);
            }
            break;
        case 2:
            for(int i = 0; i < arr[num].GetSize(); i++){
                arr[num][i].printInfo();
            }
            break;
        case 3:{
            cout<<"Write index of array to watch info: ";
            int index;
            cin>>index;
            cout<<endl;
            if(num == 0 && index >= 0 && index < n1)
                arr[num][index].printInfo();
            if(num == 1 && index >= 0 && index < n2)
                arr[num][index].printInfo();
            break;}
        case 4:{
            cout<<"Write index of array to write info: ";
            int index;
            cin>>index;
            cout<<endl;
            if(num == 0 && index >= 0 && index < n1){
                cout<<"Write x, y, sizeAB, sizeAD: ";
                int x1, x2;
                unsigned int x3, x4;
                cin>>x1>>x2>>x3>>x4;
                cout<<endl;
                arr[num][index].setX(x1);
                arr[num][index].setY(x2);
                arr[num][index].setSizeAB(x3);
                arr[num][index].setSizeAD(x4);
            }
            if(num == 1 && index >= 0 && index < n2){
                cout<<"Write x, y, sizeAB, sizeAD: ";
                int x1, x2;
                unsigned int x3, x4;
                cin>>x1>>x2>>x3>>x4;
                cout<<endl;
                arr[num][index].setX(x1);
                arr[num][index].setY(x2);
                arr[num][index].setSizeAB(x3);
                arr[num][index].setSizeAD(x4);
            }
            break;}
        case 5:
            cout<<"COPY ONE IN ANOTHER"<<endl;
            if(num == 0){
                arr[0].SetSize(arr[1].GetSize());
                arr[0] = arr[1];

            }
            if(num == 1){
                arr[1].SetSize(arr[0].GetSize());
                arr[1] = arr[0];
            }

            cout<<"FIRST"<<endl<<endl;
            for(int i = 0; i < arr[num].GetSize(); i++){
                arr[num][i].printInfo();
            }
            cout<<"SECOND"<<endl<<endl;
            for(int i = 0; i < arr[num].GetSize(); i++){
                arr[num][i].printInfo();
            }
            break;

        case 6:
            if(arr[0] == arr[1]){
                cout<<"THEY EQUAL"<<endl;
            }
            else{
                cout<<"THEY NOT EQUAL"<<endl;
            }
            break;
        case 7:
            cout<<"Write new size: "<<endl;
            int newSize;
            cin>>newSize;
            cout<<endl;

            if(num == 0){
                Parallelogram parall[arr[0].GetSize()];
                for(int i = 0; i < arr[0].GetSize(); i++){
                    parall[i] = arr[0][i];
                }

                int temp = arr[0].GetSize();

                arr[0].SetSize(newSize);

                for(int i = 0; i < newSize; i++){
                    if(i < temp){
                        arr[0][i] = parall[i];
                    }
                    else{
                        arr[0][i].setX(0);
                        arr[0][i].setY(0);
                        arr[0][i].setSizeAB(0);
                        arr[0][i].setSizeAD(0);
                    }
                }

            }
            if(num == 1){
                Parallelogram parall[arr[1].GetSize()];
                for(int i = 0; i < arr[1].GetSize(); i++){
                    parall[i] = arr[1][i];
                }

                int temp = arr[1].GetSize();

                arr[1].SetSize(newSize);

                for(int i = 0; i < newSize; i++){
                    if(i < temp){
                        arr[1][i] = parall[i];
                    }
                    else{
                        arr[1][i].setX(0);
                        arr[1][i].setY(0);
                        arr[1][i].setSizeAB(0);
                        arr[1][i].setSizeAD(0);
                    }
                }
            }
            break;
        }



        cout<<"WRITE QUIT LOWER THEN 0 TO QUIT"<<endl;
        cin>>quit;
        cout<<endl;
    }while(quit > 0);
}







#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;


/*
Написать программу работы со структурой в соответствии с заданием. В
программе должна быть возможность создавать динамический массив структур,
задавать информацию в поля структур, сохранять информацию в файл, дописывать
новую информацию в файл, читать информацию из файла, отображать информацию в
виде таблицы, задавать имена файлов для записи и чтения. Программа должна
содержать меню и позволять проводить повторные вычисления. Программа должна
быть написана с использованием функций. Вариант задания выдает преподаватель.


-повторные вычисления*
*/

struct Smartphone{
    char manafacturer[64];
    char model[64];
    int memory;
    int memory_RAM;
    float screen_diagonal;
};

void filling(Smartphone* smart){
    cout<<"Write manafacturer name: ";
    cin>>smart->manafacturer;
    cout<<endl;

    cout<<"Write model name: ";
    cin>>smart->model;
    cout<<endl;

    cout<<"Write memory count: ";
    cin>>smart->memory;
    cout<<endl;

    cout<<"Write memory RAM count: ";
    cin>>smart->memory_RAM;
    cout<<endl;

    cout<<"Write screen diagonal: ";
    cin>>smart->screen_diagonal;
    cout<<endl;
}

void ViewInfo(Smartphone *Arr, int Len) // Вывод инф-и на дисплей
{
    cout.precision(1);
    cout<<"================================================================================\n";
    cout<<"| N |    Manafacturer     |   Model    | Memory | Memory_RAM | Screen Diagonal | \n";
    cout<<"================================================================================\n";
    for (int i = 0; i < Len; i++)
    {
        cout << "| " << setw(2) << i + 1;
        cout << " | " << left << setw(19) << Arr[i].manafacturer
             << "| " << right << setw(10) << Arr[i].model
             << " | " << fixed << setw(6) << Arr[i].memory
             << " | " << fixed << setw(10) << Arr[i].memory_RAM
             << " | " << setw(15) << Arr[i].screen_diagonal << " |" << endl;
    }

    cout<<"================================================================================\n";
}

int CountStructs(FILE* fp)
{
    int len;
    fseek(fp, 0L, SEEK_END); // Переходим в конец файла
    len = ftell(fp); // Читаем позицию в файле - это будет длина файла
    fseek(fp, 0L, SEEK_SET); // Переходим снова в начало файла
    return len / sizeof(Smartphone); // Кол-во структур
}


void write_in_file(Smartphone smart){
    FILE *f1;
    string str;
    cout<<"Write name of file TO WRITE: ";
    cin>>str;
    cout<<endl;
    f1 = fopen(("C:\\Users\\alex\\Documents\\untitled14\\" + str).c_str(), "ab");
    fwrite(&smart, sizeof(Smartphone), 1, f1);
    fclose ( f1);
}

void read_file(){
    FILE* f1;
    string str;
    cout<<"Write name of file TO READ: ";
    cin>>str;
    cout<<endl;
    f1 = fopen(("C:\\Users\\alex\\Documents\\untitled14\\" + str).c_str(), "rb");

    int size = CountStructs(f1); // Определяем кол-во структур в файле
    Smartphone* MArr = new Smartphone[size]; // Выделяем память под массив структур
    for(int i = 0; i < size; i++){
        fread(&MArr[i], sizeof(Smartphone), 1, f1); // читаем все
    }
    ViewInfo(MArr, size);
    fclose(f1);
    delete[] MArr;
}



int main(){
    cout<<"Kozlov Alexander, RFZ-1"<<endl;
    cout<<"16 laboratory"<<endl;
    int type;
    cout<<"WRITE TYPE, IF TYPE = 0 -> QUIT: ";
    cin>>type;
    cout<<endl;

    do{
        int n;
        cout<<"Write n for array: ";
        cin>>n;
        cout<<endl;

        Smartphone* smartphone = new Smartphone[n];

        for(int i = 0; i < n; i++){
            filling(&smartphone[i]);
            write_in_file(smartphone[i]);
        }
        ViewInfo(smartphone, n);
        read_file();
        cout<<"WRITE TYPE, IF TYPE = 0 -> QUIT: ";
        cin>>type;
        cout<<endl;
        delete[] smartphone;
    }while(type != 0);
}
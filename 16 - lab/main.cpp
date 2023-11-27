#include <iostream>
#include <string>
#include <stdio.h>
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
    scanf("%s",smart->manafacturer);
    while (getchar() != '\n');
    cout<<endl;

    cout<<"Write model name: ";
    scanf("%s", smart->model);
    while (getchar() != '\n');
    cout<<endl;

    cout<<"Write memory count: ";
    scanf("%d", &smart->memory);
    while (getchar() != '\n');
    cout<<endl;

    cout<<"Write memory RAM count: ";
    scanf("%d", &smart->memory_RAM);
    while (getchar() != '\n');
    cout<<endl;

    cout<<"Write screen diagonal: ";
    scanf("%f", &smart->screen_diagonal);
    //while (getchar() != '\n');
    cout<<endl;
}

void ViewInfo(Smartphone *Arr, int Len) // Вывод инф-и на дисплей
{
    printf("================================================================================\n");
    printf("| N |    Manafacturer     |   Model    | Memory | Memory_RAM | Screen Diagonal | \n");
    printf("================================================================================\n");
    for (int i = 0; i < Len; i++)
        printf("| %1d | %-19s | %-10s | %-6.d | %-10.d | %-15.2f |\n",
               i+1,Arr[i].manafacturer, Arr[i].model, Arr[i].memory, Arr[i].memory_RAM, Arr[i].screen_diagonal);
    printf("================================================================================\n");
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

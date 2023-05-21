#include <iostream>
#include <ctime>
#include <cstring>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct Smartphone{
    char manafacturer[64];
    char model[64];
    int memory;
    int memory_RAM;
    double screen_diagonal;
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
    scanf("%lf", &smart->screen_diagonal);
    while (getchar() != '\n');
    cout<<endl;
}

void watch_what_we_filling(Smartphone* smart){
    cout<<"Manafacturer: ";
    for(int i = 0; i < (int)strlen(smart->manafacturer); i++){
        cout<<smart->manafacturer[i];
    }
    cout<<endl;

    cout<<"Model: ";
    for(int i = 0; i < (int)strlen(smart->model); i++){
        cout<<smart->model[i];
    }
    cout<<endl;

    cout<<"Memory: "<<smart->memory<<endl;
    cout<<"Memory RAM: "<<smart->memory_RAM<<endl;
    cout<<"Memory: "<<smart->screen_diagonal<<endl;

}

void ViewInfo(Smartphone *Arr, int Len) // Вывод инф-и на дисплей
{
 printf("================================================================================\n");
 printf("| N |    Manafacturer     |   Model    | Memory | Memory_RAM | Screen Diagonal | \n");
 printf("================================================================================\n");
 for (int i = 0; i < Len; i++)
 printf("| %1d | %-19s | %-10s | %-6.d | %-10.d | %-15.lf |\n",
 i+1,Arr[i].manafacturer, Arr[i].model, Arr[i].memory, Arr[i].memory_RAM, Arr[i].screen_diagonal);
 printf("================================================================================\n");
}

void read_in_file(Smartphone* smart){
    FILE *f1;
    string file;
    cout<<"Write file name "; cin>>file; cout<<endl;
    cin.sync();
    cin.clear();
    f1 = fopen(("C:\\Users\\alex\\Documents\\prog_lab\\" + file).c_str(), "a");
    fprintf(f1,"%s\n", smart->manafacturer);
    fprintf(f1,"%s\n", smart->model);
    fprintf(f1,"%d\n", smart->memory);
    fprintf(f1,"%d\n", smart->memory_RAM);
    fprintf(f1,"%lf\n", smart->screen_diagonal);
    fclose (f1);

}

void read_from_file(Smartphone* smart){//НЕ РАБОТАЕТ ПОКА ЧТО, МАЛО ПИЗДИЛИ
    FILE *f1;
    string file;
    cout<<"Write file name "; cin>>file; cout<<endl;
    cin.sync();
    cin.clear();
    f1 = fopen(("C:\\Users\\alex\\Documents\\prog_lab\\" + file).c_str(), "a");
    fscanf(f1,"%s\n", smart->manafacturer);
    fscanf(f1,"%s\n", smart->model);
    fscanf(f1,"%d\n", smart->memory);
    fscanf(f1,"%d\n", smart->memory_RAM);
    fscanf(f1,"%lf\n", smart->screen_diagonal);
    fclose (f1);
}

void clean_file(string name_of_file){
    FILE *file = fopen(name_of_file.c_str(), "w");
    if (!file)
        perror("Could not open file");

    fclose(file);
}


int main(){
    string name_of_file;
    int type;
    cin>>type;
    cin.sync();
    cin.clear();
    switch(type){
    int count;
    Smartphone* arr_smartphones;
    case 1:
        cout<<"Write count of company's: "; cin>>count; cout<<endl;

        arr_smartphones = new Smartphone[count];

        for(int i = 0; i < count; i++){
            filling(&arr_smartphones[i]);
        }
        ViewInfo(arr_smartphones, count);
        delete[] arr_smartphones;
        break;

    case 2:
        cout<<"Write count of company's: "; cin>>count; cout<<endl;

        arr_smartphones = new Smartphone[count];
        for(int i = 0; i < count; i++){
            cout<<"NUM OF ELEM ARRAY "<< i <<endl;
            filling(&arr_smartphones[i]);
            read_in_file(&arr_smartphones[i]);
        }
        ViewInfo(arr_smartphones, count);
        delete[] arr_smartphones;
        break;
    case 3:
        cout<<"Write count of company's: "; cin>>count; cout<<endl;

        arr_smartphones = new Smartphone[count];
        for(int i = 0; i < count; i++){
            cout<<"NUM OF ELEM ARRAY "<< i <<endl;
            read_from_file(&arr_smartphones[i]);
        }
        ViewInfo(arr_smartphones, count);
        delete[] arr_smartphones;
        break;
    case 4:
        cin>>name_of_file;
        clean_file("C:\\Users\\alex\\Documents\\prog_lab\\" + name_of_file);
        break;
    default:
        cout<<"another type"<<endl;
    }
    return 0;
}

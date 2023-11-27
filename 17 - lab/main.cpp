#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

/*
В массиве положительных целых двухбайтовых чисел подсчитать для каждого
элемента количество битов этого числа, которые равны 0. Найти минимальный
элемент среди тех чисел, у которых это посчитанное количество битов кратно 3, и
вывести его на дисплей в десятичном, шестнадцатеричном и двоичном форматах.
Вывести массив в десятичном, шестнадцатеричном и двоичном форматах. Программа
должна содержать меню и позволять проводить повторные вычисления. Все
алгоритмы должны быть реализованы с помощью функций. В программе необходимо
задавать размер массива и выделять под него память динамически. Заполнять
исходный массив двумя способами: случайными числами и по порядку от x1 с шагом k.
Выводить массивы и другую информацию на дисплей.

Для минимального балла достаточно сделать статические массивы и
заполнить их случайными числами.

-повторные вычисления
-случайными числами
- по порядку от x1 с шагом k
*/

void PrintBinary(int val)
{
    unsigned short mask = 0x8000; // 1000 0000 0000 0000
    for (int i = 0; i < 16; i++)
    {
        if (!(i % 2)) printf(" "); // Чтобы отделить по 4 бита
        if (val & mask) // Выделяем очередной бит числа
            printf("%c", '1'); // Если он равен 1, выводим символ ‘1’
        else // иначе
            printf("%c", '0'); // выводим символ ‘0’
        mask >>= 1; // сдвигаем маску на 1 бит вправо
    }
}

unsigned short HowZeroBits(int a)
{
    unsigned short mask = 0x8000; // 1000 0000 0000 0000
    unsigned short k, counter = 0; // Переменная – счетчик бит
    for (k = 0; k < 16; k++)
    {
        if (a & mask) // Если очередной бит равен 1
            counter++; // увеличиваем счетчик
        mask >>= 1; // сдвигаем маску на 1 бит вправо
    }
    return 16 - counter;
}

void ViewInfo(int k){
    printf("%4d = 0x%08X = ", k, k);
    PrintBinary(k);
    printf("\n");

    int i = HowZeroBits(k);
    printf("  %d bit\n", i);
}


int main()
{
	cout<<"Kozlov Alexander, RFZ-1"<<endl;
	cout<<"17 laboratory"<<endl;
    int type = 1;
    do{
    int var, n;
    cout<<"WRITE LONG OF ARRAY: ";
    cin>>n;
    cout<<endl;
    int* arr = new int[n];

    cout<<"CHOOSE TYPE FOR MADE ARRAY: 1) X1 TO K OTHER) RANDOM: ";
    cin>>var;
    cout<<endl;
    if(var == 1){
        int x1, k;
        cout<<"Write x1 and k: ";
        cin>>x1>>k;
        cout<<endl;
        for(int i = 0; i < n; i++){
            arr[i] = x1;
            x1 += k;
        }
    }
    else{
        for(int i = 0;i < n; i++){
            arr[i] = rand();
        }
    }



    for(int i = 0; i < n; i++){
        ViewInfo(arr[i]);
    }

    int* arrCountZeroBits = new int[n];

    for(int i = 0; i < n; i++){
        arrCountZeroBits[i] = HowZeroBits(arr[i]);
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(arrCountZeroBits[i] % 3 == 0){
            count++;
        }
    }
    int* arrForFindMin = new int[count];
    count = 0;
    for(int i = 0; i < n; i++){
        if(arrCountZeroBits[i] % 3 == 0){
            arrForFindMin[count] = arr[i];
            count++;
        }
    }
    if(count != 0){

        for(int i = 1; i < count; ++i) {
            if(arrForFindMin[0] > arrForFindMin[i])
                arrForFindMin[0] = arrForFindMin[i];
        }

        printf("Min number = %d\n", arrForFindMin[0]);
        ViewInfo(arrForFindMin[0]);
    }
    else{
        cout<<"NO MIN NUMBER % 3"<<endl;
    }

    delete[] arr;
    delete[] arrCountZeroBits;
    delete[] arrForFindMin;

    cout<<"If you want to quit write 0: ";
    cin>>type;
    cout<<endl;
    }while(type != 0);

    return 0;
}






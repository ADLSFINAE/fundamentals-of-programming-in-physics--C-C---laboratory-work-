#include <ctime>
#include <iostream>
using namespace std;


void Swap(int* pa, int* pb, int* pc, int* pd)
{
    int k = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = *pd;
    *pd = k;
}


int main(){
    int type = 0;

    do{
        cin>>type;

        int arr[9][9];
        int chosenOne;
        cin>>chosenOne;
        switch(chosenOne){
        case 1:
            int k;
            cin>>k;

            for (int i = 0; i < 9; i ++)
                for (int j = 0; j < 9; j ++)
                    arr[i][j] = k * i * j; // Заполнение массива

            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl<<endl;
            for (int i = 0; i < 9 / 2; i++)
                for (int j = i; j < 9-i-1; j++)
                    Swap(&arr[i][j], &arr[9-j-1][i], &arr[9-i-1][9-j-1], &arr[j][9-i-1]);

            for (int i = 0; i < 9 / 2; i++)
                for (int j = i; j < 9-i-1; j++)
                    Swap(&arr[i][j], &arr[9-j-1][i], &arr[9-i-1][9-j-1], &arr[j][9-i-1]);

            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }


            break;
        case 2:
            int NMAX, NMIN;
            cin>>NMAX>>NMIN;

            srand(time(0)); // стартовая инициализация генератора случ. чисел
            for (int i = 0; i < 9; i++)
                for (int j = 0; j < 9; j++) // заполн-е массива случ. числами
                    arr[i][j] = rand()/RAND_MAX * (NMAX - NMIN) + NMIN;

            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl<<endl;
            for (int i = 0; i < 9 / 2; i++)
                for (int j = i; j < 9-i-1; j++)
                    Swap(&arr[i][j], &arr[9-j-1][i], &arr[9-i-1][9-j-1], &arr[j][9-i-1]);

            for (int i = 0; i < 9 / 2; i++)
                for (int j = i; j < 9-i-1; j++)
                    Swap(&arr[i][j], &arr[9-j-1][i], &arr[9-i-1][9-j-1], &arr[j][9-i-1]);

            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }

            break;
        default:
            cout<<"WRONG TYPE"<<endl;
        }

    }while(type != 0);
}

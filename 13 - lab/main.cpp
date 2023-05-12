#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int find_max(int *arr, int size){
    int sup = 0;
    sup = arr[0];
    for(int i = 0; i < size; i++){
        if(sup < arr[i])
            sup = arr[i];
    }
    return sup;
}

int find_min(int *arr, int size){
    int sup = 0;
    sup = arr[0];
    for(int i = 0; i < size; i++){
        if(sup > arr[i])
            sup = arr[i];
    }
    return sup;
}

int randomizer(int begin, int end){
    return begin + rand() % end;
}

void x1_to_k(int* arr, int size, int x1, int k){
    for(int i = 0; i < size; i++){
        arr[i] = x1 + (i * k);
    }
}

void split_and_sum(int* fir_arr, int* sec_arr, int size){

    int sum_of_number_elems = 0;
    for(int i = 0; i < size; i++){
        int temp_elem = fir_arr[i];
        string str = to_string(temp_elem);
        if(fir_arr[i] == 0)
            sum_of_number_elems += 0;

        while(temp_elem > 0){
            sum_of_number_elems += (temp_elem % 10);
            temp_elem /= 10;
        }
        sec_arr[i] = sum_of_number_elems / static_cast<int>(str.size());
        sum_of_number_elems = 0;
    }
}

void filling_arr_first(int *arr, int size, int type){
    switch(type)
    {
        case 1:
            int begin, end;
            cout<<"Write begin and end for randomizer: ";
            cin>>begin>>end;
            cout<<endl;
            for(int i = 0; i < size; i++){
                arr[i] = randomizer(begin, end);
            }

        break;

        case 2:
            int x1, k;
            cout<<"Write x1 and k for first array: ";
            cin>>x1>>k;
            cout<<endl;

            x1_to_k(arr, size, x1, k);
        break;

        default:
            cout<<"Out of range types"<<endl;
        break;
    }
}


int main(){
    int checker = 0;
    do{
    int first_array_size;
    cout<<"Write first array size: ";
    cin>>first_array_size;
    cout<<endl;

    int* arr_first = new int[first_array_size];
    int* arr_second = new int[first_array_size];

    int type;
    cout<<"Write type of filling array: ";
    cin>>type;
    cout<<endl;

    filling_arr_first(arr_first, first_array_size, type);
    split_and_sum(arr_first, arr_second, first_array_size);


    for(int i = 0; i < first_array_size; i++)
         cout<<"Elem 1 "<<i<<" "<<arr_first[i]<<endl;
    cout<<"Maximum elem of first array is: "<<find_max(arr_first, first_array_size)<<endl;
    cout<<"Minimal elem of first array is: "<<find_min(arr_first, first_array_size)<<endl;
    cout<<endl<<endl;

    for(int i = 0; i < first_array_size; i++)
         cout<<"Elem 2 "<<i<<" "<<arr_second[i]<<endl;
    cout<<"Maximum elem of second array is: "<<find_max(arr_second, first_array_size)<<endl;
    cout<<"Minimal elem of second array is: "<<find_min(arr_second, first_array_size)<<endl;

    delete[] arr_first;
    delete[] arr_second;
    cout<<"Write number not equal to 0, for repeat my program: ";
    cin>>checker;
    cout<<endl;
    }while(checker > 0);
    return 0;
}





#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

struct Circle{

    void setXY(int x, int y){
        this->x = x;
        this->y = y;
    }
    void setRadius(double radius){
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

/*
-повторные вычисления - будет
-динамический массив со случайными числами - ok
-выводить данные окружностей(площади, длины окружностей и стороны вписанные в окружность) - ok
-Подсчитать количество окружностей, площадь которых меньше s1 и больше s2. - ok
-Переместить в начало массива окружности, у которых длина меньше заданной - ok
-Удалить все элементы, чья площадь больше заданной - ok
-Найти все окружности, у которых координата Y больше заданной и добавить после
них окружности с такими же координатами и радиусом. - ok
*/
void PrintRhombus(Circle a)
{
 printf("x=%2d, y=%2d, rad=%.2lf", a.x, a.y, a.radius);
}


void ViewArr(Circle *A, int n)
{
    for(int i=0; i< n; i++)
    {
        printf("Params of the circle %2d: " , i+1);

        PrintRhombus(A[i]);
        printf(" AREA = %.2lf" , A[i].area_of_the_circle());
        printf(" LONG = %.2lf" , A[i].long_of_circle());
        printf(" SQUARE = %.2lf\n" , A[i].long_of_side_square_in_the_circle());
    }
}

void countArrayS1andS2(Circle* Arr, int n, double s1, double s2){
    int s1counter = 0;
    int s2counter = 0;
    for(int i = 0; i < n; i++){
        if(Arr[i].area_of_the_circle() < s1){
            s1counter++;
        }
        if(Arr[i].area_of_the_circle() > s2){
            s2counter++;
        }
    }
    cout<<"LOWER THEN S1: "<<s1counter<<endl;
    cout<<"BIGGER THEN S2: "<<s2counter<<endl;
}

void sortedArr(Circle* Arr, int n, double longer){
    int start = 0;
    for(int i = 0; i < n; i++){
        if(Arr[i].long_of_circle() < longer){
            Circle tempo1 = Arr[start];
            Arr[start].x = Arr[i].x;
            Arr[start].y = Arr[i].y;
            Arr[start].radius = Arr[i].radius;

            Arr[i].x = tempo1.x;
            Arr[i].y = tempo1.y;
            Arr[i].radius = tempo1.radius;
            start++;
        }
    }
}
int globVal;
Circle* areaBiggerThanS1(Circle* arr, int n, double s1){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].area_of_the_circle() < s1){
            count++;
        }
    }
    cout<<"COUNT IS: "<<count<<endl;

    Circle* sss = new Circle[count];
    int anotherCounter = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].area_of_the_circle() < s1){
            sss[anotherCounter].x = arr[i].x;
            sss[anotherCounter].y = arr[i].y;
            sss[anotherCounter].radius = arr[i].radius;
            anotherCounter++;
        }
    }
    globVal = count;
    delete[] arr;
    return sss;
}

void YCHECKERSORTER(Circle* arr, int n, int y){
    for(int i = 0; i < n; i++){
        if(arr[i].y > y){
            int checkPoint = i + 1;
            for(int j = 0; (j < n) && (j != i); j++){
                if((arr[i].x == arr[j].x) &&
                        (arr[i].y == arr[j].y) &&
                        (arr[i].radius == arr[j].radius) && (checkPoint < n - 1)){
                    Circle tempo = arr[checkPoint];

                    arr[j].x = arr[checkPoint].x;
                    arr[j].y = arr[checkPoint].y;
                    arr[j].radius = arr[checkPoint].radius;

                    arr[checkPoint].x = tempo.x;
                    arr[checkPoint].y = tempo.y;
                    arr[checkPoint].radius = tempo.radius;
                }
            }
        }
    }
}



int main(){
    setlocale(LC_ALL, "Russian");
    cout<<"Kozlov Alexander, RFZ-1"<<endl;
    cout<<"19 laboratory"<<endl;
    int type = 1;
    do{
    int n;
    cout<<"Write long of array: ";
    cin>>n;
    cout<<endl;

    Circle* circleArr = new Circle[n];

    for(int i = 0; i < n; i++){
        int x = rand() % 100;
        int y = rand() % 100;
        double radius = rand() % 100;
        circleArr[i].setXY(x, y);
        circleArr[i].setRadius(radius);
    }

    cout<<"START ARRAY:"<<endl;
    ViewArr(circleArr, n);
    cout<<endl<<endl;

    cout<<"S1 and S2 count:"<<endl;

    cout<<"WRITE S1: ";
    double s1;
    cin>>s1;
    cout<<endl;

    cout<<"WRITE S2: ";
    double s2;
    cin>>s2;
    cout<<endl;

    countArrayS1andS2(circleArr, n, s1, s2);
    cout<<endl<<endl;

    cout<<"SORTED ARR:"<<endl;

    cout<<"WRITE LONG: ";
    double longer;
    cin>>longer;
    cout<<endl;

    sortedArr(circleArr, n, longer);
    ViewArr(circleArr, n);

    cout<<endl<<endl;

    cout<<"DELETE CIRCLES WHAT HAVE A LOWER THAN S1 AREA:"<<endl;
    cout<<"WRITE S3: ";
    double s3;
    cin>>s3;
    cout<<endl;
    circleArr = areaBiggerThanS1(circleArr, n, s3);

    ViewArr(circleArr, globVal);

    cout<<endl<<endl;

    cout<<"Y EQUALITE:"<<endl;
    cout<<"WRITE Y: ";
    int Y;
    cin>>Y;
    cout<<endl;

    YCHECKERSORTER(circleArr, globVal, Y);
    ViewArr(circleArr, globVal);



    delete[] circleArr;
    cout<<"IF YOU WANT TO QUIT WRITE 0: ";
    cin>>type;
    cout<<endl;
    }while(type != 0);
}







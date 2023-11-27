#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

class Fraction {
private:
    int numerator;   // числитель
    int denominator; // знаменатель

public:
    // Конструкторы
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction(int num, int denom) {
        numerator = num;
        if (denom != 0) {
            denominator = denom;
        } else {
            cout << "DENOMINATOR NOT EQUAL TO 0" << endl;
            numerator = 0;
            denominator = 1;
        }
    }

    // Методы для задания и чтения значений числителя и знаменателя
    void setNumerator(int num) {
        numerator = num;
    }

    int getNumerator() {
        return numerator;
    }

    void setDenominator(int denom) {
        if (denom != 0) {
            denominator = denom;
        } else {
            cout << "DENOMINATOR NOT EQUAL TO 0" << endl;
            numerator = 0;
            denominator = 1;
        }
    }

    int getDenominator() {
        return denominator;
    }

    // Методы для задания и считывания дроби строкой
    void setFraction(string fractionStr) {
        int slashPos = fractionStr.find('/');
        if (slashPos != -1) {
            string numStr = fractionStr.substr(0, slashPos);
            string denomStr = fractionStr.substr(slashPos + 1);
            int num = stoi(numStr);
            int denom = stoi(denomStr);
            setNumerator(num);
            setDenominator(denom);
        } else {
            cout << "WRONG" << endl;
        }
    }

    string getFractionString() {
        return to_string(numerator) + "/" + to_string(denominator);
    }

    // Методы для считывания дроби десятичным числом
    void setFractionDecimal(double decimal) {
        int maxDenom = pow(10, 9);   // Максимальное значение знаменателя
        int num = round(decimal * maxDenom);
        setNumerator(num);
        setDenominator(maxDenom);
    }

    double getFractionDecimal() {
        return (double)numerator / denominator;
    }

    //Сложение
    Fraction add(Fraction otherFraction) {
        int num = numerator * otherFraction.getDenominator() + otherFraction.getNumerator() * denominator;
        int denom = denominator * otherFraction.getDenominator();
        Fraction result(num, denom);
        return result;
    }

    //Вычитание
    Fraction subtract(Fraction otherFraction) {
        int num = numerator * otherFraction.getDenominator() - otherFraction.getNumerator() * denominator;
        int denom = denominator * otherFraction.getDenominator();
        Fraction result(num, denom);
        return result;
    }

    //Умножение
    Fraction multiply(Fraction otherFraction) {
        int num = numerator * otherFraction.getNumerator();
        int denom = denominator * otherFraction.getDenominator();
        Fraction result(num, denom);
        return result;
    }

    //Умножение
    Fraction dividing(Fraction otherFraction) {
        int num = numerator * otherFraction.getDenominator();
        int denom = denominator * otherFraction.getNumerator();
        Fraction result(num, denom);
        return result;
    }

    //СЛОЖЕНИЕ
    Fraction operator + (const Fraction& fraction) const
    {
        int num = numerator * fraction.denominator + fraction.numerator * denominator;
        int denom = denominator * fraction.denominator;
        Fraction result(num, denom);
        return result;
    }

    //ВЫЧИТАНИЕ
    Fraction operator - (const Fraction& fraction) const
    {
        int num = numerator * fraction.denominator - fraction.numerator * denominator;
        int denom = denominator * fraction.denominator;
        Fraction result(num, denom);
        return result;
    }

    //УМНОЖЕНИЕ
    Fraction operator * (const Fraction& fraction) const
    {
        int num = numerator * fraction.numerator;
        int denom = denominator * fraction.denominator;
        Fraction result(num, denom);
        return result;
    }

    //ДЕЛЕНИЕ
    Fraction operator / (const Fraction& fraction) const
    {
        int num = numerator * fraction.denominator;
        int denom = denominator * fraction.numerator;
        Fraction result(num, denom);
        return result;
    }

    bool operator > (const Fraction& fraction) const
    {
        Fraction result(this->numerator, this->denominator);
        if(this->numerator > fraction.numerator){
            return true;
        }
        else if(this->numerator == fraction.numerator && this->denominator < fraction.denominator){
            return true;
        }
        else if(this->numerator == fraction.numerator && this->denominator == fraction.denominator){
            return true;
        }
        else{
            return false;
        }

        return false;
    }

    bool operator < (const Fraction& fraction) const
    {
        Fraction result(this->numerator, this->denominator);
        if(this->numerator < fraction.numerator){
            return true;
        }
        else if(this->numerator == fraction.numerator && this->denominator > fraction.denominator){
            return true;
        }
        else if(this->numerator == fraction.numerator && this->denominator == fraction.denominator){
            return true;
        }
        else{
            return false;
        }

        return false;
    }

    bool operator == (const Fraction& fraction) const{
        if(this->numerator == fraction.numerator && this->denominator == fraction.denominator){
            return true;
        }
        return false;
    }
};

// Функция для вывода массива дробей в формате таблицы
void printFractionArray(Fraction fractions[], int size) {
    cout << "NUMERATOR\tDENUMERATOR\tFRACTION\t\tDECIMAL" << endl;
    for (int i = 0; i < size; i++) {
        Fraction fraction = fractions[i];
        cout << fraction.getNumerator() << "\t\t" << fraction.getDenominator() << "\t\t"
             << fraction.getFractionString() << "\t\t" << fraction.getFractionDecimal() << endl;
    }
}



int main(){
    /*Fraction first(5, 1);
    Fraction second(5, 62);

    //Сумма через оператор
    Fraction sum1 = first.add(second);
    cout<<sum1.getNumerator()<<" "<<sum1.getDenominator()<<endl;
    Fraction sum2 = first + second;
    cout<<sum2.getNumerator()<<" "<<sum2.getDenominator()<<endl;

    //Разность через оператор
    Fraction diff1 = first.subtract(second);
    cout<<diff1.getNumerator()<<" "<<diff1.getDenominator()<<endl;
    Fraction diff2 = first - second;
    cout<<diff2.getNumerator()<<" "<<diff2.getDenominator()<<endl;

    //Умножение через оператор
    Fraction multiply1 = first.multiply(second);
    cout<<multiply1.getNumerator()<<" "<<multiply1.getDenominator()<<endl;
    Fraction multiply2 = first * second;
    cout<<multiply2.getNumerator()<<" "<<multiply2.getDenominator()<<endl;

    //Деление через оператор
    Fraction dividing1 = first.dividing(second);
    cout<<dividing1.getNumerator()<<" "<<dividing1.getDenominator()<<endl;
    Fraction dividing2 = first / second;
    cout<<dividing2.getNumerator()<<" "<<dividing2.getDenominator()<<endl;

    //Функции сравнения
    bool s1 = (sum1 > first);
    cout<<s1<<endl;

    bool s2 = (sum1 < first);
    cout<<s2<<endl;

    bool s3 = (sum1 == sum2);
    cout<<s3<<endl;*/

    int n;
    cout<<"WRITE SIZE OF ARRAY: ";
    cin>>n;
    cout<<endl;

    Fraction* arr = new Fraction[n];
    int num, den, nk, nd;
    cout<<"WRITE num, den, nk, nd: ";
    cin>>num>>den>>nk>>nd;
    cout<<endl;
    for(int i = 0; i < n; i++){
        arr[i].setNumerator(num);
        num += nk;
        arr[i].setDenominator(den);
        den += nd;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i].getNumerator()<<" "<<arr[i].getDenominator()<<endl;
    }

    int quit = 1;
    do{
        int type = 1;
        cout<<"WRITE TYPE: ";
        cin>>type;
        cout<<endl;

        switch(type){
        cout<<"TYPE - 1: change numerator and denominator for elem of array"<<endl;
        case 1:
            int numElem;
            cout<<"NUMBER OF ELEM FOR CHANGE: ";
            cin>>numElem;
            cout<<endl;

            if(numElem >= 0 && numElem < n){
                int numi, deni;
                cout<<"WRITE NEW NUMERATOR: ";
                cin>>numi;
                cout<<endl;
                arr[numElem].setNumerator(numi);

                cout<<"WRITE NEW DENOMINATOR: ";
                cin>>deni;
                cout<<endl;
                arr[numElem].setDenominator(deni);

                int forOperators;
                cout<<"WRITE NUMBER FOR OPERATORS CHECKING: ";
                cin>>forOperators;
                cout<<endl;

                if(forOperators >= 0 && forOperators < n){
                    cout<<"NUMELEM INFO: "<<arr[numElem].getNumerator()<<" "
                       <<arr[numElem].getDenominator()<<endl;
                    cout<<"FOR OPERATORS INFO: "<<arr[forOperators].getNumerator()<<" "
                       <<arr[forOperators].getDenominator()<<endl;
                    //Сумма через оператор
                    Fraction sum1 = arr[numElem].add(arr[forOperators]);
                    cout<<sum1.getNumerator()<<" "<<sum1.getDenominator()<<endl;
                    Fraction sum2 = arr[numElem] + arr[forOperators];
                    cout<<sum2.getNumerator()<<" "<<sum2.getDenominator()<<endl;

                    //Разность через оператор
                    Fraction diff1 = arr[numElem].subtract(arr[forOperators]);
                    cout<<diff1.getNumerator()<<" "<<diff1.getDenominator()<<endl;
                    Fraction diff2 = arr[numElem] - arr[forOperators];
                    cout<<diff2.getNumerator()<<" "<<diff2.getDenominator()<<endl;

                    //Умножение через оператор
                    Fraction multiply1 = arr[numElem].multiply(arr[forOperators]);
                    cout<<multiply1.getNumerator()<<" "<<multiply1.getDenominator()<<endl;
                    Fraction multiply2 = arr[numElem] * arr[forOperators];
                    cout<<multiply2.getNumerator()<<" "<<multiply2.getDenominator()<<endl;

                    //Деление через оператор
                    Fraction dividing1 = arr[numElem].dividing(arr[forOperators]);
                    cout<<dividing1.getNumerator()<<" "<<dividing1.getDenominator()<<endl;
                    Fraction dividing2 = arr[numElem] / arr[forOperators];
                    cout<<dividing2.getNumerator()<<" "<<dividing2.getDenominator()<<endl;

                    //Функции сравнения
                    bool s1 = (arr[numElem] > arr[forOperators]);
                    cout<<s1<<endl;

                    bool s2 = (arr[numElem] < arr[forOperators]);
                    cout<<s2<<endl;

                    bool s3 = (arr[numElem] == arr[forOperators]);
                    cout<<s3<<endl;
                }
            }
            break;
        }

        cin>>quit;
    }while(quit > 0);

    delete[] arr;
}

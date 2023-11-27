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

    // Функции для сложения и вычитания двух дробей
    Fraction add(Fraction otherFraction) {
        int num = numerator * otherFraction.getDenominator() + otherFraction.getNumerator() * denominator;
        int denom = denominator * otherFraction.getDenominator();
        Fraction result(num, denom);
        return result;
    }

    Fraction subtract(Fraction otherFraction) {
        int num = numerator * otherFraction.getDenominator() - otherFraction.getNumerator() * denominator;
        int denom = denominator * otherFraction.getDenominator();
        Fraction result(num, denom);
        return result;
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

/*методы, позволяющие задавать и читать значение числителя и знаменателя;
методы, позволяющие задавать и считывать дробь строкой в формате “3/2”;
методы, позволяющие считывать дробь десятичным числом;
конструкторы по умолчанию, и с параметрами.
Написать функции, позволяющие складывать и вычитать две дроби, и
продемонстрировать их работу.

Написать функцию, позволяющую выводить массив на
дисплей в виде таблицы, в которой отображать параметры дробей: числитель,
знаменатель, в виде обыкновенной дроби и десятичной дроби.
*/

int main(){
    Fraction arr[5];
    Fraction first(5, 1);
    Fraction second(5, 62);
    Fraction three;
    three.setFraction("10/2");

    Fraction sum = first.add(second);
    Fraction diff = first.subtract(three);

    arr[0] = first;
    arr[1] = second;
    arr[2] = three;
    arr[3] = sum;
    arr[4] = diff;
    printFractionArray(arr, 5);
}
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

class Resistor{
public:
    Resistor(){};
    Resistor(double resistance, double voltage){
        Resistance = resistance;
        Voltage = voltage;
        I = calculateI(Resistance, Voltage);
        Power = calculateP(Resistance, I);
    };

    void setResistance(double resistance);
    double calculateP(double R, double I){
        return I * I * R;
    }
    double calculateI(double R, double U){
        return U/R;
    }

    void print(){
        cout<<"I: "<<I<<" U: "<<Voltage<<" R: "<<Resistance<<" P: "<<Power<<endl;
    }

    void changeResistorsParams(double R){
        Resistance = R;
        I = calculateI(Resistance, Voltage);
        Power = calculateP(Resistance, I);
    }

    void changeVoltage(double voltage){
        Voltage = voltage;
        I = calculateI(Resistance, Voltage);
        Power = calculateP(Resistance, I);
    }

    double getI(){return I;}
    double getR(){return Resistance;}
    double getP(){return Power;}
    double getU(){return Voltage;}

    void operator = (const Resistor& resis){
        I = resis.I;
        Resistance = resis.Resistance;
        Power = resis.Power;
        Voltage = resis.Voltage;
    }
private:
    double I;
    double Resistance;
    double Power;
    double Voltage;
};

void ViewInfo(Resistor *Arr, int Len) // Вывод инф-и на дисплей
{
    cout.precision(1);
    cout<<"==============================================================\n";
    cout<<"| N  |    I               |     U      |    R   |     P      |\n";
    cout<<"==============================================================\n";
    for (int i = 0; i < Len; i++)
    {
        cout << "| " << setw(2) << i + 1;
        cout << " | " << left << setw(19) << Arr[i].getI()
             << "| " << right << setw(10) << Arr[i].getU()
             << " | " << fixed << setw(6) << Arr[i].getR()
             << " | " << fixed << setw(10) << Arr[i].getP() << " |" << endl;
    }

    cout<<"==============================================================\n";
}

class Condey{
public:
    Condey(double voltage){
        Voltage = voltage;
    }

    void setVoltage(double voltage){
        Voltage = voltage;
    }

    double getVoltage(){
        return Voltage;
    }
private:
    double Voltage;
};

int main(){
    cout<<"Write count resistors: ";
    int n;
    cin>>n;
    Resistor* res = new Resistor[n];
    cout<<endl;

    cout<<"Write voltage: ";
    double voltage;
    cin>>voltage;
    Condey condey(voltage);
    cout<<endl;

    cout<<"Write R diapasone start and end: ";
    int x1, k1;
    cin>>x1>>k1;
    cout<<endl;

    for(int i = 0; i < n; i++){
        Resistor solo(rand() % (k1 - x1 + 1) + x1, condey.getVoltage());
        res[i] = solo;
    }

    ViewInfo(res, n);

    double sumR = 0.0;
    int quit = 1;
    do{
        cout<<"Write type for work: "<<endl;
        cout<<"TYPE - 1: Parallel chain"<<endl;
        cout<<"TYPE - 2: Consistent chain"<<endl;
        cout<<"TYPE - 3: Change resistor params"<<endl;
        cout<<"TYPE - 4: Change voltage of Condensator"<<endl;
        cout<<"TYPE - 5: Print information"<<endl;
        cout<<"TYPE - 6: Delete some resistor"<<endl;
        cout<<"TYPE - 7: Add new resistor"<<endl;
        int type;
        cin>>type;
        cout<<endl;

    switch(type){
    case 1:

        for(int i = 0; i < n; i++){
            sumR += 1 / res[i].getR();
        }

        cout<<"Parallel chain info I: "<<double(condey.getVoltage()/sumR)<<" U: "<<condey.getVoltage()
           <<" R: "<<sumR<<endl;
        sumR = 0.0;
        break;
    case 2:
        for(int i = 0; i < n; i++){
            sumR += res[i].getR();
        }

        cout<<"Consistent chain info I: "<<double(condey.getVoltage()/sumR)<<" U: "<<condey.getVoltage()
           <<" R: "<<sumR<<endl;
        sumR = 0.0;
        break;
    case 3:{
        cout<<"Write index of resistor for change information: ";
        int index;
        cin>>index;
        cout<<endl;
        if(index >= 0 && index <= n-1){
            cout<<"Write new resistance: ";
            double R;
            cin>>R;
            cout<<endl;
            res[index].changeResistorsParams(R);
        }
        else{
            cout<<"UNDEFINED INDEX"<<endl;
        }
        res[index].print();
        break;}
    case 4:{
        cout<<"Write new voltage: ";
        double vol;
        cin>>vol;
        cout<<endl;
        condey.setVoltage(vol);
        for(int i = 0; i < n; i++){
            res[i].changeVoltage(condey.getVoltage());
        }
        break;}

    case 5:
        ViewInfo(res, n);
        break;
    case 6:{
        cout<<"Write index to delete resistor by index: ";
        int index;
        cin>>index;
        cout<<endl;
        if(index >= 0 && index <= n-1){
            Resistor* arr = new Resistor[n-1];
            int val = 0;
            for(int i = 0; i < n; i++){
                if(i != index){
                    arr[val] = res[i];
                    cout<<res[i].getR()<<endl;
                    val++;
                }
            }
            n = n - 1;
            delete[] res;
            res = arr;
        }
        else{
            cout<<"UNDEFINED INDEX"<<endl;
        }
        break;}
    case 7: {
        Resistor* arr = new Resistor[n+1];
        n = n + 1;

        for(int i = 0; i < n; i++){
            arr[i] = res[i];
        }
        cout<<"Write resistance for new resistor: ";
        double newResistance;
        cin>>newResistance;
        cout<<endl;
        Resistor newResistor(newResistance, condey.getVoltage());
        arr[n - 1] = newResistor;

        delete[] res;

        res = arr;

        break;}
    }
    cout<<"Write quit < 0 to QUIT: ";
    cin>>quit;
    cout<<endl;
    }while(quit > 0);

    delete[] res;
}
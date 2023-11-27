#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

int IsSeparator(char c) // Является ли символ ‘с’ разделителем
{
    char str[] = ",. !?:;:'\n\0"; // Строка с разделителями
    int i = 0;
    while (str[i] != 0) // До конца строки с разделителями
    { // Сравниваем символ с по очереди со всеми разделителями
        if (c == str[i])
            return 1; // Если совпадает, возвращаем 1
        i++;
    }
    return 0; // Не совпадает ни с одним из символов-разделителей
}


int IsCapitalLetter(char c) // Является ли символ ‘с’ заглавной буквой
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // гласные
    int i = 0;
    while (str[i] != 0) // До конца строки с разделителями
    { // Сравниваем символ с по очереди со всеми разделителями
        if (c == str[i])
            return 1; // Если совпадает, возвращаем 1
        i++;
    }
    return 0; // Не совпадает ни с одной гласной буквой
}


char Text[1024] = "Mark Twain is a famous American writer and "
                  " a journalist. His real name was Samuel Clemens. He was born "
                  " in 1835 in Florida. Mark Twain started his literary career "
                  " rather late. He worked as a journalist in newspapers in Nevada "
                  " and California during the years of the Civil War.";

void func(char* Text){
    char ch = ' ';
    char* sr = Text; // sr – Указатель на анализируемый текст
    char st[81]; // st – массив для сохранения слова из строки
    int flag = -1; // Слово еще не начало формироваться
    for (int i = 0; sr[i]; i++) // Начало цикла по i
    {
        ch = sr[i]; // очередной символ
        if (IsSeparator(ch)) // Если это символ-разделитель
        {
            if (flag != -1) // и слово уже начало формироваться
            { // завершаем формировать слово:
                flag++; // Определяем индекс для симв. '\0’ (конец строки)
                st[flag] = '\0'; // и ставим ‘\0’ в конце st,
                // формируя тем самым строку (в ней скопированное слово)
                // Теперь в st лежит очередное слово из текста,
                // с которым можно что-либо делать, например
                // определить, первая буква слова гласная или нет:
                if (IsCapitalLetter(st[0])) // Если у слова 1-я буква гласная,
                    cout<<st<<" "<<strlen(st)<<endl; // то слово выводится на экран
                flag = -1; // Устанавливаем флаг в -1, чтобы готовиться
                // формировать следующее слово
            }
        }
        else // Если символ не разделитель - формируем слово
        {
            flag++; // Определяем индекс для текущего символа слова
            st[flag] = ch; // В массив для слова st пишем текущий символ
        }
    } // Конец цикла по i
}
int main()
{
	cout<<"Kozlov Alexander, RFZ-1"<<endl;
	cout<<"14 laboratory"<<endl;
	
    int type;
    cout<<"Write type: ";
    cin>>type;
    cout<<endl;
    cin.clear();
    cin.sync();

    switch(type){

    case 1:
        func(Text);
        break;

    case 2:
        char something[1024];
        gets(something);
        func(something);
        break;

    default:
        cout<<"Out of type range";

    }

    return 0;
}

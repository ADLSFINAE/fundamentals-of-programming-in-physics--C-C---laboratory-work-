#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "element.h"
#include <string>
#include <stack>
#include <vector> 
using namespace std;


class calculator
{

private:
    static const int priority[6];

    string original_string;

    vector<Element> all_element;

    vector<Element> preorder_expression;

    int element_num;
    int p_o_e_num;


	stack<Element> mystack;
	
    Number ans;

    void get_p_o_e();

    Number get_num(int &i, string &,bool);

public:
    calculator();

    bool set(string);

    string all_string(int);

    void calculate();

    string ans_string(int );

    void clear();

    string element_to_string(Element);

	bool Greater_than_equal_to_or_equal_to(Element , Element );
};

#endif // !CALCULATOR_H


#ifndef ELEMENT_H
#define ELEMENT_H
enum operation_type { left_parentheses, right_parentheses, add, subtraction, multiplication, division};
enum element_type {number, operation};

class Number
{
private:
    double a, b;
public:
	double get_a();
	void set_a(double);

	double get_b();
	void set_b(double);

	Number(double, double);
	Number();
};

class Operation
{
private:
	operation_type type;
public:
	operation_type get_type();
	void set_type(operation_type);
	void set_type(int);

	Operation(int = 0);
	Operation(operation_type);
};

class Element: public Number, public Operation
{
private:
	element_type basic_type;

public:
	element_type get_basic_type();
	void set_basic_type(element_type);
	
	Element(double,double);
	Element(operation_type);

	Element(Number);
	Element(Operation);
};


#endif

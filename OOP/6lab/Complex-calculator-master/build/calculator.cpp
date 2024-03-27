#include<cmath>
#include<string>
#include<cstring>
#include<iostream>
#include<iomanip>
#include<cmath>
#include"calculator.h"
#include<algorithm>
using namespace std;

const int calculator::priority[6] = { 666,666,0,0,1,1 };
const double pai = acos(-1);
const double e = exp(1);

Number calculator::get_num(int &i, string &t, bool sign)
{
    Number tnum;
    double tsum = 0;
    if (t[i] >= '0'&&t[i] <= '9' || t[i] == 'e')
    {
        if(t[i] == 'e')
        {
            tsum = e;
            i++;
        }
        else
        {
            int p1 = 10;	
            double p2 = 0.1;
            do
            {
                tsum = tsum * p1 + t[i] - '0';
                i++;
            } while (t[i] >= '0'&&t[i] <= '9');
            if (t[i] == '.')
            {
                i++;
                do
                {
                    tsum = tsum + (t[i] - '0')*p2;
                    p2 *= 0.1;
                    i++;
                } while (t[i] >= '0'&&t[i] <= '9');
            }
        }


        if (!sign)	tsum = -tsum;

       
        if(t[i] == '<')
        {
            i++;
            double t_tsum = 0;
            int t_sign = 1;
            if(t[i] == '-')
            {
                i++;
                t_sign = -1;
            }

            if(t[i] == 'e')
            {
                t_tsum = e;
                i++;
            }
            else
            {
                int t_p1 = 10;	
                double t_p2 = 0.1;
                do
                {
                    t_tsum = t_tsum * t_p1 + t[i] - '0';
                    i++;
                } while (t[i] >= '0'&&t[i] <= '9');
                if (t[i] == '.')
                {
                    i++;
                    do
                    {
                        t_tsum = t_tsum + (t[i] - '0')*t_p2;
                        t_p2 *= 0.1;
                        i++;
                    } while (t[i] >= '0'&&t[i] <= '9');
                }
            }

            tnum.set_a(tsum * cos(t_sign * t_tsum * pai / 180));
            tnum.set_b(tsum * sin(t_sign * t_tsum * pai / 180));
        }
        else
        {
            tnum.set_a(tsum);
        }

        i--;
        
    }

    
    else
    {
        i++;

        
        int t_sign = 1;
        if(t[i] == '-')
        {
            i++;
            t_sign = -1;
        }
        if(t[i] == 'e')
        {
            tsum = e;
            i++;
        }
        else if(t[i] >= '0' && t[i] <= '9')
        {
            int p1 = 10;	
            double p2 = 0.1;
            do
            {
                tsum = tsum * p1 + t[i] - '0';
                i++;
            } while (t[i] >= '0'&&t[i] <= '9');
            if (t[i] == '.')
            {
                i++;
                do
                {
                    tsum = tsum + (t[i] - '0')*p2;
                    p2 *= 0.1;
                    i++;
                 } while (t[i] >= '0'&&t[i] <= '9');
            }
        }

        else
        {
            tsum = 1;
        }
        if (!sign)	tsum = -tsum;
        tnum.set_b(tsum * t_sign);
        i--;
    }
    return tnum;
}

bool calculator::set(string t)
{
    original_string = t;
    int amazing = 0;	
    int tl = int(t.length());

    for (int i = 0; i < tl; i++)
    {
        
        if (t[i] == '-'
                       && (i==0 || (t[i - 1] == '+' || t[i - 1] == '-' || t[i-1] == '*' || t[i-1] == '/' || t[i-1] == '(') )
                       && ((t[i + 1] >= '0' && t[i + 1] <= '9') || t[i + 1] == 'j' || t[i + 1] == 'e')
            )
        {
            i++;
            all_element.push_back(Element(get_num(i, t, false)));
            
        }

        
        else if ((t[i] >= '0'&&t[i] <= '9') || (t[i] == 'j') || t[i] == 'e')
        {
            all_element.push_back(Element(get_num(i, t, true)));
        }

        
        else
        {
            int op_type;
            switch (t[i])
            {
            case '(':
                op_type = 0;
                amazing++;
                break;
            
            case ')':
                op_type = 1;
                amazing++;
                break;
            
            case '+':
                op_type = 2;
                break;
            case '-':
                op_type = 3;
                break;
            case '*':
                op_type = 4;
                break;
            case '/':
                op_type = 5;
                break;
            default:
                return false;
                break;
            }
            all_element.push_back(Operation(op_type));
            
        }

        
        element_num++;
    }
    p_o_e_num = element_num - amazing;
   
    get_p_o_e();

    return true;
}

string calculator::element_to_string(Element t)
{
    if (t.get_basic_type() == element_type::operation)
    {
        string op_type;
        switch (t.get_type())
        {
        case 0:
            op_type = '(';
            break;
        case 1:
            op_type = ')';
            break;
        case 2:
            op_type = '+';
            break;
        case 3:
            op_type = '-';
            break;
        case 4:
            op_type = '*';
            break;
        case 5:
            op_type = '/';
            break;
        default:
            cout << "what? " << t.get_type() << endl;
            break;
        }
        return op_type;
    }

    string tans = "";

    if (t.get_a() != 0)
    {
        tans += to_string(t.get_a());
        if (t.get_b() != 0)
        {
            if(t.get_b() < 0)
            {
                tans += "-j";
                tans += to_string(-t.get_b());
            }
            else
            {
                tans += "+j";
                tans += to_string(t.get_b());
            }
        }
    }
    else
    {
        if (t.get_b() != 0)
        {
            if(t.get_b() < 0)
            {
                tans += "-j";
                tans += to_string(-t.get_b());
            }
            else
            {
                tans += "+j";
                tans += to_string(t.get_b());
            }
        }
        else
        {
            tans = "0";
        }
    }

    return tans;
}

string calculator::all_string(int choice)
{
    if (choice == 0)	return original_string;
    else if (choice == 1)
    {
        string ans = "";
        for (std::vector<Element>::iterator it = all_element.begin(); it != all_element.end(); it++)
        {
            ans += element_to_string(*it);
        }
        return ans;
    }
    else
    {
        string ans = "";
        for (std::vector<Element>::iterator it = preorder_expression.begin(); it != preorder_expression.end(); it++)
        {
            ans += element_to_string(*it);
        }
        return ans;
    }
}

void calculator::calculate()
{

    for (int i = p_o_e_num - 1; i >= 0; i--)
    {
        double ttt;
        double a1, a2, b1, b2;

        if (preorder_expression[i].get_basic_type() == element_type::operation)
        {
            preorder_expression[i].set_basic_type(element_type::number);	
            switch (preorder_expression[i].get_type())
            {
            case 2:				// +
                a1 = mystack.top().get_a();
                b1 = mystack.top().get_b();
                mystack.pop();
                a2 = mystack.top().get_a();
                b2 = mystack.top().get_b();
                mystack.pop();

                preorder_expression[i].set_a(a1 + a2);
                preorder_expression[i].set_b(b1 + b2);
                break;
            case 3:				// -
                a1 = mystack.top().get_a();
                b1 = mystack.top().get_b();
                mystack.pop();
                a2 = mystack.top().get_a();
                b2 = mystack.top().get_b();
                mystack.pop();

                preorder_expression[i].set_a(a1 - a2);
                preorder_expression[i].set_b(b1 - b2);
                break;
            case 4:				// *
                a1 = mystack.top().get_a();
                b1 = mystack.top().get_b();
                mystack.pop();
                a2 = mystack.top().get_a();
                b2 = mystack.top().get_b();
                mystack.pop();

                preorder_expression[i].set_a(a1 * a2 - b1 * b2);
                preorder_expression[i].set_b(b1 * a2 + a1 * b2);

                break;
            case 5:				// /
                a1 = mystack.top().get_a();
                b1 = mystack.top().get_b();
                mystack.pop();
                a2 = mystack.top().get_a();
                b2 = mystack.top().get_b();
                mystack.pop();

                ttt = a2 * a2 + b2 * b2;

                preorder_expression[i].set_a((a1 * a2 + b1 * b2) / ttt);
                preorder_expression[i].set_b((b1 * a2 - a1 * b2) / ttt);

                break;
            default:
                //cout << "见鬼了" << endl;
                return;
                break;
            }
        }
        mystack.push(preorder_expression[i]);
    }

    ans = preorder_expression[0];
}

calculator::calculator(void)
{
    clear();
}

string calculator::ans_string(int t)
{
    string tans = "";
    if (t == 0)
    {
        tans = element_to_string(ans);
        return tans;
    }
    else
    {
        tans += to_string(sqrt(ans.get_a()*ans.get_a() + ans.get_b()*ans.get_b()));
        tans += " <";
        tans += to_string(atan2(ans.get_b(), ans.get_a()) * 180 / acos(-1));
        tans += "°";
    }
    return tans;
}

void calculator::clear()
{
    original_string = "";
    element_num = 0;
    p_o_e_num = 0;
    ans = Number(0, 0);
    all_element.clear();
    preorder_expression.clear();
    while (!mystack.empty())
        mystack.pop();
}

void calculator::get_p_o_e()
{
    int t = 0;
    for (int i = element_num - 1; i >= 0; i--)
    {
        if (all_element[i].get_basic_type() == element_type::number)
        {
            preorder_expression.push_back(all_element[i]);
            t++;
        }
        else if (all_element[i].get_type() == 1)	
        {
            mystack.push(all_element[i]);
        }
        else if (all_element[i].get_type() != 0)
        {
            while (1)
            {
                if (mystack.empty())
                {
                    mystack.push(all_element[i]);
                    break;
                }
                else if (mystack.top().get_type() == 1)
                {
                    mystack.push(all_element[i]);
                    break;
                }
                else if (Greater_than_equal_to_or_equal_to(all_element[i], mystack.top()))
                {
                    mystack.push(all_element[i]);
                    break;
                }
                else
                {
                    preorder_expression.push_back(mystack.top());
                    mystack.pop();
                    t++;
                }
            }
        }
        else
        {
            while (!mystack.empty() && mystack.top().get_type() != operation_type::right_parentheses)
            {
                preorder_expression.push_back(mystack.top());
                mystack.pop();
                t++;	
            }
            mystack.pop();
        }
    }
    while (!mystack.empty())
    {
        preorder_expression.push_back(mystack.top());
        mystack.pop();
        t++;
    }

    reverse(preorder_expression.begin(), preorder_expression.end());
}

bool calculator::Greater_than_equal_to_or_equal_to(Element a, Element b)
{
    if (a.get_basic_type() == element_type::number)
    {
        return sqrt(a.get_a()*a.get_a() + a.get_b()*a.get_b()) >= sqrt(b.get_a()*b.get_a() + b.get_b()*b.get_b());
    }
    else
    {
        return priority[a.get_type()] >= priority[b.get_type()];
    }
}

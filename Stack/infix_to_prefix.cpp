//Infix to Prefix Converter
//Language Used: C++
//Infix to Prefix Converter Algorithm uses Stack to convert given Infix expression to Prefix
//Input Format: Input contains only one line i.e., Infix Expression
//Output Format: Output contains only one line i.e., Prefix Expression
//Sample Input:  3*(7-9)
//Sample Output: *3-79
//author: adiXcodr

#include <bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;


    string removeSpaces(string str)  //Removes Spaces from input
    {
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        return str;
    }

    bool isOperator(char opr)
    {
       return (!isalpha(opr) && !isdigit(opr));
    }

    int getPriority(char opr)  //Checks Priority of operators
    {
      if (opr == '-' || opr == '+')
        return 1;
      else if (opr == '*' || opr == '/')
        return 2;
      else if (opr == '^')
        return 3;
      return 0;
    }

    string infixToPrefix(string infix)   //Converts Infix to Prefix
{
      // stack for operators.
      stack<char> operators;

      // stack for operands.
      stack<string> operands;

      for (int inx = 0; inx < infix.length(); inx++) {

          if (infix[inx] == '(') {
              operators.push(infix[inx]);
          }

          else if (infix[inx] == ')') {
              while (!operators.empty() &&
                    operators.top() != '(') {

                  string op1 = operands.top();
                  operands.pop();

                  string op2 = operands.top();
                  operands.pop();

                  char op = operators.top();
                  operators.pop();

                  string tmp = op + op2 + op1;
                  operands.push(tmp);
              }

              operators.pop();
          }


          else if (!isOperator(infix[inx])) {
              operands.push(string(1, infix[inx]));
          }


          else {
              while (!operators.empty() &&
                    getPriority(infix[inx]) <=
                      getPriority(operators.top())) {

                  string op1 = operands.top();
                  operands.pop();

                  string op2 = operands.top();
                  operands.pop();

                  char op = operators.top();
                  operators.pop();

                  string tmp = op + op2 + op1;
                  operands.push(tmp);
              }

              operators.push(infix[inx]);
          }
      }


      while (!operators.empty()) {
          string op1 = operands.top();
          operands.pop();

          string op2 = operands.top();
          operands.pop();

          char op = operators.top();
          operators.pop();

          string tmp = op + op2 + op1;
          operands.push(tmp);
      }

      return operands.top();
  }


    int main()
    {
      string infix;
      cout<<"Enter Infix expression here : ";
      getline(cin,infix);
      if(infix.size()>=1){
      infix=removeSpaces(infix);
      cout<<"Prefix : "<<infixToPrefix(infix);
      }
      return 0;
    }

//
// Created by genri on 21.01.2023.
//

#ifndef INC_6_IDZ_OOP_SOURCE_H
#define INC_6_IDZ_OOP_SOURCE_H
#include<iostream>
#include<cmath>
#include<stack>
#include<climits>
using namespace std;
float scanNum(char ch);
int isOperator(char ch);
int isOperand(char ch);
float operation(int a, int b, char op);
float postfixEval(string postfix);

#endif //INC_6_IDZ_OOP_SOURCE_H

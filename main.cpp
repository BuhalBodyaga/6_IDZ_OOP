#include<iostream>
#include"source.h"
using namespace std;


int main(){

    string post;
    cout<<"Введите строку "<<"\n";
    cin>>post;
    cout << "The result is: "<<postfixEval(post);
}
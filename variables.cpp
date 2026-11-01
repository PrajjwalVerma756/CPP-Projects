#include<iostream>
using namespace std;

int global=99;

void fun(){
    cout<<global;
}

int main(){
    int sum=6;
    int global=67;
    global=0;
    float pi=3.14;
    fun();
    cout<<" The numbers used are "<<sum<<" and "<<pi;
    cout<<global;
    return 0;
}


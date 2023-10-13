#include<iostream>
using namespace std;

void count(){
    static int c = 0;
    cout << c++;
} 
int main(){
    for (int i = 0; i < 5; i++)
    {
        count();
    }
    
}
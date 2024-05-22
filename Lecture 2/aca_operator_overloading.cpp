#include <bits/stdc++.h> 
using namespace std;

class increase{
    public:
    int value;
    void operator ++(int){
        value=value^2;
    }
    
};

int main(){
    int y=0;
    increase x;
    x.value=16;
    x++;
    y++;
    cout<<"x "<<x.value<<" y "<<y;
}
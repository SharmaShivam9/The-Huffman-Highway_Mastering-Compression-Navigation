#include <bits/stdc++.h> 
using namespace std;

class Food{
    public:
    int freq=5,cost=10;
};
class Liquor:public Food{
    public:
    int cost2=100;
};
class Bill:public Liquor{
    public:
    void total(){
        cout<<freq*cost+freq*cost2<<endl;
    }
    
};
int main(){
    Bill AAyush;
    AAyush.total();
    cout<<AAyush.Food::freq<<endl;
    cout<<AAyush.cost<<endl;
}
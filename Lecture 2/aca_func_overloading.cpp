#include <bits/stdc++.h> 
using namespace std;

class Mentee{
    public:
    int RollNo;
    int Assignment1_Marks;
    int Assignment2_Marks;

    void sum(int a){
        cout<<a<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b, int c){
        cout<<a+b+c<<endl;
    }
    void sum(int a,int b, int c,int d){
        cout<<a+b*c<<endl;
    }

     
};

int main(){
    Mentee AAyush;
    AAyush.RollNo=230001;
    AAyush.sum(1,1,1,1);
}
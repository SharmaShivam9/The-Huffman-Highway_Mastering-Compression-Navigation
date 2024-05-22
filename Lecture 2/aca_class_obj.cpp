#include <bits/stdc++.h> 
using namespace std;

class Mentee{
    public:
        int RollNo;
        bool Attendace_Meet_1;
        bool Assignment1;
        bool Assignment2;
        bool Attendace_Meet_2;

    private:
        int Assignment1_Marks;
        int Assignment2_Marks;

     public:
        void setmarks(int a,int b){
            Assignment1_Marks=a;
            Assignment2_Marks=b;
        }
        void getmarks(){
            cout<<"Assignment1_Marks "<<Assignment1_Marks<<endl;
            cout<<"Assignment2_Marks"<< Assignment2_Marks;
        }
};
class total:public Mentee{

};
int main(){
    total AAyush;
    AAyush.RollNo=230001;
    AAyush.setmarks(8,9);
    AAyush.getmarks();
}
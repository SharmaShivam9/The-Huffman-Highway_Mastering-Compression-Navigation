#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector <float> examScores;
    float mark;
    float sum=0;
    float highest=-10000000;
    float lowest=1000000;
    for(int i=0; i<10; i++){
        cin>>mark;
        examScores.push_back(mark);
        sum=sum+examScores[i];
        if(examScores[i]>highest){
                highest=examScores[i];}
        if(examScores[i]<lowest){
                lowest=examScores[i];
            }    }
    float avg=sum/10;
    int k=0;
    int m=0;
    for(int i=0;i<10;i++){
       if (examScores[i]>avg)
       k++;
       if(examScores[i]<avg)
       m++;}
    cout<<"avg"<<"="<<avg<<endl;   
    cout<<"highest"<<"="<<highest<<endl;
    cout<<"lowest"<<"="<<lowest<<endl;
    cout<<"no. of exam scores above avg"<<"="<<k<<endl;
    cout<<"no. of exam scores below avg"<<"="<<m<<endl;
    return 0;
}
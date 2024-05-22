#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Input: ";
    cin>>n;
    cout<<endl<<"Output:"<<endl<<endl;
        for (int l=0;l<n;l++){
            for (int j=0;j<n;j++){
                if (j%2==0){
                    for (int k=1;k<=l+1;k++) cout<<k;
                    for (int k=1;k<n-l;k++) cout<<" ";
                }
                if (j%2==1){
                    for (int k=1;k<n-l;k++) cout<<" ";
                    for (int k=l+1;k>=1;k--) cout<<k;
                }
            }
            cout<<endl;}

    return 0;
}
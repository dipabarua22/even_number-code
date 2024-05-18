#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cin>>N;

           if(N<2){
            cout<<-1<<endl;
           }
            else{
             for(i=2;i<=N;i+=2){
            cout<<i<<endl;
            }
        }
    return 0;
}



#include<stdio.h>
using namespace std;
int main(){
    int num;
    do{
        std::cout << "Enter a positive interger:" << std::endl;
        cin>>num;
    }
    while(num<0);
    int fac;
    for(int i=1;i<=num;i++){
        fac=fac*i;
    }
    cout<<num<<"!="<<fac<<endl;
    return 0;
}

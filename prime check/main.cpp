#include <iostream>
int a[500],k=0;
using namespace std;
void prime(int p){
    if(p%2 != 0 && p%3 != 0 && p%4 != 0 && p%5 != 0 && p%6 != 0 && p%7 != 0 && p%8 != 0 && p%9 != 0 )
       a[k++] = p;
}
int main()
{
    int i;
    for(i=2;i<=1000;i++){
        prime(i);
    }

    for(i=0;i<=500;i++){
       cout<<a[i]<<endl;
    }


    return 0;
}



#include <iostream>
#include <cmath>

using namespace std;

int abb(int a){
    int res=0, ind=0;
    for (int i=9; i>0; i++){
        while (a%i==0)
            a/=i;
            res+=pow(10, ind)*i;
            ind++;
    }return (a==1) ? res : -1;
}

int main()
{
    cout<<abb(108);
    return 0;
}



#include <iostream>

using namespace std;

bool pool[1000001];


void makep(int n){
    for (int i=0; i<n; i++)
        pool[i]=true;
    pool[0]=false; pool[1]=false;
    
    for (int i=0; i<n; i++)
        if (pool[i])
            for (int j=2*i; j<n; j+=i)
                pool[j]=false;

}

int spr(int n){
    makep(n);
    int mod=22082018, res=0;
    for (int i=2; i<=n; i++){
        if(pool[i]) res=(res+i%mod)%mod;
    }return res;
}

int main()
{

    return 0;
}

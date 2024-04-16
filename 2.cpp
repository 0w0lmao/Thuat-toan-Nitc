

#include <iostream>

using namespace std;

int nf0(int n){
   int res=0;
   for(int i=1; i<=n; i++){
      int temp=i;
      while(temp%5==0){
         res++;
         temp/=5;
      }
   }
   return res;
}

unsigned long long aaa(int a){
    unsigned long long res=1;
    for (int i=2; i<=a; i++){
        res*=i;
    }return res;
}



int main()
{
    cout<<numof0(20)<<'\n';
    cout<<aaa(20);
    return 0;
}

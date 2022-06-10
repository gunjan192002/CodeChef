#include<bits/stdc++.h>
using namespace std;
int sum(int a)
{   if(a==0)return 0;
   sum(a)=sum(a-1)+a;
   return sum(a);
 }


int main()
{    int x=10;
   cout<< sum(x);
    return 0;
}
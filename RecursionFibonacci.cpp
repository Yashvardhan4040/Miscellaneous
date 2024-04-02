#include<iostream>
using namespace std;

int printname(int n)
{
   if(n<=1)
   return n;
   
   return printname(n-1)+printname(n-2);
   
}
int main()
{
    int n;
    cout<<"Which term of the fibonacci series you want to print?:";
    cin>>n;
    cout<<printname(n);
}

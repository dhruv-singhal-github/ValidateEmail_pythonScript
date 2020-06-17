#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string a="f2019000";
   int j=10;
   string b="@goa.bits-pilani.ac.in";
   for(int i=1;i<1600;i++){
       if(i%j==0){
           a.pop_back();
           
           j=j*10;
           
       }
       cout<<"\'"<<a+to_string(i)+b<<"\',";
       
   }
   
   return 0;
}
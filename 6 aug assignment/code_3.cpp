#include <iostream>

int main() {
#include<bits/stdc++.h>


 using namespace std;

 string year(int a)
 {    
       if(a%4==0){
     
      return "leap year";
 }
 
 else{

      return "not leap year";
 }
     
     return "invalid";
     
 }  
    
 
int main(){
  
  int a; 
  string c;
cout<<"enter the year:\n"; 
 cin>> a;
 cout<< "your enterd yesr is:" <<a<<"\n";
 
c= year(a);

cout<<"this is a: "<<c;

return 0;

 
}



    return 0;
}

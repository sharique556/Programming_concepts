#include <iostream>  
#include <string>  
#include <map>  
#include<algorithm>
      
    using namespace std;  
      
    int main ()  
    {  
      map<string,int>m;
      m["Room1"] = 100;
      m["Room2"] = 200;
      m["Room3"] = 300;
      
      map<string,int> :: iterator itr = m.begin() ;
      
      for_each( m.begin(),m.end(),[](pair<string,int>element)   // where [](pair<string,int>element)
      {                                                         // is a callback function
          string keys = element.first ;
          int values = element.second ;
          cout<<keys<< "=>"<<values<<endl ; 
         
      });
      return 0;
      
    }  

#include <iostream>
#include<vector>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   for(int i=0;i<t;i++){
       int tem;
      cin>>n;
      vector<int>a(26);
      //a.resize(26);
      vector<int> :: iterator itr ;
      for(int i=0;i<n;i++){
          string s;
          cin>>s;
          for(int j=0;j<s.size();j++)
          {
              int k = s[j] - 'a' ;  //lets say character 'b' is fetched,
                                    // so according to this line, 67 - 66(whch is ascii value of 'a'),
                                    //so it give 1(second index of vector a)
              a[k]++ ;                
          }
      }
      for(int j=0;j<26;j++)
      {
          tem = 0 ;
          if(a[j]%n != 0){
              cout<<"NO";
              tem++;
              break;
          }
     }
     if(tem ==0){
     cout<<"YES";
     }
      
   }
    return 0;
}


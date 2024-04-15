#include <iostream>
using namespace std;
int main() {
  int num[7]={9,0,7,8,4,1,2};
  for(int i=6;i>=0;i--)
   {
      for(int j=0;j<=i-1;j++)
      {
          if(num[j]>num[j+1])
          {
             int swap=num[j+1];
             num[j+1]=num[j];
             num[j]=swap;
          }
      }
   }
  

 for(int i=0;i<7;i++)
  {
     cout<<num[i];
  }
  
    return 0;
}

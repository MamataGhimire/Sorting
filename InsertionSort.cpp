#include <iostream>
using namespace std;
int main() {
    int num[7]={2,8,2,0,1,3,8};
    for(int i=0;i<7;i++)
    {   
        int j=i;
        while(j!=0 && num[j]<num[j-1])
        {
            int swap=num[j];
            num[j]=num[j-1];
            num[j-1]=swap;
            j--;
        }
    }
     for(int i=0;i<7;i++)
     {
         cout<<num[i];
     }
    
    return 0;
}

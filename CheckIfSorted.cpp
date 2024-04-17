#include <iostream>
using namespace std;
int main() 
{
    int num[7]={2,1,2,3,4,4,9};
    for(int i=0;i<6;i++ )
    {
        if(num[i]<=num[i+1] )
        {
          
        }
        else 
        {
            cout<<"array is not sorted";
            return 0;
        }
    }
    
    cout<<"array is sorted";
    
    return 0;
    
    
}

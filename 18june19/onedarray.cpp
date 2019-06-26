#include <iostream>
#include <string>
using namespace std;

int main()

{
    int s=5;
 cout<<"Enter 5 elements\n";
int *arr=new int [s] ;


for(int i=0; i<s; i++){
    cin>>arr[i];

}
   for(int i=0; i<s; i++){
    cout<<arr[i];
   }
   delete[]arr;
   return 0;

}


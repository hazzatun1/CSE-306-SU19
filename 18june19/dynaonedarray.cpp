#include <iostream>
#include <string>
using namespace std;

int main()

{
     cout<<"Enter elements no ---\n";
    int s;
cin>>s;
 cout<<"Enter " <<s; cout<<" elements\n";
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

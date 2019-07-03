#include <iostream>
#include<fstream>

using namespace std;

void bubbleSort(int arr[], int n)
{

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

void insertionSort(int arr[], int n)
{

    // 9 4 3
    int i, key, index;
    for(int i=1; i<n; i++)
    {
        key=arr[i];// 4;
        index=i-1; // 0 -> arr[0]->9;
        while(index>=0 && arr[index]> key)
        {
            arr[index+1]=arr[index];
            index=i-1;
        }
        arr[index+1]=key;
    }



}
int main()
{

    ifstream fileInput;// read from file
    fileInput.open("input.txt");
    int n;
    fileInput >> n;
    int *arr=new int[n];
    for(int i=0; i< n; i++)
    {
        fileInput >> arr[i];
    }
    // after completing reading
    fileInput.close();


    //sorting
    //  bubbleSort(arr, n);
    insertionSort(arr, n);
    //n=???
  //  cout << "after function call  :"<<n << " ";

    ofstream fileOutput;

    fileOutput.open("output.txt");

    for(int i=0; i<n; i++)
    {
        fileOutput << arr[i]<< " ";

    }
    fileOutput.close();

    delete[] arr;

    return 0;
}

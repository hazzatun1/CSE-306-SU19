#include <iostream>
#include<fstream>
#include<ctime>
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

int main()
{

    ifstream fileInput;// read from file
    fileInput.open("100.txt");
    int n;
    fileInput >> n;
    int *arr=new int[n];
    for(int i=0; i< n; i++)
    {
        fileInput >> arr[i];
    }
    // after completing reading
    fileInput.close();


//track start time
    clock_t starTime=clock();
    bubbleSort(arr, n);
// track end time
    clock_t endTime=clock();
    // count the time lapse
    double timeLapse=double(endTime-starTime)/CLOCKS_PER_SEC;
    cout <<"It takes :"<< timeLapse;

    ofstream fileOutput;

    fileOutput.open("100_bubble_output.txt");

    for(int i=0; i<n; i++)
    {
        fileOutput << arr[i]<<endl;

    }
     fileOutput <<"It takes :"<< timeLapse<<endl;
    fileOutput.close();

    delete[] arr;

    return 0;
}

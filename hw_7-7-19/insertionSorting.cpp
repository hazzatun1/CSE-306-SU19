#include <iostream>
#include<fstream>
#include<ctime>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(arr, n);
// track end time
    clock_t endTime=clock();
    // count the time lapse
    double timeLapse=double(endTime-starTime)/CLOCKS_PER_SEC;
    cout <<"It takes :"<< timeLapse;

    ofstream fileOutput;

    fileOutput.open("100_insertion_output.txt");

    for(int i=0; i<n; i++)
    {
        fileOutput << arr[i]<<endl;

    }
     fileOutput <<"It takes :"<< timeLapse<<endl;
    fileOutput.close();

    delete[] arr;

    return 0;
}

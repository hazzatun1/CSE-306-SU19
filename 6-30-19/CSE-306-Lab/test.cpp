
#include <iostream>
#include<fstream>

using namespace std;

int main()
{

    int row, column;
   // take row column from file
   ifstream fileInput;// read from file
   fileInput.open("input.txt");
   fileInput >> row >> column;

   //cout<< row <<"--" <<column;

  // declaring a 2D array
  int ** array;

   array=new int* [row];

   for (int i=0;i<row; i++){

       array[i]=new int [column];
   }


   //take grid input from the file
   for(int i=0; i < row; i++){

       for(int j=0; j< column; j++){

           fileInput>> array[i][j];
       }
   }


   ofstream fileOutput;

  fileOutput.open("output.txt",ios::app);
  // Print the taken array
  fileOutput <<"New output"<<endl;
   for(int i=0; i < row; i++){

       for(int j=0; j< column; j++){

           fileOutput<< array[i][j]*5<< " ";
       }
       fileOutput << endl;
   }


    return 0;
}

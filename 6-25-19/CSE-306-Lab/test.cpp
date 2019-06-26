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
  int ** arrays;
  int ** cparray;

   arrays=new int* [row];
   for (int i=0;i<row; i++){

       arrays[i]=new int [column];
   }


   //take grid input from the file
   for(int i=0; i < row; i++){

       for(int j=0; j< column; j++){


fileInput>>arrays[i][j];
       }
   }

   ofstream fileOutput;

  fileOutput.open("outputtr.txt",ios::app);
  // Print the taken array
  fileOutput <<"Transeposed new output"<<endl;
   for(int i=0; i < row; ++i){

       for(int j=0; j< column; ++j){

           fileOutput<< arrays[j][i]<< " ";
       }
       fileOutput << endl;
   }


    return 0;
}

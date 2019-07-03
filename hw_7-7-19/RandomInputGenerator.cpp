#include <iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    ofstream fileWritter;

    srand(89344554);
    fileWritter.open("1M.txt");
    int base=1000000;
 fileWritter << base << endl;
    //track start time
    clock_t starTime=clock();

    for(int i=0; i<base; i++)
    {
        fileWritter << rand() << endl;
    }

    // track end time
    clock_t endTime=clock();
    // count the time lapse
    double timeLapse=double(endTime-starTime)/CLOCKS_PER_SEC;

    cout << timeLapse<< endl;

    fileWritter.close();

    return 0;
}

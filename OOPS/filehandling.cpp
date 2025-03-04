#include<iostream>
#include<fstream>
using namespace std;

int main()
{   
    ofstream fout;
    fout.open("outfile.txt");
    fout<<"Hello this is output file";
    fout.close();
    return 0;
}


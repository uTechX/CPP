
#include<iostream>
//#define _FILE_INPUT_

#ifdef _FILE_INPUT_
    #include<fstream>
    #include<string>
#endif

using namespace std;

int main(void)
{
    int iCountN = 0;
    int iSum = 0;
  
// Input 
#ifdef _FILE_INPUT_
    // File Open
    ifstream fin ("PrintStar.in");
    ofstream fout("PrintStar.out");
   
    if(!fin.is_open())
    {
        cout << " File open Error" << endl;
        exit(0);
    }
    // File input
    fin >> a >> b;

#else
    // Key Input
    scanf("%d", &iCountN);

    // Check Input Number
    if(iCountN>10000 || iCountN<0)
        exit(0);

#endif

// Alogrithm Body
    // sum
    for(int i=0 ;i<=iCountN ;i++)
        iSum += i;

// Output
#ifdef _FILE_INPUT_
    // File Output
    fout << result;
#else
    // Screen Ouptput
    // print sum
    cout << iSum << endl;

#endif
 
}
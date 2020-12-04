/*
ID: jay.dct1
TASK: ride 
PROG: ride 
LANG: C++
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
  
int MultipleChar(string s) 
{
    int ret = 1;
    for (int i = 0; i < s.length(); i++) 
        ret *= s[i] - 'A' + 1;
    
    return ret;
}
 
int main() 
{
    ofstream fout("ride.out");
    ifstream fin("ride.in");
 
    string line1;
    string line2;
    fin >> line1 >> line2;
 
    fout << (MultipleChar(line1) % 47 == MultipleChar(line2) % 47 ? "GO" : "STAY") << endl;
 
    return 0;
}


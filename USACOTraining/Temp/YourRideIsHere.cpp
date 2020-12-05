/*
ID: 10002181
LANG: C++
TASK: ride
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream fout("ride.out");
    ifstream fin("ride.in");

    if (!fin)
    {sdf
        cout << "Error, no such file exists - fin" << endl;
        exit(0);
    }

    if (!fou)
    { 
        cout << "Error, no such file exists - fout" << endl;
        exit(0);
    }


    char input;
    while (!fin.eof())
    {
        fin >> input;
        cout << input << endl;
    }

/*
    string str[2];
    int res[2] = {1, 1};
    fin >> str[0] >> str[1];
    cout << str[0];
    cout << "\n";
    cout << str[1];
*/
  
    /*
    for(int x = 0; x < 2; x++) {
        for(int i = 0; i < str[x].size(); i++) {
            res[x] *= str[x][i] - 'A' + 1;
        }
    }
    fout << (res[0] % 47 == res[1] % 47 ? "GO" : "STAY") << endl;
    */
    exit(0);
}
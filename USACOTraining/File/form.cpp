/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: your_id_here
TASK: test
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("form.out");
    ifstream fin ("form.in");

    if(!fin.is_open())
    {
        cout << " File open Error" << endl;
        exit(0);
    }

    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}
/*
ID: jay.dct1
Name: Broken Necklace 
TASK: beads 
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int N;
string beads;
 
char getBead(int pos)
{
    while (pos < 0)
        pos += N;
    pos %= N;
 
    return beads[pos];
}
 
int bruteForce(int pos, int dir) 
{
    int ret;
    int position;
    char preBead = 'w';
 
    if (dir == 1) 
        position = pos;
    else
        position = pos - 1;
    
    for (ret = 0; ret < N; ret++) 
    {
        if (preBead == 'w' && getBead(position) != 'w')
            preBead = getBead(position);
 
        if (preBead != 'w' && getBead(position) != 'w' && getBead(position) != preBead)
            break;
        position += dir;
    }
    return ret;
}
 
 
int main() 
{
    ofstream fout("beads.out");
    ifstream fin("beads.in");
    
    fin >> N;
    fin >> beads;
 
    int ret = 0;
 
    for (int i = 0; i < N; i++) 
        ret = max(ret, bruteForce(i, -1) + bruteForce(i, 1));
 
    if (ret > N) 
        ret = N;
 
    fout << ret << endl;
 
    return 0;
}
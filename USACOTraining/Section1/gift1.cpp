/*
ID: jay.dct1
Name: Greedy Gift Givers 
TASK: gift1 
LANG: C++
*/

#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>

using namespace std;
 
 
int main()
{
    ofstream fout("gift1.out");
    ifstream fin("gift1.in");
    int NP;
    unordered_map<string, int> members;
    fin >> NP;
 
    for (int i = 0; i < NP; i++)
    {
        string name;
        fin >> name;
        members.insert(make_pair(name, 0));
    }
 
    string input;
    string giver = "";
    int totalMoney = -1;
    int leftReceivers = -1;
    int money = 0;
 
    while (fin >> input)
    {
        if (giver == "")
        {
            giver = input;
        }
        else if (totalMoney == -1)
        {
            totalMoney = stoi(input);
        }
        else if (leftReceivers == -1)
        {
            leftReceivers = stoi(input);
            if (totalMoney == 0)
                money = 0;
            else
                money = totalMoney / leftReceivers;
            members[giver] -= (money * leftReceivers);
            if (leftReceivers == 0)
            {
                giver = "";
                totalMoney = -1;
                leftReceivers = -1;
            }
        }
        else if (leftReceivers > 0)
        {
            members[input] += money;
            leftReceivers--;
            if (leftReceivers == 0)
            {
                giver = "";
                totalMoney = -1;
                leftReceivers = -1;
            }
        }
    }
 
 
    for (unordered_map<string, int>::iterator it = members.begin(); it != members.end(); it++)
    {
        fout << it->first << " " << it->second << endl;
    }
 
    return 0;
}
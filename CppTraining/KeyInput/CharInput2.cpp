//#include <string>
#include <iostream>

using namespace std;

int main()
{
    
    string InputString;
    //c++
    //cout << "Boy I Love Bacon \n" << endl;
    //cout << " and Ham";
    cout << " Input your name\n";
    //cin >> InputString;
    getline(cin, InputString);
    cout << " Your name is " << InputString << endl;
    

    return 0;

}
#include <iostream>

using namespace std;

int main()
{
    int number = 2;
    float fnumber = 10.54;

    int sum = number + fnumber;
    /*
    //c
    printf("Boy I Love Bacon\n");
    printf("Boy I Love Bacon %d\n", number);
    printf("Boy I Love Bacon %f\n", (float)number);
    */
    
    //c++
    //cout << "Boy I Love Bacon \n" << endl;
    //cout << " and Ham";

    cout << "Do you want to output number?" << fnumber << endl;
    cout << "Do you want to output number?\t" << fnumber << endl;
    cout << sum;
    return 0;

}
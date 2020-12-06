#include <iostream>

int main()
{
    char cInput='0';
    int  iInput=0;

    //char InputString[5]= {'H', 'e', '\0', 'l', 'o'};
    // Make an Error
    //char InputString[5]= "Hello";
    
    char InputString[10]= "Hello";

    char *pInputString = "Hello Point";
    //c
 
    //fgets(InputChar, 10, stdin);
    //printf("%d, %c\n", cInput, iInput);
    printf("%s, %d\n", InputString, sizeof(InputString));
    printf("%s, %d\n", InputString, strlen(InputString));
    printf("%s, %d\n", pInputString, strlen(pInputString));
    //c++f
    //cout << "Boy I Love Bacon \n" << endl;
    //cout << " and Ham";
    return 0;

}
#include<iostream>

const int ArSize = 20;
int main()
{
    using namespace std;
    char name[ArSize];
    char *pn = name;
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Heer is your name, verticalized and ASCLLized:\n";
    while (*pn)
    {
        cout << *pn << ": " << int(*pn) << endl;
        pn++;
    }

    return 0;
}
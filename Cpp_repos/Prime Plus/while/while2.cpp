#include<iostream>
#include<string>

int main()
{
    using namespace std;
    string name;
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Heer is your name, verticalized and ASCLLized:\n";
    int i = 0;
    while (name[i])
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    cout << name[i-2] << endl;

    return 0;
}
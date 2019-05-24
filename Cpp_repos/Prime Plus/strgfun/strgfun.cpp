#include<iostream>
#include<string>

unsigned int c_in_str (const char * str, char ch);

int main ()
{
    using namespace std;
    char mmm[15] = "minimum";
    const char * wail = "ululate";
    //string oword = "overflow";


    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    //unsigned int os = c_in_str(oword, 'o'); not allowed
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    //cout << os << " o characters in " << oword << endl;

    return 0;
}

unsigned int c_in_str (const char * str, char ch)
{
    unsigned int count = 0;
    while (*str)
    {
        if (*str == ch)
            count++;
        str++;
    }
    
    return count;
}
#include<iostream>
#include<string>

int main()
{
    using namespace std;

    string num1, num2;
    cin >> num1;
    cin >> num2;
    if (num1=="0" || num2=="0")
        cout << "0" << endl;
        //return "0";

    int len1 = num1.length() - 1;
    int len2 = num2.length() - 1;
    int end = 220;
    int ret[221] = {0};
    for(int i=len1; i>=0; i--)
    {
        int offset = 0;
        for (int j=len2; j>=0; j--)
        {
            ret[end-offset] += (num1[i]-'0') * (num2[j]-'0');
            offset++;
        }
        end--;
    }

    for (int i=220; i>=0; i--)
    {
        if(ret[i]>=10)
        {
            ret[i-1] += ret[i]/10;
            ret[i] = ret[i] % 10;
        }
    }

    int start = 0;
    for(int i=0;i<221;i++)
    { 
        if(ret[i] != 0)
        {
            start = i;
            break;
        }
    }

    char res[221];
    int len = 0;
    for (;start<221;len++)
    {
        res[len] = ret[start++] + '0';
    }
    res[len] = '\0';

    cout << res << endl;


    return 0;
}
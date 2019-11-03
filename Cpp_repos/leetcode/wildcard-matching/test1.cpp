#include<iostream>
#include<string>

int main()
{
    using namespace std;

    string s, p;
    cin >> s;
    cin >> p;
    int s_pos = 0, p_pos = 0;
    int start_p = -1;
    int match = 0;
    while(s_pos < s.length())
    {
        if (p_pos<p.length() && (p[p_pos] == '?' || s[s_pos] == p[p_pos]))
        {
            s_pos++;
            p_pos++;
        }
        else if (p_pos < p.length() && p[p_pos] == '*')
        {
            start_p = p_pos;
            match = s_pos;
            p_pos++;
        }
        else if (start_p != -1)
        {
            p_pos = start_p + 1;
            match++;
            s_pos = match;
        }
        else
        {
            cout << false << endl;
            break;
            //return false;
        }
        cout << s_pos << ' ' << s[s_pos] << ' ' << p_pos << ' ' << p[p_pos];
        cout << " match = " << match << " start_p = " << start_p << endl;
    }

    while (p_pos < p.length() && p[p_pos] == '*')
        p_pos++;
            
    cout << (p_pos==p.length()) << endl;

    return 0;
}
#include<iostream>

int main()
{
    using namespace std;

    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    size_t cnt = 0;
    for (auto &row : ia)
        for (auto &col : row)
        {
            col = cnt;
            ++cnt;
        }

    for (const auto &row : ia)
        for (auto col : row)
            cout << col << endl;

    for (auto p = begin(ia); p != end(ia); ++p)
    {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << ' ';
        cout << endl;
    }    
    //cout << ia.size() << endl;
    return 0;
}
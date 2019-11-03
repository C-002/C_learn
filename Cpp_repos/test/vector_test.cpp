#include<iostream>
#include<vector>
#include<algorithm>


int main()
{
    int a[7] = {0, 2, 2, 4, 5, 1, 6};

    std::vector<int> v(a, a+7);

    v.erase(std::remove(v.begin(), v.end(), 2), v.end());

    std::cout << *(std::remove(v.begin(), v.end(), 2)) << std::endl;

    std::cout << v[2] << ' ' << v.size() << std::endl;
    return 0;
}
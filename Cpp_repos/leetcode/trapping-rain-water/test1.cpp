#include<iostream>

int main()
{
    using namespace std;
    int height[20];
    int size = 0;
    while(cin>>height[size])
    {
        size++;
    }

    int left = 0, right = size-1;
    int ans = 0;
    int left_max = 0, right_max = 0;
    while(left < right)
    {
        if (height[left]<height[right])
        {
            if (height[left]>=left_max)
                left_max = height[left];
            else
                ans += left_max - height[left];
            
            left++;
        }
        else
        {
            if (height[right]>=right_max)
                right_max = height[right];
            else
                ans += right_max - height[right];
            
            right--;
        }
        
    }

    cout << ans << endl;

    return 0;
}
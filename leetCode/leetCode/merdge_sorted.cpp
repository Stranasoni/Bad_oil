#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) //+4+
    {
        
        while (m > 0 && n > 0)//3+Σ(m+n-1,0)(3+ 
        {
            if (nums1[m - 1] >= nums2[n - 1])//+2+1+2+
            {
                nums1[m + n - 1] = nums1[m - 1];//+3+1+2+
                m -= 1;//+2
               

            }
            else {
                nums1[m + n - 1] = nums2[n - 1];//+3+1+2
                n -= 1;//+2)
            }
        }
        if (n > 0) {
            for (size_t i = 0; i < n; ++i) {
                nums1[i] = nums2[i];
            }
        }
            
        
    }
    //Худший случай 7+Σ(m+n-1,0)(3+5+6+2)+1 =16(m+n)+8 неправильно 
    //Лучший случай = const = 9 и пусть
};


class Solution2 {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto i = nums.begin(); i != nums.end();) {
            if (*i == val) i = nums.erase(i);
            else ++i;
        }
        return nums.size();
    }
    
};


int main()
{
    Solution2 sol = Solution2();
    vector<int> v1 = { 2, 0 , 3 , 2 ,2 ,8};
    vector<int> v2 = { 1 };
    int y =0;
    sol.removeElement(v1, 2);
    
    cin >> y;
}


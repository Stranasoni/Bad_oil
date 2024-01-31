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



int main()
{
    Solution sol = Solution();
    vector<int> v1 = { 2, 0 };
    vector<int> v2 = { 1 };
    sol.merge(v1, 1, v2, 1);
    std::cout << "Hello World!\n";
}


class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int ans=0;
        while(left<right){
    int w=(right-left)*min(height[left], height[right]);
    ans=max(ans,w);
    if(height[left]<height[right]){
        left++;
    }
    else {
      right--;
    }
   }  
   return ans;
  }
};
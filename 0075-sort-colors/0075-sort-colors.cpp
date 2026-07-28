class Solution {
public:
    void quickSort(vector<int>& arr,int low,int high) {
        if(low<high) {
            int pivotIndex=partition(arr,low,high);
            quickSort(arr,low,pivotIndex-1);
            quickSort(arr,pivotIndex+1,high);
        }
    }
    int partition(vector<int>& arr,int low,int high) {
        int pivot=arr[high];
        int i =low-1;
        for(int j=low;j<high;j++) {
            if(arr[j]<=pivot) {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        quickSort(nums,low,high);
    }
};
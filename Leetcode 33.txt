class Solution {
public:
    int binarySearch(vector<int>& arr, int start, int end, int key){
        int s = start;
        int e = end;
        int mid = s + ((e-s)/2);
        while (s <= e){
            if(arr[mid] == key){
                return mid;
            }
            if(arr[mid] < key){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + ((e-s)/2);
        }
        return -1;
    }
    int pivot(vector<int>& arr, int size){
        int s = 0;
        int e = size-1;
        int mid = s + ((e-s)/2);
        while(s<e){
            if(arr[mid] >= arr[0]){
                s=mid+1;
            }
            else{
                e = mid;
            }
            mid = s + ((e-s)/2);
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int Pivot = pivot(nums, size);
        if(target >= nums[Pivot]  && target <= nums[size-1]){
            return binarySearch(nums, Pivot, size-1, target);
        }
        else{
            return binarySearch(nums, 0, Pivot-1, target);
        }
    }
};
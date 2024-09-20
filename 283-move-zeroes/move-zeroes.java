class Solution {
    static void leftRotate(int[] arr , int start, int end){
        int element = arr[start];
        for(int i = start ; i < end ; i++){
            arr[i] = arr[i+1];
        }
        arr[end] = element;
    }

    public void moveZeroes(int[] nums) {
        if(nums.length == 1) return;
          int i = 0 ;
          int end = nums.length - 1;
        while(i<=end){
            if(nums[i] == 0){
                leftRotate(nums,i,nums.length-1);
                end--;
            }else{
                i++;
            }
    }
        }

    
}
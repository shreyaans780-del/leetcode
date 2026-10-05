/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int*ans=malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[i]*nums[i];
    }
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(ans[i]>ans[j]){
                int t=ans[i];
                ans[i]=ans[j];
                ans[j]=t;
            }
        }
    }
    *returnSize=numsSize;
    return ans;
}
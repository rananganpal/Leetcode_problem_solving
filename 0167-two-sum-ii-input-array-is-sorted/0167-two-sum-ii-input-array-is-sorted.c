/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
     *returnSize=2;
    int *ptr=(int*)malloc(*returnSize*sizeof(int));
    int st=0,end=numbersSize-1;
        while (st<=end){
            int sum=numbers[st]+numbers[end];
            if (sum<target){
                if (numbers [end]>numbers[st]){
                    st++;
                } else {
                    end--;
                }
            } else if (sum>target){
                if (numbers[end]>numbers[st]){
                    end--;
                } else {
                    st++;
                }
            } else {
                ptr[0]=st+1;
                ptr[1]=end+1;
                return ptr;
            }
        }
    *returnSize=0;
      free(ptr);
    return NULL;
}
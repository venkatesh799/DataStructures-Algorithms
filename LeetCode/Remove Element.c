//@venkatesh thirunagiri

/*Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2  */ 

int removeElement(int* nums, int numsSize, int val){
    int i,j=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i] != val)
        {
            nums[j++]=nums[i];
        }
    }
    return j;

}


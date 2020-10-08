/*

Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written.

Do the above modifications to the input array in place, do not return anything from your function.

 

Example 1:

Input: [1,0,2,3,0,4,5,0]
Output: null
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
Example 2:

Input: [1,2,3]
Output: null
Explanation: After calling your function, the input array is modified to: [1,2,3]

*/

// Solution:


void duplicateZeros(int* arr, int arrSize)
{
    int *ans[arrSize],j=0;
    for(int i=0;i<arrSize && j < arrSize;i++)
    {
        if(arr[i] == 0 && j+1 < arrSize)
        {
            ans[j++]=0;
            ans[j++]=0;
        }
        else
        {
            ans[j++]=arr[i];
        }
    }
    for(int i=0;i<arrSize;i++)
    {
        arr[i]=ans[i];
    }
}

'''
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
'''
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return []
        t=0
        b=len(matrix)-1
        l=0
        r=len(matrix[0])-1
        dir1=0
        ans=[]
        while t <= b and l <= r:
            if dir1 == 0:
                for x in range(l,r+1):
                    #print(matrix[t][x])
                    ans.append(matrix[t][x])
                t=t+1
            elif dir1 == 1:
                for x in range(t,b+1):
                    #print(matrix[x][r])
                    ans.append(matrix[x][r])
                r=r-1
            elif dir1 == 2:
                for x in range(r,l-1,-1):
                    #print(matrix[b][x])
                    ans.append(matrix[b][x])
                b=b-1
            elif dir1 == 3:
                for x in range(b,t-1,-1):
                    #print(matrix[x][l])
                    ans.append(matrix[x][l])
                l=l+1
            dir1=(dir1+1)%4
        return ans
                    
        
        

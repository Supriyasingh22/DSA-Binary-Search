// to find rows having maximum 1's while row is sorted in ascending order 

#include<iostream>
#include<limits.h>
using namespace std ;

int findOnes(int matrix[][20],int r ,int c)
{
    int s = INT_MAX ;
    
    int ans = -1;
    for(int i=0;i<r;i++)
    {
        int lb = 0 ;
        int ub = c -1 ;
        int mid ;
        int flag = 0 ;

        while(lb<=ub)
        {
            mid = lb+(ub-lb)/2 ;
            if(matrix[i][mid]==1)
            {

                ub =mid - 1;
                flag = 1 ;

            }
            else{
                lb = mid +1 ;
            }
        }

        if(flag == 1 && lb<s)
        {
            ans = i ;
            s=lb ;
        }
   }

   return ans ;
  
}

int main()
{
    int r , c ;
    cout<<"Enter no. of rows and columns : ";
    cin>>r>>c ;

    int matrix[20][20];

    cout<<"enter elements inside a martix ";
    for(int i = 0 ;i<r;i++)
    {
        for(int j = 0 ;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }

   int res =  findOnes(matrix,r,c);

   cout<<"rows having maximum ones are : "<<res ;
   return 0 ;

}
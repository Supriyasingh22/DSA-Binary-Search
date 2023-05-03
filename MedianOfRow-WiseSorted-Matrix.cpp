// To find median of row-wise sorted matrix 

#include<iostream>
using namespace std ;

int TotalLessEle(int matrix[200][200],int r,int c,int target)
{
    int count = 0 ;

    for(int i =0 ;i<r;i++)
    {
        int lb = 0 ;
        int ub = c-1;
        int mid ;
        // to count total no. of eleents less than the targeted median we are using 
        // binary search 
        while(lb<=ub)
        {
            mid = lb+(ub-lb)/2 ;
            if(matrix[i][mid]<=target)
            {
                lb = mid+1 ;
            }
            else 
            {
                ub = mid-1 ;
            }
        }
        count+=lb ;


    }
    return count ;

}

int findMedian(int r,int c,int matrix[200][200])
{
    int lb = 0 ;
    int ub = 2000 ;
    int assumeMed ;
    int N = r*c ;
    while(lb<=ub)
    {
        assumeMed = lb+(ub-lb)/2 ;
        // count total no. of elements lesser than assumed median 
        int count = TotalLessEle(matrix,r,c,assumeMed) ;
        if(count<=N/2)
        {
            lb = assumeMed+1 ;
        }
        else 
        {
            ub = assumeMed-1;
        }

    }

    return lb ;

}

int main()
{
    int r , c ;
    cout<<"Enter the rows and columns : ";
    cin>>r>>c ;

    int matrix[200][200];

    cout<<"Enter eleme ts inside the matrix : ";
    for(int i = 0 ;i<r;i++)
    {
        for(int j = 0 ;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int res = findMedian(r,c,matrix);
    cout<<"median is :"<<res ;
    return 0 ;
}
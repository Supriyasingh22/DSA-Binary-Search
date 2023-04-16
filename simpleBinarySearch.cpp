// to search elements in an array without using pre defined function 

#include<iostream>
using namespace std ;
void binarS(int arr[],int lb,int ub,int target)
{   
    if(lb>ub)
    {
        cout<<"element not found ";
        return ;
    }
    int mid ;
   
        mid = lb+(ub-lb)/2  ;
        if(arr[mid]==target)
        {
            cout<<"element is found ";
            return ;
        }
        else if (arr[mid]>target)
        {
            binarS(arr,lb,mid-1,target);
        }
        else
        binarS(arr,mid+1,ub,target);
        
}

int main()
{
    int arr[20];
    int n ;
    cout<<"enter the size of an array : ";
    cin>>n ;

    cout<<"entre elements insde an array : ";
    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }

    int num ;
    cout<<"enter the number to be searched : ";
    cin>>num ;

    binarS(arr,0,n-1,num);
    return 0 ;

}
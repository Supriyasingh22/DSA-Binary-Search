// to find last occurence of any given element 

#include<iostream>
using namespace std ;

int  lastOccurence(int arr[],int lb,int ub,int key,int &ans)
{
    if(lb>ub)
    {
        return ans ;
    }

    int mid = lb+(ub-lb)/2 ;

    if(arr[mid]==key)
    {
        ans = mid ;
        lastOccurence(arr,mid+1,ub,key,ans);
    }
    else if(arr[mid]>key)
    {
       
        lastOccurence(arr,lb,mid-1,key,ans); 
    }
    else
    {
    
    lastOccurence(arr,mid+1,ub,key,ans);
    }

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
    int ans=-1 ;

   ans = lastOccurence(arr,0,n-1,num,ans);
   if(ans!=-1)
   {
    cout<<"position of first occurence of element is "<<ans;
   }
   else 
   {
    cout<<"element not found : ";
   }

    return 0 ;

}
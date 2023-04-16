// to find the first occurence of a given element 

#include<iostream>
using namespace std ;

int  firstOccurence(int arr[],int lb,int ub,int key,int &ans)
{
    if(lb>ub)
    {
        return ans ;
    }

    int mid = lb+(ub-lb)/2 ;

    if(arr[mid]==key)
    {
        ans = mid ;
        firstOccurence(arr,lb,mid-1,key,ans);
    }
    else if(arr[mid]>key)
    {
        ub = mid-1 ;  
        firstOccurence(arr,lb,ub,key,ans); 
    }
    else
    {
    lb = mid+1 ;
    firstOccurence(arr,lb,ub,key,ans);
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

   ans = firstOccurence(arr,0,n-1,num,ans);
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
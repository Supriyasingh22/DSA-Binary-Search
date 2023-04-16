// TO optimize the linear serach we have jump search 

#include<iostream>
#include<math.h>
using namespace std ;

void jumpSearch(int arr[],int n,int key)
{
    int start = 0 ;
    int end = sqrt(n);
    int c = 0 ;

    while(arr[end]<key && start<n)
    {   
         c++;
        start=end;
        end = end + sqrt(n);
        if(end>n)
        {
        end=n ;
        }
       
    }

    for(int i = start ;i<=end;i++)
    {   
        c++;
        if(arr[i]==key)
        {
        cout<<"Element found "<<c ;
        return ;
        }
    }
    cout<<"Not present "<<c ;

    

}

int main()
{
    int t ;
    cout<<"Enter the number of Testcases : ";
    cin>>t ;

    while(t--)
    {
        int arr[20];
        int n ;
        cout<<"Enter the size : ";
        cin>>n ;

        cout<<"Enter the elements inside an array : ";
        for(int i = 0 ;i<n;i++)
        {
            cin>>arr[i];
        }

        int key ;
        cout<<"Enter the key to be found : ";
        cin>>key ;

        jumpSearch(arr,n-1,key);

    }

}

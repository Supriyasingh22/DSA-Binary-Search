// To find if the array are in ascceding or descending order and then based upon that 
//  we will find wheteher we should apply binary se3arch for ascending or descending order 

#include<iostream>
using namespace std ;

void binarySearchA(int arr[],int n,int key)
{
    int lb = 0 ;
    int ub = n-1 ;
    int mid ;

    while(lb<=ub)
    {
        mid = lb+(ub-lb)/2 ;

        if(arr[mid]==key)
        {
            cout<<"found at position"<<mid;
            return ;
        }
        else if(arr[mid]>key)
        {
            ub = mid -1 ;
        }
        else 
        {
            lb = mid+1 ;
        }
    }
}

void binarySearchD(int arr[],int n,int key)
{
    int lb = 0 ;
    int ub = n-1 ;
    int mid ;

    while(lb<=ub)
    {
        mid = lb+(ub-lb)/2 ;

        if(arr[mid]==key)
        {
            cout<<"found at position"<<mid;
            return ;
        }
        else if(arr[mid]>key)
        {
            lb = mid +1 ;
        }
        else 
        {
            ub = mid-1 ;
        }
    }
}



int main()
{
    int arr[20];
    int size ,key ;

    cout<<"Enter The Size of An array : ";
    cin>>size;

    cout<<"Enter elements inside an array: ";
    for(int i = 0 ;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key to be found : ";
    cin>>key ;

    if(arr[0]<arr[size-1])
    {
        cout<<"ARRAY IS IN ASECNEDING ORDER ";
        binarySearchA(arr,size,key);
    }
    else
    {
         cout<<"ARRAY IS IN DESECNEDING ORDER ";
        binarySearchD(arr,size,key);
    }

    return 0 ;
}
// to search for elements using pre defined function 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main()
{

    vector<int>v;
    int s ;
    cout<<"enter the size of vector";
    cin>>s ;

    cout<<"enter elements :";
    for(int i = 0 ;i<s;i++)
    {   
        int n ;
        cin>>n ;
        v.push_back(n);
    }

    int num ;
    cout<<"enter the number : ";
    cin>>num ;



    if(binary_search(v.begin(),v.end(),num))
    cout<<"found";
    else
    {
        cout<<"not found ";
    }
    return 0 ;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in sorted order: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int low=0,high=n-1,mid;
    bool found=false;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            found=true;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(found)
    {
        cout<<"Element found at index "<<mid<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
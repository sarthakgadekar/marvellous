// leader in an array

#include<iostream>
using namespace std;

void leaders(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        if(i==n-1)
        {
            cout<<arr[i]<<" ";
            return;
        }
        for(int j=i+1;j<n;j++)
        {   
            if(arr[i] <= arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
 int* arr=new int[7];
 for(int i=0;i<7;i++)
 {
    cin>>arr[i];
 }
 leaders(arr,7);
 return 0;
}
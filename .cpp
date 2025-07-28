#include <iostream>
using namespace std;
int main()
{

int i;
int n;
cout<<"enter the size of an array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{

    cin>>arr[i];
}
int sum=0;
int result;
for(int i=0;i<n;i++)
{
    sum+=arr[i];
}
result=sum/n;
cout<<"the avg is "<<result<<endl;
}

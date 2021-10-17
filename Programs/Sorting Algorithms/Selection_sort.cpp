#include<bits/stdc++.h>
using namespace std;
void selectionSort(int ar[],int n);
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    selectionSort(ar,n);
    return 0;

}
void selectionSort(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
          if(ar[j]<ar[min])
          min=j;
        }
         if(min !=i)
         {
             int temp=ar[i];
             ar[i]=ar[min];
             ar[min]=temp;
         }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;

    }
   
}

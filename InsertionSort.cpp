#include<iostream>
using namespace std;


void InsertionSort(int a[], int n)
{
    int i,j,x;

    for(i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];

        while(j>=0 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=x;
    }
}


void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int a[8]={9,6,4,8,2,6,12,14};
    InsertionSort(a,8);

    display(a,8);

    return 0;
}
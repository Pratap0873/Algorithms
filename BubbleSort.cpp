#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void BubbleSort(int a[], int n)
{
    int i,j,flag=0;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
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
    BubbleSort(a,8);

    display(a,8);


    
    return 0;
}
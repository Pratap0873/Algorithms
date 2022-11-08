#include<iostream>
using namespace std;


void merge(int a[], int l, int mid, int h)
{
    int i, j, k;

    int b[h+1];
    i=l;
    j=mid+1;
    k=l;

    while(i<=mid && j<=h)
    {
        if(a[i] < a[j])
        {
            b[k++]=a[i++];
        }

        else
        {
            b[k++]=a[j++];
        }
    }

    while(i<=mid)
    {
        b[k++]=a[i++];
    }

    while(j<=h)
    {
        b[k++]=a[j++];
    }

    for(int i=l;i<=h;i++)
    {
        a[i]=b[i];
    }
}


void MergeSort(int a[], int n)
{
    int p,i, l,mid, h;

    for(p=2;p<=n;p=p*2)
    {
        for(i=0;p+i-1<n;i=i+p)
        {
            l=i;
            h=p+i-1;
            mid=(l+h)/2;

            merge(a,l,mid,h);

        }
    }

    if(p/2<n)
    {
        merge(a,0,p/2,n-1);
    }
}



void RmergeSort(int a[], int l, int h)
{
    int mid;

    if(l<h)
    {
        mid=(l+h)/2;

        RmergeSort(a,l,mid);
        RmergeSort(a,mid+1,h);

        merge(a,l,mid,h);
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
    RmergeSort(a,0,7);

    display(a,8);

    
    
    return 0;
}
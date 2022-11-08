#include<iostream>
using namespace std;


void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}




int partition(int a[], int l, int h)
{
    int pivot=a[l];
    int i=l,j=h;

    do 
    {
        do 
        {
            i++;
        }while(a[i]<=pivot);

        do 
        {
            j--;
        }while(a[j]>pivot);

        if(i<j)
        {
            swap(a[i],a[j]);
        }

    }while(i<j);

    swap(a[l], a[j]);

    return j;
}




void QuickSort(int a[], int l, int h)
{
    int partitionIndex;

    if(l<h)
    {
        partitionIndex=partition(a,l,h);
        QuickSort(a,l,partitionIndex);
        QuickSort(a,partitionIndex+1,h);
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
    QuickSort(a,0,8);

    display(a,8);

    return 0;
}
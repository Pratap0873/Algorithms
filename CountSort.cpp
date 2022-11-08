#include<iostream>
using namespace std;


int findMax(int a[], int n)
{
    int max=INT32_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    return max;
}


void countSort(int a[], int n)
{
    int max;

    max=findMax(a,n);

    int *c=new int[max+1];

    for(int i=0;i<max+1;i++)
    {
        c[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }

    int i,j;
    i=j=0;

    while(i<max+1)
    {
        if(c[i]>0)
        {
            a[j++]=i;
            c[i]--;
        }
        else
        {
            i++;
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
    countSort(a,8);

    display(a,8);



    return 0;
}
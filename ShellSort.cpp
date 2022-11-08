#include<iostream>
using namespace std;


void shellSort(int a[], int n)
{
    int gap,i,j;

    for(gap=n/2;gap>=1;gap=gap/2)
    {
        for(i=gap;i<n;i++)
        {
            int temp=a[i];
            j=i-gap;

            while(j>=0 && a[j]>temp)
            {
                a[j+gap]=a[j];
                j=j-gap;
            }

            a[j+gap]=temp;
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
    shellSort(a,8);

    display(a,8);

    return 0;
}
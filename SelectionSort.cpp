#include<iostream>
using namespace std;



void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void selectionsort(int a[], int n)
{
    int i, j, k;

    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }

        swap(a[i],a[k]);
        
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
    selectionsort(a,8);

    display(a,8);

    
    return 0;
}
#include<iostream>
using namespace std;

class merge_sort
{
    public:

        void merge(int a[],int left,int mid,int right);
        //void merge_pass(int a[],int sort[],int n,int len);
        void mergesort(int arr[],int lb,int ub);

};

void merge_sort::merge(int arr[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;

    int arr1[n1];
    int arr2[n2];

    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[left+i];
    }

    for(int i=0;i<n2;i++)
    {
        arr2[i]=arr[mid+i+1];
    }

    //merging
    int i=0,j=0,len=left;

    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[len]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            arr[len]=arr2[j];
            j++;
        }
        len++;
    }

    //copying the remaining elements
    while(i<n1)
    {
        arr[len]=arr1[i];
        i++;
        len++;
    } 

    while(j<n2)
    {
        arr[len]=arr2[j];
        j++;
        len++;
    }
}

void merge_sort::mergesort(int arr[],int lb,int ub)
{
    if(ub<=lb)
        return;
    
    int mid=(lb+ub)/2;
    mergesort(arr,lb,mid);
    mergesort(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
}

int main()
{
    int size;
    cout<<"Enter the size of the array"<<"\n";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at position "<<i+1<<"\n";
        cin>>arr[i];
    }

    merge_sort ob;
    ob.mergesort(arr,0,size-1);
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;
}
#include<iostream>
using namespace std;

class quick_sort
{
    public:

        int partition(int arr[],int low,int high);
        void quicksort(int arr[],int low,int high);

};

int quick_sort::partition(int arr[],int low,int high)
{

    int pivot=arr[low];
    int i=low+1,j=high;
    while(i<=j)
    {
        if(arr[i]>pivot && arr[j]<pivot)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        else
        {
            if(arr[i]<pivot)
                i++;
            if(arr[j]>=pivot)
                j--;
        }
        
    }
    if(pivot>arr[j] || pivot<arr[i])
    {
        int temp=arr[j];
        arr[j]=arr[0];
        arr[0]=temp;
    }
    return j;
}

void quick_sort::quicksort(int arr[],int low,int high)
{
    if(low<=high)
    {   
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}

int main()
{
    cout<<"Enter size"<<"\n";
    int size;
    cin>>size;
    int arr[size];

    cout<<"Enter the elements"<<"\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    quick_sort ob;
    ob.quicksort(arr,0,size-1);
    //ob.partition(arr,arr[0],size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
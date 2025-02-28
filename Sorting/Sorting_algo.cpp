#include<iostream>
#include<random>
#include<string>

using namespace std;

void display(string sort_name,int* arr,int n)
{
    cout<<endl<<sort_name<<":";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insertion_sort(int* arr, int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;

    }

    display("Insertion Sort",arr,n);
}

void selection_sort(int* arr, int n)
{
    int min_index;

    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }

        swap(arr[i],arr[min_index]);
    }


    display("Selection Sort",arr,n);
}


void bubble_sort(int* arr,int n)
{
    bool check_swap;
    for(int i=0;i<n-1;i++)
    {
        check_swap=false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                check_swap=true;
            }
        }
        if(!check_swap){break;}
    }

    display("Bubble   Sort",arr,n);
}

int main()
{
    int n;
    int *arr =new int[n];
    cout<<"enter the size of array SHOULD BE LEASS THAN 51 \n";   // for compact
    cin>>n;

    /*
        getting array inputs through random function
    
    */

    int min=5,max=60;
    random_device rd;       //random device and seeding the generator
    mt19937 gen(rd());

    uniform_int_distribution<int> dist(min,max);     //defining distribution

    int random_number;   // random number generation


    // storing in array

    for(int i=0;i<n;i++)
    {
        random_number=dist(gen);
        *(arr+i)=random_number;
    }

    cout<<"\nOriginal Data:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<string(2,'\n');

    bubble_sort(arr,n);
    selection_sort(arr,n);
    insertion_sort(arr,n);

    return 0;
}
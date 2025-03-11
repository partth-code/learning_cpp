#include<iostream>

int  b_sort(int arr[],int size);
int main()
{
    int values[] = {10,1,9,2,8,3,7,4,6,5};

    b_sort(values,sizeof(values)/sizeof(values[0]));

    return 0;
}

int b_sort(int arr[],int size)
{
    //it should be performed until  whole array is sorted
    bool sorted = true;

    for (int i = 0 ; i<size-1; i++)
    {
        if (arr[i]>arr[i+1])
        { 
            
            sorted = false;
         
         
        }
        
         while (!sorted)
         {
            
            for(int j =0; j<size-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    
                }
            }
            sorted = true;
         }
    }

    int new_arr[size];

    std::copy(arr,arr+size,new_arr);

    for(int num:new_arr)
    {
        std::cout<<num<<" ";
    }

    return 0;
}

void correct_b_sort(int arr[],int size)
{
    bool sorted = true;

    do
    {
        for(int i = 0;i<=size-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                std::swap(arr[i],arr[i+1]);
                sorted = false;
            }
        }
       
    } while (!sorted);
    
}
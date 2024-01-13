#include <stdio.h>

int binarySearch(int *arr,int target,int leng)
{
    int low = 0;
    int high = leng-1;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            int low_New = low;
            int mid_New = mid;
            int high_New = mid - 1;
            while(low_New <= high_New)
            {
                mid_New = low_New + (high_New-low_New)/2;
                if(arr[mid_New] == target)
                {
                    high_New = mid_New-1;
                }else if(arr[mid_New] < target)
                {
                    low_New = mid_New + 1;
                }
            }
            return low_New+1;
        }else if(arr[mid] > target)
        {
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}


int main() {
    int n1, n2;
    int arrq[100001], arra[100001];
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arrq[i]);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arra[i]);
  
    for (int i = 0; i < n2; i++) {
        int result = binarySearch(arrq, arra[i], n1);
        printf("%d\n", result);
    }

    return 0;
}


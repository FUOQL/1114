#include <stdio.h>
int main(){
    int nums[10] = {55,43,35,11,32,34,67,100,66,45}; 
    int i, j, temp;
    for(i=0; i<10-1; i++){//每一轮比较前 n-1-i 个，排序好的最后 i 个不用比较
        for(j=0; j<10-1-i; j++){//原理：i代表了第几轮，每i轮过去了，前i个就已经排好了不用比较换位了
            if(nums[j] > nums[j+1]){//从小到大前面的比后面大的话就需要换位，从大到小相反
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
   
    //输出排序后的数组
    for(i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
   
    return 0;
}



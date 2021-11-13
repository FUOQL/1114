#include<iostream>
using namespace std;
 
void print(int a[], int n)
{  
    for(int j= 0; j<n; j++)
 {  
           cout<<a[j] <<"  ";  
        }  
    cout<<endl;  
}  
 
void quickSort(int a[], int low ,int high)
{
 if(low<high)  //判断是否满足排序条件，递归的终止条件
 {
  int i = low, j = high;   //把待排序数组元素的第一个和最后一个下标分别赋值给i,j，使用i,j进行排序；
  int x = a[low];    //将待排序数组的第一个元素作为哨兵，将数组划分为大于哨兵以及小于哨兵的两部分                                   
  while(i<j)  
  {
    while(i<j && a[j] >= x) j--;  //从最右侧元素开始，如果比X大，那么它的位置就正确，然后判断前一个元素，直到不满足条件
    if(i<j) a[i++] = a[j];   //把不满足位次条件的那个元素值赋值给第一个元素，（也即是X元素，此时X已经保存在x中，不会丢失）并把i的加1
    while(i<j && a[i] <= x) i++; //换成左侧下标为i的元素开始与X比较大小，比其小，那么它所处的位置就正确，然后判断后一个，直到不满足条件
    if(i<j) a[j--] = a[i];  //把不满足位次条件的那个元素值赋值给下标为j的元素，（下标为j的元素已经保存到前面，不会丢失）并把j的加1
  } 
         a[i] = x;   //完成一次排序，把X赋值到下标为i的位置，即前面的都比它小，后面的都比它大
  quickSort(a, low ,i-1);  //递归进行X前后两部分元素排序 ， low,high的值不发生变化，i处于中间
  quickSort(a, i+1 ,high);
 }
}
 
int main()
{  
    int a[10] = {55,43,35,11,32,34,67,100,66,45}; 
    cout<<"初始序列：";  
    print(a,10);  
    quickSort(a,0,9);  
    cout<<"排序结果：";  
    print(a,10);  
    system("pause"); 
} 
 
 



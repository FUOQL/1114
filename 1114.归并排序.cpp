#include <iostream>
using namespace std;
void print(int a[], int n)
{  
    for(int j= 0; j<n; j++)
 {  
           cout<<a[j] <<"  ";  
        }  
    cout<<endl;  
}  
void mergesort(int a[],int n)
{
	int start, mid, end;
	int n1 = mid - start + 1;//左边数组段的大小
	 int n2 = end - mid;//右边数组段的大小
	 int *left,*right;//C++不支持变量作为数组长度，所以只能通过指针来动态申请空间，实现动数组长度的变量赋值
	 left=new int[n1], right=new int[n2];//数组left用来放左边的数组段，right数组用来放右边的数组段
	 int i, j, k;
	 for (i = 0; i < n1; i++)//把原数组左边的部分放到left数组中
	  left[i] = a[start+i];
	 for (j = 0; j < n2; j++) //把原数组右边的部分放到right数组中
	  right[j] = a[mid+1+j];
	 
	 i = j = 0;
	 k = start;
	 while (i < n1 && j < n2)//将两个数组（数组left和数组right按序放到数组a中）
	  if (left[i] < right[j])
	   a[k++] = left[i++];
	  else
	   a[k++] = right[j++];
	 
	 while (i < n1) //以下两个while是将任何一个还有数据剩余的数组中的剩余数据放入数组a中。
	  a[k++] = left[i++];
	 while (j < n2) 
	  a[k++] = right[j++];
}
int main()
{  
    int a[] = {55,43,35,11,32,34,67,100,66,45};  
    cout<<"初始序列：";  
    print(a,10);  
    mergesort(a,10);  
    cout<<"排序结果：";  
    print(a,10);  
    system("pause"); 
} 
 

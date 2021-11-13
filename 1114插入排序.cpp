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
void Insertsort(int a[], int  n)
{
   for (int i = 1; i < n; i++){  //从第二个开始，因为是往前面找
       int p=i;  //记下位置
       int value=a[i];  //记下元素
       while(p>0&&a[p-1]>value){ //只要前面还有数并且小于前面的数
           a[p]=a[p-1];  //往后移
           p--;   //往前跑
        }
       a[p]=value;  //把数据放进去
    }
}

int main()
{  
    int a[10] = {55,43,35,11,32,34,67,100,66,45};  
    cout<<"初始序列：";  
    print(a,10);  
    Insertsort(a,10);  
    cout<<"排序结果：";  
    print(a,10);  
    system("pause"); 
} 
 

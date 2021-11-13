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
void selectsort(int a[], int  n)
{

    for (int i = 0;i < n-1;i++) {  //循环到n-1最后一个不用找最小值
        int minn = a[i];   //默认第i个为最小值
        int p = i;     //记录最小值的位置
        for (int j = i+1;j < n;j++) { //由于自己不用和自己比，所以从i+1开始找最小值
            if (a[j] < minn) {
                minn = a[j];
                p = j;
            }
        }
       if(p!=i)   //如果这个数已经在它应在的位置上了就不用交换
         swap(a[i],a[p]);
    }
}
int main()
{  
    int a[10] = {55,43,35,11,32,34,67,100,66,45};  
    cout<<"初始序列：";  
    print(a,10);  
    selectsort(a,10);  
    cout<<"排序结果：";  
    print(a,10);  
    system("pause"); 
} 
 


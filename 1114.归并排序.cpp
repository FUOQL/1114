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
	int n1 = mid - start + 1;//�������εĴ�С
	 int n2 = end - mid;//�ұ�����εĴ�С
	 int *left,*right;//C++��֧�ֱ�����Ϊ���鳤�ȣ�����ֻ��ͨ��ָ������̬����ռ䣬ʵ�ֶ����鳤�ȵı�����ֵ
	 left=new int[n1], right=new int[n2];//����left��������ߵ�����Σ�right�����������ұߵ������
	 int i, j, k;
	 for (i = 0; i < n1; i++)//��ԭ������ߵĲ��ַŵ�left������
	  left[i] = a[start+i];
	 for (j = 0; j < n2; j++) //��ԭ�����ұߵĲ��ַŵ�right������
	  right[j] = a[mid+1+j];
	 
	 i = j = 0;
	 k = start;
	 while (i < n1 && j < n2)//���������飨����left������right����ŵ�����a�У�
	  if (left[i] < right[j])
	   a[k++] = left[i++];
	  else
	   a[k++] = right[j++];
	 
	 while (i < n1) //��������while�ǽ��κ�һ����������ʣ��������е�ʣ�����ݷ�������a�С�
	  a[k++] = left[i++];
	 while (j < n2) 
	  a[k++] = right[j++];
}
int main()
{  
    int a[] = {55,43,35,11,32,34,67,100,66,45};  
    cout<<"��ʼ���У�";  
    print(a,10);  
    mergesort(a,10);  
    cout<<"��������";  
    print(a,10);  
    system("pause"); 
} 
 

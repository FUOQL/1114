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
   for (int i = 1; i < n; i++){  //�ӵڶ�����ʼ����Ϊ����ǰ����
       int p=i;  //����λ��
       int value=a[i];  //����Ԫ��
       while(p>0&&a[p-1]>value){ //ֻҪǰ�滹��������С��ǰ�����
           a[p]=a[p-1];  //������
           p--;   //��ǰ��
        }
       a[p]=value;  //�����ݷŽ�ȥ
    }
}

int main()
{  
    int a[10] = {55,43,35,11,32,34,67,100,66,45};  
    cout<<"��ʼ���У�";  
    print(a,10);  
    Insertsort(a,10);  
    cout<<"��������";  
    print(a,10);  
    system("pause"); 
} 
 

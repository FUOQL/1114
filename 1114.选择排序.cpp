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

    for (int i = 0;i < n-1;i++) {  //ѭ����n-1���һ����������Сֵ
        int minn = a[i];   //Ĭ�ϵ�i��Ϊ��Сֵ
        int p = i;     //��¼��Сֵ��λ��
        for (int j = i+1;j < n;j++) { //�����Լ����ú��Լ��ȣ����Դ�i+1��ʼ����Сֵ
            if (a[j] < minn) {
                minn = a[j];
                p = j;
            }
        }
       if(p!=i)   //���������Ѿ�����Ӧ�ڵ�λ�����˾Ͳ��ý���
         swap(a[i],a[p]);
    }
}
int main()
{  
    int a[10] = {55,43,35,11,32,34,67,100,66,45};  
    cout<<"��ʼ���У�";  
    print(a,10);  
    selectsort(a,10);  
    cout<<"��������";  
    print(a,10);  
    system("pause"); 
} 
 


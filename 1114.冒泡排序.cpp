#include <stdio.h>
int main(){
    int nums[10] = {55,43,35,11,32,34,67,100,66,45}; 
    int i, j, temp;
    for(i=0; i<10-1; i++){//ÿһ�ֱȽ�ǰ n-1-i ��������õ���� i �����ñȽ�
        for(j=0; j<10-1-i; j++){//ԭ��i�����˵ڼ��֣�ÿi�ֹ�ȥ�ˣ�ǰi�����Ѿ��ź��˲��ñȽϻ�λ��
            if(nums[j] > nums[j+1]){//��С����ǰ��ıȺ����Ļ�����Ҫ��λ���Ӵ�С�෴
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
   
    //�������������
    for(i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
   
    return 0;
}



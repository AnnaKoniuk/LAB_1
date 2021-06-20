#include "header.h"
//�����������, ������� ������ ��������� ��������, ��� ������, �� � ����� ���� ��������
Stack::Stack(){
        top = -1;
}
//���������� �� ������
Stack::~Stack(){
        cout<<"Destructor"<<endl;
}
//������� ���������, ���� �-��� �������� ����� �� ����., �������, � ������ ������� �������� ������� �� ����
void Stack::push(int value){
        if(top==SIZE-1){
            return;
        }
        arr[++top] = value;
}
//�-��� ���������, �������� ������� ����� �� ���� �� �������� ��������� �������
int Stack::pop(){
        if(top==-1){
            return -1;
        }
        return arr[top--];
}
//������� �-��� ��������
int Stack::getcount(){
        return top+1;
}
//��������� ��������, �� ���� ����� ������� �����, ���� � ���� ���������� ���� �������� ��� ����������� ���������
//������ ���������, �������� ���� ���� �����
int Stack::getmax(){
        if(top<0){
            return -1;
        }
        if(top==0){
            return arr[0];
        }
        int max = arr[0];
        for(int i=0;i<top+1;i++){
            if(max<arr[i]){
                max = arr[i];
            }
        }
        return max;
}
//��������� �� � � ��������
int Stack::getmin(){
        if(top<0){
            return -1;
        }
        if(top==0){
            return arr[0];
        }
        int min = arr[0];
        for(int i=0;i<top+1;i++){
            if(min>arr[i]){
                min = arr[i];
            }
        }
        return min;
}
//��������� �����, � ���� ��������� �������� � ������� � cout
void Stack::put(){
        if(top==-1){
            return;
        }
        for(int i=0;i<top+1;i++){
            cout<<arr[i]<<endl;
        }
}

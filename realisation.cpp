#include "header.h"
//конструктор, присвоєю вершині початкове значення, яке означає, що в стеку немає елементів
Stack::Stack(){
        top = -1;
}
//деструктор за умовою
Stack::~Stack(){
        cout<<"Destructor"<<endl;
}
//функція додавання, якщо к-сть елементів більша за макс., виходим, в іншому випадку збільшуємо вершину на один
void Stack::push(int value){
        if(top==SIZE-1){
            return;
        }
        arr[++top] = value;
}
//ф-ція видалення, зменшуємо вершину стеку на один та повертаєм видалений елемент
int Stack::pop(){
        if(top==-1){
            return -1;
        }
        return arr[top--];
}
//повертає к-сть елементів
int Stack::getcount(){
        return top+1;
}
//знаходить максимум, за макс берем початок стеку, потім в циклі перебираємо інші значення для знаходження можливого
//нового максимуму, повертаєм його після циклу
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
//аналогічне що і в максимумі
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
//виведення стеку, в циклі перебираєм значення і виводим в cout
void Stack::put(){
        if(top==-1){
            return;
        }
        for(int i=0;i<top+1;i++){
            cout<<arr[i]<<endl;
        }
}

#include "header.h"
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    st.put();
    cout<<st.getcount()<<endl;
    cout<<st.getmax()<<endl;
    cout<<st.getmin()<<endl;
    return 0;
}

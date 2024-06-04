//Enter N number & find(max,min)
#include <iostream>
using namespace std;
int main()
{
    int n,tempNumber;
    cin>>n;
    int max=tempNumber,min=tempNumber;
    for(int i=1;i<n;i++){
        cin>>tempNumber;
        if(max<tempNumber){
            max=tempNumber;
        }if(min<tempNumber){
            min=tempNumber;
        }
    }
    cout << "Max:" << max;
    cout << "Min:" << min;
    return 0;
}

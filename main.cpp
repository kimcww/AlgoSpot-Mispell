#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int TestCount;
    cin>>TestCount;
    for(int i = 0 ; i < TestCount ; i++){
        int DeleteNumber = 0;
        string Input = "";
        char Buffer[1000];
        cin>>DeleteNumber>>Input;
        strcpy(Buffer,Input.c_str());
        DeleteNumber -= 1;
        memmove(Buffer+DeleteNumber,Buffer+DeleteNumber+1,strlen(Buffer)-DeleteNumber);
        cout<<i+1<<" "<<Buffer<<endl;
    }
}

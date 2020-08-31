#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
int n;

using namespace std;
void printTheArray(char *arr)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void generate(char *s,int index)
{
    if(index == n)
    {
        printTheArray(s);
        return;
    }
    else{
    s[index]='0';
    generate(s,index+1);

    s[index]='1';
    generate(s,index+1);
    }

}

int main()
{
    cout<<"Enter value of n:";
    cin>>n;
    char str[n];
    generate(str,0);
    return 0;

}

#include<bits/stdc++.h>
using namespace std;

int key=3;
string encrypt(string encryp_input)
{
    for(int i=0;i<sizeof(encryp_input)-1;i++)
    {
        if(encryp_input[i]>='a'&& encryp_input[i]<='z')
        {
            encryp_input[i]= ((encryp_input[i]-'a')+key)%26 + 'a';
            
        }
        else if(encryp_input[i]>='A'&& encryp_input[i]<='Z')
        {
            encryp_input[i]= ((encryp_input[i]-'A')+key)%26 + 'A';
            
        }
    }
    return encryp_input;
}

string decrypt(string decryp_input)
{
    for(int i=0;i<sizeof(decryp_input)-1;i++)
    {
        if(decryp_input[i]>='a'&& decryp_input[i]<='z')
        {
            decryp_input[i]= ((decryp_input[i]-'a'-key)%26) + 'a';    
        }
        else if(decryp_input[i]>='A'&& decryp_input[i]<='Z')
        {
            decryp_input[i]= ((decryp_input[i]-'A'-key)%26) + 'A';    
        }
    }
    return decryp_input;

} 

int main()
{
    string input,encryp_input;
    getline(cin,input);

    cout<<encrypt(input)<<endl;
    cout<<decrypt(encrypt(input));

}
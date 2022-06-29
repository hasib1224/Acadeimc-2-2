#include<bits/stdc++.h>
using namespace std;

char table[128][129];
int key;

void createTable(int key){
    int i, j, k, x;
    bool flag;

    for(i=0 ; i<128 ; i++) {
        table[i][0] = (char) i;

        for(j=1 ; j<129 ; j++) {
            table[i][j] = (i+j)%128 + key;
        }
    }


//     for(i=0 ; i<128 ; i++) {
//        //cout << endl << i << "=";
//        for(j=0 ; j<129 ; j++) {
//            cout << key[i][j] << " ";
//        }
//        cout << endl;
//    }
}


void encryption(char *str) {
    int i, x;
    for(i=0 ; str[i] ; i++) {
        x = i%128 + key;
        str[i] = table[(int)str[i]][x];
    }
}

void decryption(char *str) {
    int i, j, x;
    for(i=0 ; str[i] ; i++) {
        x = i%128 + key;
        for(j=1 ; j<129 ; j++) {
            if(table[j][x] == str[i]) {
                str[i] = table[j][0];
                break;
            }
        }
    }
}

int main(void) {
    int i, j, k;
    char str[10000];
    cout<<"Enter the key:";
    cin>>key;
    getchar();

    createTable(key);

    cout << "Enter a string:  ";
    cin.getline (str, 10000);

    encryption(str);
    cout << "\nAfter encryption:  " << str << endl;
    decryption(str);
    cout << "\nAfter decryption:  " << str << endl;
}
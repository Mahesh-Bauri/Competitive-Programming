
#include <iostream>
using namespace std;

int getCodes(string input, string output[10000]) {

    string mapping[27] = {"", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    if (input[0] == '\0') {
        return 0;
    }


    string res1[1000];
    string res2[1000];

    int len1 = getCodes(input.substr(1), res1);



    //  int len2 =  getCodes(input.substr(2),res2);


    int k = 0;

    for (int i = 0; i < len1; i++) {

        output[k++] = mapping[ (input[0] - '0') ] + res1[i];
    }


//     for(int i = 0;i<len2;i++){

//         output[k++] = mapping[ (input[0] - '0') ] + res2[i];
//     }

    return k;

}


int main() {
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for (int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}

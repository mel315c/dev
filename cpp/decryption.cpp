//Melanie Cruz
//CSCI 135
//decryption.cpp
//takes the encrption and returns it to the original
#include <iostream>
#include <string>
using namespace std;
string encryptCaesar(string plaintext, int rshift);
char shiftChar(char c, int rshift);
string encryptVigenere (string plaintext, string keyword);
string decryptCaesar (string ciphertext, int rshift);
string decryptVigenere(string ciphertext, string keyword);

int main(){
    //takes the text, the keywrd and the shift 
    string text, keyword;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, text);

    cout << "\n= Caesar =" << endl;
    cout << "Enter shift: ";
    cin >> shift;

    string cipher = encryptCaesar(text, shift);
    cout << "Ciphertext: " << cipher << endl;
    //if its the same as the original
    if (decryptCaesar(cipher, shift) == text){
        cout << "Decrypted: " << decryptCaesar(cipher, shift) << endl;
    }
    cout << "\n= Vigenere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;
    string vigenere = encryptVigenere(text, keyword);
    cout << "Ciphertext: " << vigenere << endl;
    //same thing to the vigenere
    if (decryptVigenere(vigenere,keyword) == text){
        cout << "Ciphertext: " << decryptVigenere(vigenere,keyword) << endl;
    }
    return 0;
}

string encryptCaesar(string plaintext, int rshift){
    string result = "";
    //goes through each letter and goes to the function
    for (int i = 0; i < plaintext.length(); i++){
        result += shiftChar(plaintext[i], rshift);
        }
    return result;
}
string encryptVigenere (string plaintext, string keyword){
    //has the reseult as a string 
    string result = "";
    int keyword_index = 0;
    int key_len = keyword.length();
    //goes through each letter
    for (int i = 0; i < plaintext.length(); i++){
        //gets the number of that letter 
        char c = plaintext[i];
        //checks if its a letter 
        if (isalpha(c)){
            int shift = keyword[keyword_index] - 'a';
            result += shiftChar(c, shift);

            keyword_index = (keyword_index + 1) % key_len;
        } else {
            result += c;
        }
    }
    return result;
}
char shiftChar(char c, int rshift){
    //shift the letter based on capitalized
    // and based on lowercase 
    int alpha_size = 26;
    int l;
    if (c >= 'A' && c <= 'Z'){
        l = (char)((c- 'A' + rshift + alpha_size) % alpha_size + 'A');
        return l;
    } else if ( c >= 'a' && c <= 'z'){
        l = (char)((c- 'a' + rshift + alpha_size) % alpha_size + 'a');
        return l;
    } else{
        l = c;
        //return the letter 
        return l;
    }
}
string decryptCaesar (string ciphertext, int rshift){
    //does everything but in reverse and goes backwards
    string plaintext = "";
    for (int i = 0; i < ciphertext.length(); i++){
        int c = char(ciphertext[i]);
        plaintext += shiftChar(c, -rshift);
    }
    return plaintext;
}
string decryptVigenere(string ciphertext, string keyword){
    string result = "";
    int keyword_index = 0;
    int key_len = keyword.length();
    for (int i = 0; i < ciphertext.length(); i++){
        char c = ciphertext[i];
        if(isalpha(c)){
            int shift = keyword[keyword_index]-'a';
            //instead of increasing its decreasing the numbers
            result +=shiftChar(c,-shift);
            keyword_index = (keyword_index + 1)% key_len;
        }else {
            result += c ;
        }
    }
    return result;

}


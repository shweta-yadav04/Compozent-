#include<iostream>
#include<string>
using namespace std;
int main()
{  
    /****************DECRYPTION PROGRAM*******************/

    // string a is used to take the message from the user
    // string b is the result of the decrypted message

  string a,b;
   //a is the letter that is going to be decrypted
  // Key to shift the message

  int key;

  cout<<"Enter the message :"<<endl;
  cin>>a;
  cout<<"Enter the key :"<<endl;
  cin>>key;

  // Loop to shift the alphabets 
  // Caesar Cipher Decryption formula :- De(a) = (a-key)%26
  for(int i=0;i<a.length();i++)
  {
    int value = int(a[i]);
    b += (value - 'a' - key + 26) % 26 + 'a';
  }

  // Decrypted Message
  
  cout<<"DECRYPTED MESSAGE - "<<b<<endl;
  }
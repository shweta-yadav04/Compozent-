#include<iostream>
#include<string>
using namespace std;
int main()
{  
    /****************ENCRYPTION PROGRAM*******************/

    // string a is used to take the message from the user
    // string b is the result of the Encrypted message

  string a,b;
   //a is the letter that is going to be encrypted
  // Key to shift the message

  int key;

  cout<<"Enter the message :"<<endl;
  cin>>a;
  cout<<"Enter the key :"<<endl;
  cin>>key;

  // Loop to shift the alphabets 
  // Caesar Cipher Encryption formula :- En(a) = (a+key)%26
  for(int i=0;i<a.length();i++)
  {
    int value = int(a[i]);
    b += (value - 'a' + key) % 26 + 'a';
  }

  // Encrypted Message
  
  cout<<"ENCRYPTED MESSAGE - "<<b<<endl;
  }
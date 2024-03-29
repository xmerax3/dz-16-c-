﻿
#include <iostream>
#include <string>
using namespace std;

int main()
// задание 1
{
    srand(time(0));
    int size = 100;

    /*char* str = new char[size] {};
    cout << "Input any word: ";
    cin >> str;
    char symbol;
    cout << "Input any symbol: ";
    cin >> symbol;
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        cout << str[i] << " ";
        if (str[i] == symbol) {
            count ++;
        }
        else if (str[i] == '\0') {
            break;
        }
    }
    cout << count;
    delete[] str;*/

    //задание  3

    /*char* str = new char[size] {};
    cout << "Input any string: ";
    cin.getline(str, size);
    cout << str << "\n";
    int count_lett = 0;
    int count_sent = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            count_lett++;
        }
        else if (str[i] == ' ') {
            count_sent++;
        }
    }
    cout << "midlle of the length of words is: " << count_lett / count_sent - 1 << "letters";*/


    // задание 6

     /*const int razmer = 1000;
     char str[razmer];
     cout << "Input string: ";
     cin.getline(str, razmer);

     for (int i = 0; str[i]; i++) {
         str[i] = tolower(str[i]);
     }

     const int spamWordsCount = 2;
     const char* spamWords[spamWordsCount] = { "viagra", "xxx" };

     bool isSpam = false;
     for (int i = 0; i < spamWordsCount; i++) {
         if (strstr(str, spamWords[i]) != NULL) {
             isSpam = true;
             break;
         }
     }

     if (isSpam) {
         cout << "spam!" << "\n";
     }
     else {
         cout << "not spam" << "\n";
     }*/




     //задание  8



 /*int length;
 cout << "Input lenght: ";
 cin >> length;
 char str[] = "zxcvbnmasdfghjklqwertyuiop0123456789";
 int str_length = sizeof(str) - 1;
 char* password = new char[length + 1];

 for (int i = 0; i < length; i++) {
     password[i] = str[rand() % str_length];
 }
 password[length] = '\0';

 cout << "password: " << password << "\n";
 delete[] password;*/

}

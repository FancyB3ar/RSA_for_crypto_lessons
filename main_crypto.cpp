#include <iostream>
#include <cstring>
#include "rsa.h"

using namespace std;

enum TYPE_CIPHER
{
    RSA_CIPHER = 1
};

enum TYPE_COMMAND
{
    ENCODE_COMMAND = 1,
    DECODE_COMMAND
};

int main(void)
{
    TYPE_CIPHER flag_cipher;
    TYPE_COMMAND flag_command;


    // Выбор алгоритма
    do
    {
        cout << "Введите номер алгоритма," << endl << "с которым будем работать: ";
        cin >> flag_cipher;
    }
    while ( !flag_cipher );

    // Выбор шифрования или дешифрования
    do
    {
        cout << "Введите \"e\" для шифрования," << endl << "\"d\" для дешифрования или \"c\" для выхода: ";
        cin >> flag_command;
    }
    while ( !flag_command );


    RSA *cipher = new RSA;

    (flag == "e")?cipher->rsa_encode():cipher->rsa_decode();

    return 0;
}
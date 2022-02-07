#include <iostream>
#include <cstring>


using namespace std;
#define WORD_LEN 20
int main()
{

    char word[WORD_LEN], * p, * q, temp;

    cout << "Enter a word: " << endl;
    cin.getline(word, WORD_LEN, '\n');

    p = word;
    q = word;
    int count = strlen(word);

    for (int i = 0; i < count - 1; i++)
    {
        q = p + 1;
        for (int j = i + 1; j < count; j++)
        {
            if (*p > *q)
            {
                temp = *p;
                *p = *q;
                *q = temp;
            }

            q++;
        }
        p++;
    }

    p = word;

    cout << "After sorting:" << endl;
    for (int k = 0; k < count; k++)
    {
        cout << *(p + k);
    }
    cout << endl;

    return 0;
}




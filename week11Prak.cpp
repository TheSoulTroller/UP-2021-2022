#include <iostream>
using namespace std;

void printStr(char *str);
void strcpy(char *str, char *strCopy);
char* strcat(char *str1, char *str2);
int strlen(char *str);
int strcmp(char *str1, char *str2);
void reverse(char *str, int size);
void replace(char *str);
int find(char *str);
int count(char *str);
char* substr(char *str);
bool strstr(char* str, char* substr);

int main()
{
    int sizeStr;
    cout << "Enter size for the first string : ";
    cin >> sizeStr;
    char *str = new char[sizeStr + 1];
    cin.ignore();
    cout << "Enter first string: ";
    cin.getline(str, sizeStr + 1);

    // Не бива да се въвеждат повече символи от зададения размер!!!

    int sizeArr;
    cout << "Enter size for the second string: ";
    cin >> sizeArr;
    char *arr = new char[sizeArr + 1];
    cin.ignore();
    cout << "Enter second string: ";
    cin.getline(arr, sizeArr + 1);

    

    delete[] str;
    delete[] arr;
    return 0;
}

void printStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
}

int strlen(char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

void strcpy(char *source, char *copy)
{
    for (int i = 0; source[i] != '\0'; i++)
    {
        copy[i] = source[i];
    } 
}

void reverse(char *str, int size)
{
   for (int i = 0; i < (size-1) / 2; )
   {
       for(int j = size - 1 ; j > (size-1) / 2; j--)
       {
           char temp = str[i];
           str[i] = str[j];
           str[j] = temp;
           i++;
       }
   } 
}

char* strcat(char *str1, char *str2)
{
    char *conc = new char[strlen(str1) + strlen(str2) + 1];

    int i;
    for(i = 0; str1[i] != '\0'; i++)
    {
        conc[i] = str1[i];
    }
    for(int j = 0; str2[j] != '\0'; j++ , i++)
    {
        conc[i] = str2[j];
    }
    i++;
    conc[i] = '\0';

    return conc;

    delete [] conc;
}

int strcmp(char *str1, char *str2)
{
    for (int i = 0, j = 0; str1[i] != '\0' || str2[j] != '\0'; i++, j++)
    {
        if (str1[i] != str2[j])
        {
            if (str1[i] > str2[j])
                return 1;
            else
                return -1;
        }
    }

    return 0;
}

void replace(char *str)
{
    cout << "Choose symbol to be replaced: ";
    char seek;
    cin >> seek;
    cout << endl << "Choose symbol which will appear instead: ";
    char change;
    cin >> change;

    int changesMade = 0;
    for(int i = 0; str[i] != '\0';i++)
    {
        if(str[i]==seek) 
        {
            str[i] = change;
            changesMade++;
        }
    }
    if (changesMade == 0) cout << "No changes were made!";
}

int find(char *str)
{
    cout << "Search for symbol: ";
    char seek;
    cin >> seek;

    for(int i = 0; str[i] != '\0'; i++ )
    {
        if(str[i] == seek) return i;
    }

    return -1;
} 

int count(char *str)
{
    cout << "Search for symbol: ";
    char seek;
    cin >> seek;
    int cnt = 0;

    for(int i = 0; str[i] != '\0'; i++ )
    {
        if(str[i] == seek) cnt++;
    }

    return cnt;
}

char* substr(char *str)
{
    int indexStart, indexEnd;
    cout << "Choose starting index: ";
    cin >> indexStart;

    if (indexStart < 0 || indexStart > strlen(str))
    {
        do
        {
            cout << "Invalid input! " << endl
                << "Choose starting index: ";
            cin >> indexStart;
        } while (indexStart < 0 || indexStart > strlen(str));
    }

    cout << "Choose ending index: ";
    cin >> indexEnd;

    if (indexEnd < indexStart || indexEnd > strlen(str))
    {
        do
        {
            cout << "Invalid input! " << endl
                << "Choose ending index: ";
            cin >> indexEnd;
        } while (indexEnd < indexStart || indexEnd > strlen(str));
    }

    int size = 2;
    if (indexEnd != indexStart)
    {
        size += (indexEnd-indexStart);
    }

    char* subString = new char[size];

    int j = 0;

    for (int i = indexStart; i <= indexEnd ; i++, j++)
    {
        subString[j] = str[i];
    }

    subString[j] = '\0';

    return subString;

    delete[] subString;
}

bool strstr(char* str, char* substr)
{
    int i = 0, j = 0;
    while ((*(str + j) != '\0') && (*(substr + i) != '\0'))
{
        if (*(substr + i) != *(str + j))
       {
            j++;
            i = 0;
        }
        else 
        {
            i++;
            j++;
        }
    }
    if (*(substr + i) == '\0')
        return true;
    else
        return false;
}

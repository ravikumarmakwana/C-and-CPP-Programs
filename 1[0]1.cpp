#include<iostream>
using namespace std;
main()
{
    string text,minWord,maxWord,tempWord;
    getline(cin,text);

    maxWord="";
    minWord=text;

    for(int i=0;i<text.length();i++)
    {
        if(text[i]!=' ')
            tempWord+=text[i];
        if(text[i]==' ' || i+1==text.length())
        {
            if(tempWord.length()>maxWord.length())
                maxWord=tempWord;
            if(tempWord.length()<minWord.length())
                minWord=tempWord;
            tempWord="";
        }
    }
    cout<<"Minimum Word : "<<minWord<<endl;
    cout<<"Maximum Word : "<<maxWord;
    return 0;
}

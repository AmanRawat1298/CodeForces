#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    char ch; string s;
    fstream infile;
    infile.open("aman.txt", ios:: out );

    if(!infile.is_open())
    {
        cout<<"Coudnt open!";
    }
    else
    {
        // infile << "my name is aman"<<endl;
        // infile <<"i am giving  interview"<<endl;
        s = "aman the great hihihihihih";
        for(int i=0; i<s.size(); i++)
            infile.put(s[i]);
        // infile.write((char*) &s, sizeof(s));
    }
    infile.close();    
    infile.open("aman.txt",ios::in );


    if(!infile.is_open())
    {
        cout<<"Doesnt Exist!";
    }
    else
    {
       infile.seekg(-1,ios::end);
       int pos = infile.tellg();
       
    //    pos--;
    //    infile.seekg(pos);
       while(infile.good())
       {
            infile.get(ch);
            cout<<ch;
            pos--;
            infile.seekg(pos);
       }
        // infile.read((char*) &s, size_of(s));s
    }
    infile.close();
    

    return -1;
}
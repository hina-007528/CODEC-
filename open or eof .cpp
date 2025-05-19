#include<iostream>
#include<fstream>

using namespace std;
int main(){
    
     ofstream out;
     out.open("samplefstream.txt");
     out<<"This is me"<<endl;
     out<<"This is me also"<<endl;
     out<<"This is also me"<<endl;
     out<<"This is alsi me"<<endl;
     out.close();
ifstream in("samplefstream.txt");
string st;
string st2;
in>>st>>st2;
cout<<st<<st2;
while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}
in.close();
    return 0;
}
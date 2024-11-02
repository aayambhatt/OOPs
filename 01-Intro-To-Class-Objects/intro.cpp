#include<iostream>
#include <list>
using namespace std;

//class is a user defined datatype, allows us to represent real life objects
// by default the members are private
class YouTubeChannel{
public:
    string Name;
    string ownerName;
    int subCount;
    list<string> publishedVideoTitles;


};


int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "AnalogCoder";
    ytChannel.ownerName = "Aayam Bhatt";
    ytChannel.subCount = 500;
    ytChannel.publishedVideoTitles = {"C++ programming", "JavaScript", "NodeJS and backend development"};

    cout<<"Name : " << ytChannel.Name << endl;
    cout<<"Owner Name: " << ytChannel.ownerName << endl;
    cout<<"Subscribers: " << ytChannel.subCount << endl;
    cout<<"Videos: "<< endl;
    for(string videoTitle: ytChannel.publishedVideoTitles){
        cout<<videoTitle<<endl;
    }


 return 0;
}
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

    //constructor 
    // The constructor's name is the same as the class's name
    //Constructors do not have a return value
    YouTubeChannel(string name, string OwnerName){
        Name= name;
        ownerName = OwnerName;
        subCount = 0;


    }

    void getInfo(){
         cout<<"Name : " << Name << endl;
    cout<<"Owner Name: " << ownerName << endl;
    cout<<"Subscribers: " << subCount << endl;
    cout<<"Videos: "<< endl;
    for(string videoTitle: publishedVideoTitles){
        cout<<videoTitle<<endl;
    }

    }


};


int main()
{
    YouTubeChannel ytChannel("AnalogCoder", "Aayam Bhatt");
    YouTubeChannel ytChannel2("VHSman", "AB");

    ytChannel.getInfo();
    ytChannel2.getInfo();



 return 0;
}
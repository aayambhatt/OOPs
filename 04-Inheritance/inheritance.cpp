#include <iostream>
#include <list>
using namespace std;

// The class 'YouTubeChannel' represents a YouTube channel with details like name, subscriber count, and published videos
// By default, class members are private unless specified otherwise
class YouTubeChannel {
private:
    // Private members, accessible only within this class
    string Name;
    int subCount;
    list<string> publishedVideoTitles;

protected:
    // Protected member, accessible in derived classes
    string ownerName;

public:
    // Constructor with parameters for initializing the channel's name and owner's name
    // Constructor name matches the class name and has no return type
    YouTubeChannel(string name, string OwnerName) {
        Name = name;
        ownerName = OwnerName;
        subCount = 0; // Initialize subscriber count to 0
    }

    // Method to display information about the channel
    void getInfo() {
        cout << "Name : " << Name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscribers: " << subCount << endl;
        cout << "Videos: " << endl;
        
        // Loop through and display each video title
        for (string videoTitle : publishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }

    // Method to increase the subscriber count by one
    void subscribe() {
        subCount++;
    }

    // Method to decrease the subscriber count by one, ensuring it doesn’t go below zero
    void unSubscribe() {
        if (subCount)
            subCount--;
    }

    // Method to add a new video title to the list of published videos
    void publishVideos(string title) {
        publishedVideoTitles.push_back(title);
    }
};

// Derived class 'cookingYoutubeChannel' inherits from 'YouTubeChannel'
// This specific class might represent cooking channels or similar
class cookingYoutubeChannel : public YouTubeChannel {
public:
    // Constructor that calls the base class constructor to initialize name and owner
    cookingYoutubeChannel(string Name, string ownerName) : YouTubeChannel(Name, ownerName) {}

    // Method to show that the owner is practicing; could be tailored to cooking or other skills
    void practice() {
        cout << ownerName << " is practicing programming and building healthy habits" << endl;
    }
};

int main() {
    // Create an instance of cookingYoutubeChannel with a channel name and owner
    cookingYoutubeChannel ytchannel("VHS videos", "Aayam Bhatt");
    cookingYoutubeChannel ytchannel2("AB's Life", "Aamu");

    // Publish videos on ytchannel
    ytchannel.publishVideos("Retro CRT TV effect");
    ytchannel.publishVideos("Hi-Fi VCR");

    // Display information about the ytchannel
    ytchannel.getInfo();

    // Call practice methods to show owner's activity
    ytchannel.practice();
    ytchannel2.practice();

    return 0;
}

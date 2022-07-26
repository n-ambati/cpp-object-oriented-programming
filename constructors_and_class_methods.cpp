#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
    public:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;

        // Constructor
        YouTubeChannel(string name, string ownerName) {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount = 0;
        }

        // Class Method
        void GetInfo() {
            cout << "Name: " << Name << endl;
            cout << "OwnerName: " << OwnerName << endl;
            cout << "SubscribersCount: " << SubscribersCount << endl;
            cout << "Videos:" << endl;
            for (string videoTitle: PublishedVideoTitles) {
                cout << videoTitle << endl;
            }
        }
            
};

int main() {
    YouTubeChannel ytChannel("Code Beauty", "Saldina");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");

    YouTubeChannel ytChannel2("AmySings", "Amy");
    
    ytChannel.GetInfo();
    ytChannel2.GetInfo();
    return 0;
}

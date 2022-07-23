#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
    private:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;

    public:
        YouTubeChannel(string name, string ownerName) {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount = 0;
        }

        // Setters and Getters
        string getName() {
            return Name;
        }

        void setName(string name) {
            Name = name;
        }

        string getOwnerName() {
            return OwnerName;
        }

        void setOwnerName(string ownerName) {
            OwnerName = ownerName;
        }

        void GetInfo() {
            cout << "Name: " << getName() << endl;
            cout << "OwnerName: " << getOwnerName() << endl;
            cout << "SubscribersCount: " << SubscribersCount << endl;
            cout << "Videos:" << endl;
            for (string videoTitle: PublishedVideoTitles) {
                cout << videoTitle << endl;
            }
        }

        void Subscribe() {
            SubscribersCount++;
        }
        
        void Unsubscribe() {
            if (SubscribersCount > 0)
                SubscribersCount--;
        }

        void PublishVideo(string title) {
            PublishedVideoTitles.push_back(title);
        }
};

int main() {
    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    return 0;
}

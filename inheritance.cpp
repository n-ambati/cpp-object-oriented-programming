#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
    private:
        string Name;
        int SubscribersCount;
        list<string> PublishedVideoTitles;

    protected:
        string OwnerName;

    public:
        YouTubeChannel(string name, string ownerName) {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount = 0;
        }

        void GetInfo() {
            cout << "Name: " << Name << endl;
            cout << "OwnerName: " << OwnerName << endl;
            cout << "SubscribersCount: " << SubscribersCount << endl;
            cout << "Videos:" << endl;
            for (string video: PublishedVideoTitles) {
                cout << video << endl;
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

class CookingYouTubeChannel: public YouTubeChannel {
    public:
        CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) {}

        void Practice() {
            cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        }
};

int main() {
    CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    cookingYtChannel.PublishVideo("Apple's Pie");
    cookingYtChannel.PublishVideo("Chocolate Cake");
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.GetInfo();
    cookingYtChannel.Practice();
    return 0;
}

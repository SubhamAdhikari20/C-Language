#include <iostream>
#include <cstring>
using namespace std;
// Examples of Virtual Functions

class Base_Channel{
    protected:
        // char title[50];
        string title;
        float rating;
    public:
        Base_Channel(){};
        Base_Channel(string a, float r){
            // strcpy(title, a);
            title = a;
            rating = r;
        };
        // void display(void){
        //     // cout << "OMG" << endl;
        // }
        virtual void display(void){
            cout << "OMG" << endl;
        }
};

class Derived_Video : public Base_Channel{
    float video_length;
    public:
        Derived_Video(){};
        Derived_Video(string a, float r, float vl) : Base_Channel(a, r){
            video_length = vl;
        }
        void display(void){
           cout << "The text tutorial is outstanding with title '" << title << "'" << endl;
            cout << "Rating of the video is " << rating << " out of 5 stars"<< endl;
            cout << "The length of the video is " << video_length << " minutes" << endl;
        }        
};

class Derived_Text : public Base_Channel{
    int word_count;
    public:
        Derived_Text(){};
        Derived_Text(string a, float r, int wc) : Base_Channel(a, r){
            word_count = wc;
        }
        // void display(void){
        //     cout << "The text tutorial is outstanding with title '" << title << "'" << endl;
        //     cout << "Rating of the text tutorial is " << rating << " out of 5 stars"<< endl;
        //     cout << "The word count of the text tutorial is " << word_count << " words" << endl;
        // }
};  

int main(){
    string ttl;
    float rate, vidlen;
    int wdcnt;

    // For Video
    ttl = "Android Development for Beginners";
    rate = 4.7;
    vidlen = 8;
    Derived_Video dv1(ttl, rate, vidlen);
    // dv1 = Derived_Video(ttl, rate, vidlen);
    // dv1.display();
    
    // For Text
    ttl = "Android Development for Beginners - Textaul";
    rate = 4.5;
    wdcnt = 1500;
    Derived_Text dt1;
    dt1 = Derived_Text(ttl, rate, wdcnt);
    // dt1.display();

    Base_Channel *course[2];
    course[0] = &dv1;
    course[1] = &dt1;

    course[0] -> display();
    course[1] -> display();

    return 0;
}

/*
Rules for virtual functions:
1. They cannot be static.
2. They are invoked through pointers of objects of classes.
3. They can be a friend of another class.
4. Vitual function defined base class might not  be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/
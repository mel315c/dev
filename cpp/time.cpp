//Melanie Cruz
//CSCI 135
//time.cpp
//mentions when the movie ends 
#include <iostream>
using namespace std;

//define the class with the h and m initalize
class Time {
public: 
    int h;
    int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

//finds the time into minutes 
int minutesSinceMidnight(Time time){
    time.m = time.m + (time.h * 60);
    return time.m;
}

//compares the time 
int minutesUntil(Time earlier, Time later){
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

//adds more minutes 
Time addMinutes( Time time0, int min){
    //if over 59 
    time0.m += min;
    Time result;
    while (time0.m > 59)
    {
        time0.m -= 60;
        time0.h++;
    }

    return time0;
}
void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    Time end = addMinutes( ts.startTime , ts.movie.duration);
    printMovie(ts.movie);
    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " << end.h << ":" << end.m << "]" << endl;

}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    Time newStartime = addMinutes(ts.startTime, ts.movie.duration);
    return {nextMovie, newStartime};
}
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
      int start1 = minutesSinceMidnight(ts1.startTime);
    int end1 = start1 + ts1.movie.duration;
    int start2 = minutesSinceMidnight(ts2.startTime);
    int end2 = start2 + ts2.movie.duration;

    // Check for overlap
    return !(end1 <= start2 || end2 <= start1);
}
int main(){
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Smile", THRILLER, 115};
    Movie movie4 = {"Vemon", ACTION, 112};

 TimeSlot ts1 = {movie1, {9, 15}};
    TimeSlot ts2 = {movie2, {10, 45}}; // Overlaps with ts1
    TimeSlot ts3 = {movie3, {12, 30}}; // Does not overlap with ts2
    TimeSlot ts4 = {movie4, {11, 50}}; // Overlaps with ts2

    // Print time slots
    printTimeSlot(ts1);
    printTimeSlot(ts2);
    printTimeSlot(ts3);
    printTimeSlot(ts4);

    // Test timeOverlap function
    cout << "Do ts1 and ts2 overlap? " << (timeOverlap(ts1, ts2) ? "Yes" : "No") << endl;
    cout << "Do ts2 and ts3 overlap? " << (timeOverlap(ts2, ts3) ? "Yes" : "No") << endl;
    cout << "Do ts2 and ts4 overlap? " << (timeOverlap(ts2, ts4) ? "Yes" : "No") << endl;

    return 0;
}
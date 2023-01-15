include<iostream>
using namespace std;

main()
{
    int s_hour, a_hour, s_min, a_min;
    cout << "Exam starting time:(hour)";
    cin >> s_hour;
    cout << "Exam starting time:(min)";
    cin >> s_min;
    cout << "Student hour of arrival:";
    cin >> a_hour;
    cout << "Student minute of arrival:";
    cin >> a_min;
    int time1 = (s_hour * 60) + s_min;
    int time2 = (a_hour * 60) + a_min;

    if (time2 > time1)
    {
        int min = time2 - time1;
        int hour = min / 60;

        if (hour >= 1)
        {
            min = min - (hour * 60);
            cout <<"Late"<<endl;
            cout << hour << ":" << min << "after the start";
        }
        else
        {
            cout << "Late" << endl;
            cout << min << " minutes after the start";
        }
    }
    else if (time2 < time1)
    {
        int min = time1 - time2;
        int hour = min / 60;
        if (hour < 1)
        {
            if (min <= 30)
            {
                cout << "On time" <<endl;
                cout << min << "minutes before the start";
            }
            else
            {
                cout << "Early" <<endl;
                cout << min << "minutes before the start";
            }
        }
        if (hour >= 1)
        {
            min = min - (hour * 60);
            cout << "Early" << endl;
            cout << hour << ":" << min << "hours before the start";
        }
    }
    else
    {
        cout << "Onn time";
    }
}
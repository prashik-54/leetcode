class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

        //alice
        int aliceArriveMonth = stoi(arriveAlice.substr(0,2));
        int aliceLeaveMonth = stoi(leaveAlice.substr(0,2));

        int aliceArriveDate = stoi(arriveAlice.substr(3));
        int aliceLeaveDate = stoi(leaveAlice.substr(3));

        //bob
        int bobArriveMonth = stoi(arriveBob.substr(0,2));
        int bobLeaveMonth = stoi(leaveBob.substr(0,2));

        int bobArriveDate = stoi(arriveBob.substr(3));
        int bobLeaveDate = stoi(leaveBob.substr(3));

        cout<<aliceArriveMonth<<" "<<aliceLeaveMonth<<" "<<aliceArriveDate<<" "<<aliceLeaveDate<<endl;
        cout<<bobArriveMonth<<" "<<bobLeaveMonth<<" "<<bobArriveDate<<" "<<bobLeaveDate;

        //now compair are they can possible to exit together
        int totalDays = 0;

        int aliceEntryDay = 0; //from 365 days
        for(int i = 1; i<aliceArriveMonth; i++){
            aliceEntryDay += months[i];
        }
        aliceEntryDay += aliceArriveDate; //final day of arrive on 365 days scale
        int aliceLeaveDay = 0;
        for(int i = 1; i<aliceLeaveMonth; i++){
            aliceLeaveDay += months[i];
        } 
        aliceLeaveDay += aliceLeaveDate; //final day of leave on 365 days scale

        int bobEntryDay = 0; //from 365 days
        for(int i = 1; i<bobArriveMonth; i++){
            bobEntryDay += months[i];
        }
        bobEntryDay += bobArriveDate; //final day of arrive on 365 days scale
        int bobLeaveDay = 0;
        for(int i = 1; i<bobLeaveMonth; i++){
            bobLeaveDay += months[i];
        } 
        bobLeaveDay += bobLeaveDate; //final day of leave on 365 days scale

        //total days together
        totalDays = min(aliceLeaveDay, bobLeaveDay) - max(aliceEntryDay, bobEntryDay);
        if(totalDays < 0) return 0;

        return totalDays+1;
    }
};
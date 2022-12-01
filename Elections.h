//
// Created by smark on 11.11.2022.
//

#ifndef LAB5_ELECTIONS_H
#define LAB5_ELECTIONS_H
#include <string>
#include <iostream>

namespace E {
    using namespace C;
    using namespace std;
    class Elections {
    private:
        Candidate cand1;
        Candidate cand2;
        Candidate cand3;
        Candidate cand4;
        Candidate cand5;
    public:
        void printAll();
        void setCandidates();
        void countRates();
        void whoWins();
        Elections();
        ~Elections()=default;
    };

    void Elections::setCandidates() {
        cout << "\nfor candidate 1:";
        cand1.setSurname();
        cand1.setVotes();
        cout << "\nfor candidate 2:";
        cand2.setSurname();
        cand2.setVotes();
        cout << "\nfor candidate 3:";
        cand3.setSurname();
        cand3.setVotes();
        cout << "\nfor candidate 4:";
        cand4.setSurname();
        cand4.setVotes();
        cout << "\nfor candidate 5:";
        cand5.setSurname();
        cand5.setVotes();
    }

    void Elections::countRates() {
        int a,b,c,d,e,s;
        double v1,v2,v3,v4,v5;
        a = cand1.getVotes();
        b = cand2.getVotes();
        c = cand3.getVotes();
        d = cand4.getVotes();
        e = cand5.getVotes();
        s = (a+b+c+d+e);
        v1 = a*100/s;
        v2 = b*100/s;
        v3 = c*100/s;
        v4 = d*100/s;
        v5 = e*100/s;
        cand1.setRate(v1);
        cand2.setRate(v2);
        cand3.setRate(v3);
        cand4.setRate(v4);
        cand5.setRate(v5);
    }

    void Elections::printAll() {
        string f,g,h,i,j;
        int a,b,c,d,e;
        double v1,v2,v3,v4,v5;
        a = cand1.getVotes();
        b = cand2.getVotes();
        c = cand3.getVotes();
        d = cand4.getVotes();
        e = cand5.getVotes();
        f = cand1.getSurname();
        g = cand2.getSurname();
        h = cand3.getSurname();
        i = cand4.getSurname();
        j = cand5.getSurname();
        v1 = cand1.getRate();
        v2 = cand2.getRate();
        v3 = cand3.getRate();
        v4 = cand4.getRate();
        v5 = cand5.getRate();
        cout << "\nCandidate 1:\nSurname:" << f <<"\nVotes:" << a << "\nRate:" << v1;
        cout << "\nCandidate 2:\nSurname:" << g <<"\nVotes:" << b << "\nRate:" << v2;
        cout << "\nCandidate 3:\nSurname:" << h <<"\nVotes:" << c << "\nRate:" << v3;
        cout << "\nCandidate 4:\nSurname:" << i <<"\nVotes:" << d << "\nRate:" << v4;
        cout << "\nCandidate 5:\nSurname:" << j <<"\nVotes:" << e << "\nRate:" << v5;
    }

    void Elections::whoWins() {
        int a,b,c,d,e;
        string f;
        a = cand1.getVotes();
        b = cand2.getVotes();
        c = cand3.getVotes();
        d = cand4.getVotes();
        e = cand5.getVotes();

        if((a>b)&&(a>c)&&(a>d)&&(a>e)){
            f = cand1.getSurname();
        } else if((b>c)&&(b>d)&&(b>e)){
            f = cand2.getSurname();
        } else if((c>d)&&(c>e)){
            f = cand3.getSurname();
        } else if(d>e){
            f = cand4.getSurname();
        } else{
            f = cand5.getSurname();
        }
        cout << "\nThe winner of the elections is:" << f;
    }

    Elections::Elections() {

    }

}

#endif //LAB5_ELECTIONS_H

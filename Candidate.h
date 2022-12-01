//
// Created by smark on 11.11.2022.
//
#include <string>
#include <iostream>
#ifndef LAB5_CANDIDATE_H
#define LAB5_CANDIDATE_H

namespace C {
    using namespace std;
    class Candidate {
    private:
        string surname;
        int votes;
        double rate;
    public:
        Candidate(){
            surname = "it isn`t set";
            votes = 0;
            rate = 404;
        };
        Candidate(string a, int b){
            surname = a;
            votes = b;
            rate = 404;
        };
        ~Candidate() = default;
        string getSurname();
        int getVotes();
        int getRate();
        void setSurname();
        void setVotes();
        void setRate(double x);
    };

    string Candidate::getSurname() {
        return surname;
    }

    int Candidate::getVotes() {
        return votes;
    }

    int Candidate::getRate() {
        return rate;
    }

    void Candidate::setSurname() {
        cout << "\nType surname: ";
        cin >> surname;
    }

    void Candidate::setVotes() {
        cout << "\nType votes: ";
        cin >> votes;
    }

    void Candidate::setRate(double x) {
        rate = x;
    }

}

#endif //LAB5_CANDIDATE_H

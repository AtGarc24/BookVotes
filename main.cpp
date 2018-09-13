//
//  main.cpp
//  BookClubProgram
//
//  Created by Atalie G. on 8/30/18.
//  Copyright © 2018 Atalie G. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

//constant declerations
std:: vector<std:: string> bookChoices;

//function prototypes
void books();
void choices();
void votes(int vote);


int main ()
{
    cout << "First, you will enter your books.\n\n" <<endl;
    books();
    cout << "These are your choices" <<endl;
    choices();
    
    
}

void books()
{
    char answer;
    string bk;
    bool test = true;
    do
    {
        cout << "Please enter the book name here: \n\n" <<endl;
        cin >> bk;
        bookChoices.push_back(bk);
        
        cout <<"Are those all of the books? Please put 'y' for yes & 'n' for no" <<endl;
        cin >> answer;
        
        
         if( answer.compare("y") == 0 || answer = "Y")
        {
            test = false;
        
        
    }
    while(test == true);
}

void choices()
{
    vector<string> choicesVts;
    for(int i = 1; i < 5; i++)
    {
        srand(static_cast<unsigned int>(time(0)));
        int randomNum = rand() % bookChoices.size();
        string book;
        bookChoices[randomNum] = book;
        cout << "Book" << i << "is" << book <<endl;
        choicesVts[i] = book;
    }
}



void votes(int vote)
{
    int voteOne;
    int voteTwo;
    int voteThree;
    int voteFour;
    
    cout << "Please enter your votes for book 1" <<endl;
    cin >> voteOne;
    cout << "Please enter your votes for book 2" <<endl;
    cin >> voteTwo;
    cout << "Please enter your votes for book 3" <<endl;
    cin >> voteThree;
    cout << "Please enter your votes for book 4" <<endl;
    cin >> voteFour;
    
    if ((voteOne > voteTwo) && (voteOne > voteThree) && (voteOne > voteFour))
    {
        cout << "And the winner is....\n\n" << voteOne <<"!!!" <<endl;
    }
    else if ((voteTwo > voteOne) && (voteTwo > voteThree) && (voteTwo > voteFour))
    {
        cout << "And the winner is....\n\n" << voteTwo <<"!!!" <<endl;
    }
    else if ((voteTwo > voteOne) && (voteTwo > voteThree) && (voteTwo > voteFour))
    {
        cout << "And the winner is....\n\n" << voteThree <<"!!!" <<endl;
    }
    else{
        cout << "We may have a tie! Try flipping a coin!" <<endl;
    }
}












/*
Nabeel Hussain Syed
Regn# 122937
BSCS-5A 
*/

#include <iostream>
using namespace std;

class score{
private:
    float totalAssignment;   //Total Assignments Marks
    float Assignment1;
    float Assignment2;
    float Assignment3;
    float averageAssignments;
    
    float totalOHT;          //Total OHTs Marks
    float OHT1;
    float OHT2;
    float averageOHTS;
    
    float totalQuiz;         //Total Quizzes Marks
    float Quiz1;
    float Quiz2;
    float Quiz3;
    float Quiz4;
    float Quiz5;
    float averageQuizzes;
    
    float totalESE;          //Total ESE Marks
    float ESE;
public:
    //Default Constructor
    record()
	{    
    }
    //Setter functions
    void setAssignments(float Assignmenttotal,float a1,float a2,float a3){
        totalAssignment = Assignmenttotal;
        Assignment1 = a1;
        Assignment2 = a2;
        Assignment3 = a3;
        averageAssignments = (a1+a2+a3)/3;
    }
    void setOHTS(float OHTtotal,float o1, float o2){
        totalOHT = OHTtotal;
        OHT1 = o1;
        OHT2 = o2;
        averageOHTS = (o1+o2)/(2);
    }
    void setQuizzes(float Quiztotal,float q1,float q2,float q3,float q4,float q5){
        totalQuiz = Quiztotal;
        Quiz1 = q1;
        Quiz2 = q2;
        Quiz3 = q3;
        Quiz4 = q4;
        Quiz5 = q5;
        averageQuizzes = (q1+q2+q3+q4+q5)/(5);
    }
    void setESE(float ESEtotal, float e1){
        totalESE = ESEtotal;
        ESE = e1;
    }
    
    //Getter Functions
    float getAverageAssignments(){
        return averageAssignments;
    }
    float getAverageOHTS(){
        return averageOHTS;
    }
    float getAverageQuizzes(){
        return averageQuizzes;
    }
    float getAverageESES(){
        return ESE;
    }
    
    //Calculation for score out of 100
    float getFinalScore(){
        return ((averageAssignments*10/totalAssignment) + (averageOHTS*30/totalOHT) + (averageQuizzes*10/totalQuiz) + (ESE*50/totalESE));
    }
};

int main(){
    score student1;
    float t,a,b,c,d,e;
    
    //Setting values for Assignments
    cout << "Enter Total Marks of one Assignment: "; 
    cin >> t;
    cout<<"Enter obtained marks in Assignment 1: ";
    cin>> a;
    cout<<"Enter obtained marks in Assignment 2: ";
    cin>> b;
    cout<<"Enter obtained marks in Assignment 3: ";
    cin>> c;
    student1.setAssignments(t,a,b,c);
    
    //Setting values for OHT's
    cout <<"Enter Total Marks of one OHT: ";
    cin >> t;
    cout<<"Enter obtained marks in OHT-1: ";
    cin>> a;
    cout<<"Enter obtained marks in OHT-2: ";
    cin>> b;
    student1.setOHTS(t, a, b);
    
    //Setting values for Quizzes
    cout<< "Enter Total Marks of one Quiz: ";
    cin >> t;
    cout<<"Enter obtained marks in Quiz 1: ";
    cin>> a;
    cout<<"Enter obtained marks in Quiz 2: ";
    cin>> b;
    cout<<"Enter obtained marks in Quiz 3: ";
    cin>> c;
    cout<<"Enter obtained marks in Quiz 4: ";
    cin>> d;
    cout<<"Enter obtained marks in Quiz 5: ";
    cin>> e;
    
    student1.setQuizzes(t,a,b,c,d,e);
    
    //Setting values for ESE
    cout << "Enter Total Marks of ESE: ";
    cin >> t;
    cout<<"Enter obtained marks in ESE: ";
    cin>> a;
    student1.setESE(t, a);
    
    //Using Getter Function to return Averages
    cout << "\n\nAssignment Average: " << student1.getAverageAssignments() <<endl;
    cout << "OHT Average: " << student1.getAverageOHTS() << endl;
    cout << "Quiz Average: " << student1.getAverageQuizzes() << endl;
    cout << "ESE marks: " << student1.getAverageESES() <<endl;
    
    //Printing final score out of 100
    cout << "Score out of 100 : " << student1.getFinalScore() <<endl;
    
    return 0;
}

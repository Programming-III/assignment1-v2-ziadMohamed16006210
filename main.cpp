#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
public:
       void display(){
        cout<<name<<id<<endl;
       };
       void set Name(String n){
        name=n
       };
       String get Name{
        return name;
       };
       void set Id(int n){
        return Id;
       };
       String get Id(){
        return Id
       };
       person(){
        name=" ";
        id=0;
       };
       person(int i,String n){
        name=n;
        id=i;
       }







// ==================== Student Class Implementation ====================
Student class:public person{
        private:
            int yearLevel;
            string major;
        public:
            Student(){
                yearLevel=0;
                major=" ";

            };
            Student(string name,int id,int yearLevel,string major){
                yearLevel=yearLevel;
                major=major;

            };
            void set YearLevel(int n){
                yearLevel=n;
            };
            int get YearLevel(){
                return yearLevel;
            };
            void set major(string m){
                major=m;

            };
            int get major(){
                return major;
            };
            void display(){
                cout<<yearLevel<<major<<endl;
            };
       }





// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}

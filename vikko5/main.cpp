#include <algorithm>
#include <iostream>
#include <student.h>
#include <vector>


using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    vector <Student>::iterator it = studentList.begin();
    string sname;
    int sika;
    
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;
        
        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            
            cout << "Valinta 0" << endl;
            cout << "Opiskelijan nimi: " << endl;
            cin >> sname;
            cout << "Opiskelijan ikä: " << endl;
            cin >> sika;
            studentList.emplace_back(sname, sika);
            cout << "Lisättiin:" << sname<< ", " << sika << endl;
            break;
            
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Valinta 1" << endl;
            cout << "Tulostetaan lista" << endl;
            for (auto &s : studentList)
            {
                cout << s.getName() <<":"<< s.getAge() <<endl;
            }
            
            break;
            
        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 2" << endl;
            cout << "Järjestetään opiskelijat nimen mukaan" << endl;
            
            sort(studentList.begin(), studentList.end(),
                [](const Student& a, const Student& b)
                    {
                        return a.getName() < b.getName();
                    }
                 );
            for ( auto& student : studentList)
                    {
                student.printStudentInfo();                
                    }
            break;
            
        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 3" << endl;
            
            sort(studentList.begin(), studentList.end(),
                 [](const Student& a, const Student& b)
                 {
                     return a.getAge() < b.getAge();
                 }
                 );
            for ( auto& student : studentList)
            {
                student.printStudentInfo();                
            }
            
            
            break;
        case 4:

            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Valinta 4" << endl;
            cout <<"Opiskelijan nimi: " << endl;
            cin >> sname;
            
            
            it = find_if(studentList.begin(), studentList.end(), [sname](const Student &a) {
                                //vertaillaan onko opiskelijan nimi sama kuin target
                return a.getName() == sname;
                                
                                
                            });
            if (it != studentList.end())
            {
               cout <<  "Opiskelijaa löytyi" << endl;
                it -> printStudentInfo();
            }
            else {
                cout << "opiskelijaa ei löytynyt"<< sname << endl;
                
            }
            /*if (auto it = find_if(studentList.begin(), studentList.end(),
                                       [](const Student& s){ return s.getName() == target; });
                it != studentList.end())
            {
                it->printStudentInfo();
            }
            else {
                cout << "Opiskelijaa ei löydy. " << endl;
            }*/
            
            
            break;
            
            
            
            default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
} while(selection < 5);

return 0;
}

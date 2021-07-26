#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    set<int, greater<int>> s;
    s.insert(40);
    s.insert(30);
    s.insert(50);
    //keeps only unique values
    s.insert(50);

    //print
    cout<<"s"<<"\n";
    set<int, greater<int>>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " ";
    //method 2 for printing
    cout << endl;
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    cout << endl;

    //assinging elements
    cout<<"s2"<<"\n";
    set<int> s2(s.begin(), s.end()); //automatically arranges the element in ascending order
    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //remove element
    cout<<"after erasing element s2"<<"\n";
    s2.erase(40);
    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    s2.insert(40);
    s2.insert(60);


    //remove elements
    cout<<"after erasing elements"<<"\n";
    s2.erase(s2.find(30), s2.find(50)); //does not remove 50
    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //upper bound and lower bound
    //set<int, greater<int>> s3;
    //for (int i = 1; i < 10; i++)
    //    s3.insert(i * 10);
    //for (auto i = s3.lower_bound(30); i != s3.upper_bound(60); i++)
    //    cout << *i << " ";
    //cout << endl;


    //finds the presence of an element
    cout<<"presence of an element"<<"\n";
    set<int, greater<int>> s3;
    for (int i = 1; i < 10; i++)
        s3.insert(i * 10);
    cout<<s3.count(50); //1-true 0-false
    cout<<endl;


    //inserting elements from one set to another within a range
    s2.clear(); //clears s2
    s2.insert(s3.find(30),s3.end());
    cout<<"new s2"<<"\n";
    for (auto i = s2.begin(); i != s2.end(); i++)
        cout << *i << " ";
    cout << endl;


    //value_comp()


    //equal_range()
    cout<<"s3"<<endl;
    for (auto i = s3.begin(); i != s3.end(); i++)
        cout << *i << " ";
    auto it = s3.equal_range(20);
    cout << "\nThe lower bound of 20 is " << *it.first;
    cout << "\nThe upper bound of 20 is " << *it.second;
  
    // Function returns the last element
    it = s3.equal_range(800);
    cout << "\nThe lower bound of 800 is " << *it.first;
    cout << "\nThe upper bound of 800 is " << *it.second;
  
    // Function returns the range where the
    // element greater than 0 lies
    it = s3.equal_range(0);
    cout << "\nThe lower bound of 0 is " << *it.first;
    cout << "\nThe upper bound of 0 is " << *it.second;
    cout<<endl;


    //swap elements of 2 sets with same data type
    set<int> set1{ 1, 2, 3, 4 };
    set<int> set2{ 5, 6, 7, 8 };
    cout<<"Swapped sets"<<endl;
    set1.swap(set2);
    for (auto i = set1.begin(); i != set1.end(); i++)
        cout << *i << " ";
    cout<<endl;
    for (auto i = set2.begin(); i != set2.end(); i++)
        cout << *i << " ";
    cout<<endl;


    //copying one set to another set
    cout<<"copy set2 to set1"<<endl;
    set1=set2;
    for (auto i = set1.begin(); i != set1.end(); i++)
        cout << *i << " ";
    cout<<endl;
}
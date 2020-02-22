// Author: Mitchell Borchers
// helpdesk-- 
// REALLY GOOD TUT: https://www.youtube.com/watch?v=pJ65HIjnTsE
// MOST HELPFUL ITEM: https://stackoverflow.com/questions/47665886/vs-code-will-not-build-c-programs-with-multiple-ccp-source-files
// GOOGLE SEARCH: https://www.google.com/search?q=how+do+i+compile+a+c%2B%2B+main+file+that+is+also+linked+to+other+cpp+files+on+vs+code%3F&oq=how+do+i+compile+a+c%2B%2B+main+file+that+is+also+linked+to+other+cpp+files+on+vs+code%3F&aqs=chrome..69i57.44233j0j7&sourceid=chrome&ie=UTF-8
// GOOD INFO: https://latedev.wordpress.com/2014/04/22/common-c-error-messages-2-unresolved-reference/

#include <iostream>
#include <iomanip>
#include "Person.hpp"

using namespace std;

int main() 
{
    Person *mitchell = new Person("Mitchell", "Borchers", 26, true, true);
    mitchell->print();
    cout << mitchell->getName() << endl;

    if (mitchell->isEmployed())
    {
        cout << mitchell->getName() << " has a job!" << endl;
    } else {
        cout << mitchell->getName() << " is in between jobs." << endl;
    }

    delete mitchell;
    return 0;
}
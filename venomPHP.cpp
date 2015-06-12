#include <iostream>
#include <string>

using namespace std;

int createphp(string filename)
{


}

int main(int argv, char* argc[])
{
    if(argc[1] == "createphp"){
        int state = createphp(argc[2]);
    }
    return 0;
}

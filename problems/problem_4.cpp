#include <string>
#include <sstream>
using namespace std;

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int cnt=0;
    string result;
    for(int i=0;i<18;i=i+3){
        if (macAddress[i]=='F' && macAddress[i+1]=='F'){
            cnt=cnt+2;
        }
        else{
            if(isdigit(macAddress[1])){
                if(macAddress[1]%2==0) {
                    result = "unicast";
                    break;
                }
                else{
                    result = "multicast";break;
                }
            }
            else{
                switch (macAdress[1]) {
            case 'A':
                cout <<"Unicast" <<endl;
                break;
            case 'C':
                cout <<"Unicast" <<endl;
                break;
            case 'E':
                cout <<"Unicast" <<endl;
                break;
            case 'B':
                cout <<"Multicast" <<endl;
                break;
            case 'D':
                cout <<"Multicast" <<endl;
                break;
            case 'F':
                cout <<"Multicast" <<endl;
                break;
            default:
                cout <<"Mac Adress is not valid(" <<endl;
        }
                break;
            }

        }
    }
    if (cnt==12){
        result = "broadcast";
    }

    return result;

    // make use of control flow statements
    // return result;
}

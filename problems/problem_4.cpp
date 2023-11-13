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
                switch (macAddress[1]) {
            case 'A':
                result = "Unicast";
                break;
            case 'C':
                result = "Unicast";
                break;
            case 'E':
                result = "Unicast";
                break;
            case 'B':
                result = "Multicast";
                break;
            case 'D':
                result = "Multicast";
                break;
            case 'F':
                result = "Multicast";
                break;
            default:
                result = "Mac Adress is not valid(";
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
int main() {
    std::cout<<problemSolution4("FF:FF:FF:FF:FF:FF");
    return 0;
}

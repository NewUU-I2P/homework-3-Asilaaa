
string problemSolution4( string macAddress) {
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
                if((char (macAddress[1])+1)%2==0){
                    result = "unicast";break;
                }
                else{
                    result = "multicast";break;
                }
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


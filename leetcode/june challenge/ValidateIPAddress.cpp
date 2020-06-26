class Solution {
public:
    string validIPAddress(string IP) {
       
        if(count(IP.begin(), IP.end(), '.') == 3){
            stringstream ss(IP); 
            string token; 
            int count = 0;
            while(getline(ss, token, '.')) { 
                if(token.length() == 0 || token.length() > 3) return "Neither";
                if(token[0] == '0' && token.length() != 1) return "Neither";
                for(char c: token) if(!isdigit(c)) return "Neither";
                if(stoi(token) > 255) return "Neither";
                count++;
            }
            return count == 4 ? "IPv4" : "Neither";
        }
        else if(count(IP.begin(), IP.end(), ':') == 7){
            stringstream ss(IP); 
            string token; 
            int count = 0;
            while(getline(ss, token, ':')) { 
                if(token.length() == 0 || token.length() > 4) return "Neither";
                for(char c: token) if(!isxdigit(c)) return "Neither";
                count++;
            }
            return count == 8 ? "IPv6" : "Neither";
        }
        return "Neither";
    }
    
};
class Solution {
public:
    int myAtoi(string s) {
        int return_int = 0;
        int i = 0;
        char sign = '+';
        int factor = 1;
        while( i < s.length())
        {
            cout << "Thing: " <<  s.at(i) << endl;
            if(s.at(i) == '-')
            {
                sign = '-';
            }
            else if('a' - s.at(i) >= 41 && 'a' - s.at(i) <= 49)
            {
                return_int*=factor;
                return_int += (s.at(i) - '0');
                cout << "CUrr return: " << return_int << endl;
                factor*=10;
            }
            i++;
        }
        if(sign != '+')
        {
            return_int *= -1;
        }
        return return_int;
    }
};

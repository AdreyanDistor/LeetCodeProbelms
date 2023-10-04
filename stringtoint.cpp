class Solution {
public:
    int myAtoi(string s) {
        int return_int = 0;
        int i = 0;
        char sign = '+';
        int factor = 10;
        while( i < s.length())
        {
            cout << "Thing: " <<  s.at(i) << endl;
            if(s.at(i) == '-')
            {
                sign = '-';
            }
            else if('a' - s.at(i) >= 40 && 'a' - s.at(i) <= 48)
            {
                return_int*=factor;
                                cout << "past return: " << return_int << endl;

                return_int += (s.at(i) - '0');
                cout << "CUrr return: " << return_int << endl;
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

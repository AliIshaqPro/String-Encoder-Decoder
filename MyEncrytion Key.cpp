#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

/////////////////////////////////////////////////////////////////

// YOU CAN CHANGE THE ENCRYPTION KEY

//////////////////////////////////////////////////////////////////

// unordered_map<char, string> alphabettToComplexValue = {
//     {'A', "$%120"}, {'B', "!@78)"}, {'C', "*24!_"}, {'D', "#&99*"}, {'E', "@@57)"},
//     {'F', "&^22$"}, {'G', "!$14%"}, {'H', "#*91@"}, {'I', "^&50!"}, {'J', "!!39^"},
//     {'K', "%$07)"}, {'L', "&!88@"}, {'M', "(!62#"}, {'N', "#$42)"}, {'O', "^*36&"},
//     {'P', "$@15^"}, {'Q', "*$03%"}, {'R', "#!29@"}, {'S', "^$04!"}, {'T', "&@21^"},
//     {'U', "!%78#"}, {'V', "*^99$"}, {'W', "#$33%"}, {'X', "!*48@"}, {'Y', "@&56)"},
//     {'Z', "#!05^"}, {'a', "^@20$"}, {'b', "!#48%"}, {'c', "*$11@"}, {'d', "&!69)"},
//     {'e', "#$32^"}, {'f', "!%77#"}, {'g', "^*88$"}, {'h', "&$45%"}, {'i', "#@66@"},
//     {'j', "!*04)"}, {'k', "^#21$"}, {'l', "*&34%"}, {'m', "!$89@"}, {'n', "#!77)"},
//     {'o', "&*12^"}, {'p', "!@09$"}, {'q', "^#25%"}, {'r', "*&90@"}, {'s', "!$38)"},
//     {'t', "#%67^"}, {'u', "^!14$"}, {'v', "!#23%"}, {'w', "*&50@"}, {'x', "&$11)"},
//     {'y', "#@62^"}, {'z', "!%33#"}, {' ', "$!00^"}, {'!', "#*09$"}, {'@', "&^28)"},
//     {'#', "!$47%"}, {'$', "#@56@"}, {'%', "*&15^"}, {'^', "!%02#"}, {'&', "#$39$"},
//     {'*', "!@78)"}, {'(', "&^12!_"}, {')', "#*45@)"}, {'\n', "%$00#"},
//     {'0', "!%00)"}, {'1', "#&01@"}, {'2', "$$02^"}, {'3', "&!03%"},
//     {'4', "!^04$"}, {'5', "%#05&"}, {'6', "^$06@"}, {'7', "!&07#"},
//     {'8', "#$08%"}, {'9', "&*09^"}
// };


unordered_map<char, string> alphabetToComplexValue = {
    {'A', "X9@3!vBnqQ"}, {'B', "y$7Pf3#ZMx"}, {'C', "4%TgHs2!uP"}, {'D', "Jv6w*R9$bQ"}, {'E', "pL3&7W!zRx"},
    {'F', "M!2b6X%aTr"}, {'G', "tW9*8!oPyQ"}, {'H', "g#3u!kY9wH"}, {'I', "dL5&X1!zQv"}, {'J', "R8!bq$2NvM"},
    {'K', "3!Yc7t*JpP"}, {'L', "v*9WgH!4Xr"}, {'M', "7!$3PbqFyZ"}, {'N', "pX2!L6gRbH"}, {'O', "8*V!wY3zJr"},
    {'P', "k2Q!L6w*Mv"}, {'Q', "o*P9!t7X3J"}, {'R', "d7!L6kH9$P"}, {'S', "R3!8V*z4wQ"}, {'T', "g5X!o3&9Lb"},
    {'U', "H!p4q7$Y8v"}, {'V', "2o!M8Vg3wQ"}, {'W', "zR3!*7L9Xk"}, {'X', "pQ*2L7!Yv8"}, {'Y', "g4Xo!8&3rT"},
    {'Z', "7wR!$3Lk9H"}, {'a', "x9P!3v4$Jy"}, {'b', "5#PqR!8zL2"}, {'c', "kX6!7o3*Hv"}, {'d', "3g4!8LbW9Q"},
    {'e', "v7!2R6*qLp"}, {'f', "tX!5g9$2wJ"}, {'g', "Y3p!*7L9Hv"}, {'h', "4o!R5k3&8X"}, {'i', "L9!zX7g4oH"},
    {'j', "3$6!LkP9wQ"}, {'k', "v2!*R7L3oX"}, {'l', "8t!3Pq$7Y4"}, {'m', "L*9o3!2V7X"}, {'n', "5!$g7R3L9v"},
    {'o', "3X9!*2k4Hv"}, {'p', "w7!L4g3&8X"}, {'q', "P5o!*R9L3X"}, {'r', "7v2!*o3L9Q"}, {'s', "L4$9g!7P3H"},
    {'t', "8!R3X2L5oQ"}, {'u', "o3!*7g4L9X"}, {'v', "P7!L2k$9g3"}, {'w', "4R3!7L8X$o"}, {'x', "t2!9Pq3L7X"},
    {'y', "X9g!$3oL7P"}, {'z', "3L7!2o9*Xg"}, {' ', "L9!*3g2o7X"}, {'!', "g4$7o3!L9X"}, {'@', "P3!7L2q8$R"},
    {'#', "7L9!*4o3Xg"}, {'$', "2q$7!3L8oX"}, {'%', "R3*9L7!o4P"}, {'^', "4!L9$7o3gX"}, {'&', "g3!*7L2o9X"},
    {'*', "P7!$3L4o9X"}, {'(', "9L4*3!o7gX"}, {')', "L3!2o7$9Xg"}, {'\n', "L9!*o3g4X7"},
    {'0', "X9!3L7o$2g"}, {'1', "L4$3g!7oX9"}, {'2', "3o7!*9L2Xg"}, {'3', "gX9!4o7$L3"},
    {'4', "7L3!9g2o$X"}, {'5', "Xo3!2L7$g9"}, {'6', "3L7!4o9X$g"}, {'7', "L3!7X2$g9o"},
    {'8', "9o3!*7L4gX"}, {'9', "7L3!9gX2$o"}
};


unordered_map<string, char> complexValueToAlphabet;

void initializeComplexValueToAlphabet() {
    for (const auto& pair : alphabetToComplexValue) {
        complexValueToAlphabet[pair.second] = pair.first;
    }
}

string encodeValue(const string& input) {
    string encodedString = "";
    for (char c : input) {
        if (alphabetToComplexValue.find(c) != alphabetToComplexValue.end()) {
            encodedString += alphabetToComplexValue[c];
        }
    }
    return encodedString;
}

string decodeValue(const string& input) {
    string decodedString = "";
    for (size_t i = 0; i < input.size(); i += 5) {
        string segment = input.substr(i, 5);
        if (complexValueToAlphabet.find(segment) != complexValueToAlphabet.end()) {
            decodedString += complexValueToAlphabet[segment];
        }
    }
    return decodedString;
}

int main() {
    initializeComplexValueToAlphabet();
    
    cout << "Enter the string to encode (press Enter twice to finish):\n";
    string inputString;
    string line;
    while (getline(cin, line) && !line.empty()) {
        inputString += line + '\n';
    }

    string encodedValue = encodeValue(inputString);
    cout << "Encoded value:\n" << encodedValue << endl;

    string decodedString = decodeValue(encodedValue);
    cout << "Decoded string:\n" << decodedString << endl;

    return 0;
}


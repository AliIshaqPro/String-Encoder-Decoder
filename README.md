String Encoder-Decoder

This C++ project implements a string encoding and decoding mechanism using a complex mapping of characters to strings. The program converts a given input string into a complex encoded format and can decode it back to its original form. The mapping of characters includes special symbols, numbers, and both uppercase and lowercase letters.
Features

    Character Mapping: The program uses predefined mappings for both encoding and decoding strings.
    Support for Special Characters: Includes encoding for special symbols, numbers, and spaces.
    Easy Encoding/Decoding: Input a string and get an encoded complex string. It can also revert the encoded string back to its original format.

Usage

    Run the program:
        The user is prompted to enter a string for encoding.
        The program will output both the encoded and decoded strings.

    Input Format:
        Type the string to be encoded.
        Press Enter twice to indicate the end of input.

Example

Input:

Hello World!

Encoded Output:

ruby

#*91@v*9WgH!4XrL9!*3g2o7X7L3!9gX2$o

Decoded Output:

Hello World!

How to Use

    Clone the repository:

    bash

git clone https://github.com/your-username/string-encoder-decoder.git

Navigate into the project directory:

bash

cd string-encoder-decoder

Compile the code:

bash

g++ main.cpp -o encoder-decoder

Run the program:

bash

    ./encoder-decoder

Dependencies

    C++11 or higher compiler.

Future Improvements

    Enhance mapping to allow for more flexible encoding and decoding.
    Add support for customizable mappings via input files.

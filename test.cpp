#include <iostream>
#include <fstream>
#include <string>

#include <cstring>

using namespace std;

int main()
{
   // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();



  // Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("filename.txt");
char *p;
char x[400] = {"today is sunday"};

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
    cout << myText << endl;

    strncpy(x, myText.c_str(), myText.length() + 1);

    
    p = strtok(x, " ");
    cout << "token1 = " << p << endl;

    // get the next token i.e. word before second empty space
    // NULL indicates we are using the same pointer we used previously i.e. quote
    p = strtok(NULL, " ");
    cout << "token2 = " << p<< endl;

    // get the third token
    p = strtok(NULL, " ");
    cout << "token3 = " << p<< endl;

}
 cout << endl;

// Close the file
MyReadFile.close();

}

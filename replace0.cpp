int convertFive(int n) {
    // Your code here

    // Convert the integer to a string
    string temp = to_string(n);
    string v;

    // Iterate through each character of the string
    for (int i = 0; i < temp.size(); i++) {
        // If the character is '0', convert it to '5'
        if (temp[i] - '0' == 0)
            v.push_back('5');
        else
            v.push_back(temp[i]);
    }

    // Convert the modified string back to an integer
    int ans = stoi(v);
    return ans;
}

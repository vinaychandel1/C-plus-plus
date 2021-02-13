string reverseWords(string s) 
    {
       stringstream ss(s);
        string word, reversed;
        // use ' ' as delimiter
        while(getline(ss, word, '.'))  {
            if(reversed.size() && word.size())
                reversed += '.';
            reverse(word.begin(), word.end());
            reversed = reversed + word;
        }
        // now reverse the entire string 
        reverse(reversed.begin(), reversed.end());
        return reversed;
    }

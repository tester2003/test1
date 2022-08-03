bool isIsomorphic(string a, string b)
{
    int lena = a.length();
    int lenb = b.length();
    int character[26];
    bool ch_appear[26] = {0};
    for (int i = 0; i < lena; i++)
    {
        int kc = a[i] - b[i];
        int index = a[i] - 'a';
        if(ch_appear[index] == 0)
        {
            character[index] = kc;
            ch_appear[index] = 1;
        }
        else {
            if(character[index] != kc)
                return false;
        }
    }
    bool ch_appearb[26] ={0};
    for (int i = 0; i < lena; i++)
    {
        int kc = a[i] - b[i];
        int index = b[i] - 'a';
        if(ch_appearb[index] == 0)
        {
            character[index] = kc;
            ch_appearb[index] = 1;
        }
        else {
            if(character[index] != kc)
                return false;
        }
    }
    return true;
}

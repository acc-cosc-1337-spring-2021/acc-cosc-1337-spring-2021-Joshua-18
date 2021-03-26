#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double g_string_count = 0;
    double c_string_count = 0;

    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G')
            g_string_count++;
        if (dna[i] == 'C')
            c_string_count++;
    }
    return (g_string_count + c_string_count) / dna.length();
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string reversed_dna_str = "";
    for (int i = dna.length() - 1; i >= 0; i--)
    {
        reversed_dna_str += dna[i];
        
        
    }
    return reversed_dna_str;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string results = get_reverse_string(dna);

    for (int i = 0; i < results.length(); i++)
    {
        switch (results[i])
        {
        case 'A':
            results[i] = 'T';
            break;
        case 'T':
            results[i] = 'A';
            break;
        case 'C':
            results[i] = 'G';
            break;
        case 'G':
            results[i] = 'C';
            break;
        }
    }
    return results;
}

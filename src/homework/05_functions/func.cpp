//add include statements

#include "func.h"

using std::string; using std::cout; using std::cin;

//add function code here

double get_gc_content(const string& dna)
{
    double gc_amount = 0;

    for(auto ch: dna)
    {
        if(ch=='G' || ch=='C')
        {
            gc_amount++;
        }
    }

    return gc_amount / dna.size();
}

string get_dna_complement(string dna)
{
    string dna_complement;

    for(auto i = 0; i < dna.size(); i++)
    {

        switch(reverse_string(dna)[i])
        {
            case 'A':
                dna_complement.append(1, 'T');
                break;
            case 'T':
                dna_complement.append(1, 'A');
                break;
            case 'C':
                dna_complement.append(1, 'G');
                break;
            case 'G':
                dna_complement.append(1, 'C');
                break;
        }
    }

    return dna_complement;
}

string reverse_string(string dna)
{
    auto i=1;
    string dna_reverse;

    for(auto ch: dna)
    {
        dna_reverse.append(1, dna[dna.size()-i]);

        i++;
    }

    return dna_reverse;
}
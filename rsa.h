class RSA
{
private:
    int p = 223;
    int q = 313;
    int euler = (p-1)*(q-1);
    int d;

public:
    int n = p * q;
    int e = 65537;

	int nod(int a, int b)
	{
		while (a != b)
		{
		    if (a > b)
		        a = a - b;
		    else
		        b = b - a;
		}

		return a;
	}

	void rsa_encode()
	{
	    return;
	}

	void rsa_decode()
	{
	    return;
	}

};
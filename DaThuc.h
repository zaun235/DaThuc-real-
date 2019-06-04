
class DaThuc
{
private:
	int N;
	float a[1000];
public:
	DaThuc()
	{
		N = 1;
		a[0] = 1;
		a[1] = 1;
	};	
	DaThuc(int k)
	{
		N = k;
		for(int i = 0; i<= N; i++)
			a[i] = 1;
	};
	DaThuc(int ar[],int n)
	{
		for(int i =0;i<n;i++)
		{
			a[i]=ar[i];
		}
	}
	friend ostream & operator<<(ostream &out, const DaThuc &p)
	{
		for(int i = p.N; i>= 0; i--)
		{
				
			if (p.a[i] != 0)
			{
				if (p.a[i] != 1 && i != 0)
				{
					out<<p.a[i];
				}
				if (i>1)
					out<<"X^"<<i;
				else if (i == 1)
					out<<"X";
				else
				{
				
					out<<p.a[i];
				}	
				if (i > 0 && p.a[i-1] > 0)
					out<<"+";
				//cout<<i<<"; ";
			}
			
		}
		return out;
	};
	void SetHeSo(int bac, float hs)
	{
		a[bac] = hs;
	};
	float GetValue(float x) const
	{
		float r = 0;
		float X0 = 1;
		for(int i = 0; i<=N; i++)
		{
			r = r + X0 * a[i];
			X0 = X0 * x;
		}
		return r;
	};
	DaThuc operator	+ (const DaThuc &b) const
	{
		int data[N];
		if(N>b.N)
		{
			
			for (int i = N;i>=0;i--)
			{
				data[i]=a[i]+b.a[i];
				if (data[i] != 0)
			{
				if (data[i] != 1 && i != 0)
				{
					cout<<data[i];
				}
				if (i>1)
					cout<<"X^"<<i;
				else if (i == 1)
					cout<<"X";
				else
				{
				
					cout<<data[i];
				}	
				if (i > 0 && data[i] > 0)
					cout<<"+";
			}
		}
		}
		else
		{
			for (int i = b.N; i >= 0;i--)
			{
				data[i]= a[i]+b.a[i];
				if (data[i] != 0)
			{
				if (data[i] != 1 && i != 0)
				{
					cout<<data[i];
				}
				if (i>1)
					cout<<"X^"<<i;
				else if (i == 1)
					cout<<"X";
				else
				{
				
					cout<<data[i];
				}	
				if (i > 0 && data[i] > 0)
					cout<<"+";
			}
		}
		}
	
	};
};

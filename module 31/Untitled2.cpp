void fun(int l,int r)
{
	int mid = (l+r)/2;
	for(int i = l ; i <= r ; i++)
	{
		cout<<i<<endl;
	}
	if(l<r){
		fun(l,mid);
		fun(mid+1,r);
	}
}
Time Complexity O(n*longn).
this code,
I to r complexity = O(n).The next line contains a fun function
which is a recursive function and follows Divide and conquers method.
we see some example:
N= 4
1st Level: n
2nd Level: n/2 and n/2
3rd Level: n/4 and n/4
3rd Level: 1, 1, 1, 1, 1, 1,
= O(n*logn)
int main()
{
	int n;
	cin>>n;
	fun(0,n-1);
}


for(int i = 1 ; i <= n/2 ; i++)
{
	for(int j = 1 ; j <= n ; j = j + i)
	{
		cout<<i<<" "<<j<<endl;
	}
}
This code,we see that,
innner loop : j incremen the value of i. j depends i
when,
I = 1;
j = 1, 2, 3, 4, 5, ……. n     (increment++);
i = 2
j = 1, 3, 5, 7, 9 …. n/2     (increment+=2);
i=3
j=1, 4, 7, 10, 13 … n/3      (increment+=3);

After that calcuate the complixity is,
{This is  Harmonic Series}
Total : n + n/2+n/3+ …. + n/n
= n (1/1+½+1+3+....+1/n)
= loge(n)
= nlogn
Time Complexity:  O(nlogn)

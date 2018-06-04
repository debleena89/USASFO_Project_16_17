int main ()
{
	/* LQR Parameters p=10 R=1 */
	while(1)
		{
			sense(x);
			u=(1.8874*x[0]-1.7811*x[1]);
			actuate(u);
		}
	return 0;
}

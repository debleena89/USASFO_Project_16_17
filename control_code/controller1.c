int main()
{
	/* LQR Parameters p=1 R=10 */
	while(1)
		{
			sense(x);
			u=(0.6527*x[0]-0.2130*x[1]); //Calculate control action
			actuate(u);
		}
	return 0;
}

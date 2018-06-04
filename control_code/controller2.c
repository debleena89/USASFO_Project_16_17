int main()
{
	/* LQR Parameters p=1 R=1 */
	while(1)
		{
			sense(x);
			u=(1.3895*x[0]-0.9653*x[1]);
			actuate(u);
		}
	return 0;
}

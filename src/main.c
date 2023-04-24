#include <stdio.h>
#include "./BohrModel.c"

double electron_energy_per_electron_charge(unsigned int electron_shell)
{
  return electron_energy(electron_shell) / ELECTRON_CHARGE;
}

int main()
{
	double transition = electron_energy(2) - electron_energy(1);

	printf("%lf eV\n", electron_energy_per_electron_charge(1));  // -13.643

	printf("%lf eV\n", electron_energy_per_electron_charge(2));  // -3.441

	printf("%lf eV\n", transition / ELECTRON_CHARGE);            // 10.233

	printf("%lf nm\n", wavelength(transition));                  // 121.3

	return 0;
}

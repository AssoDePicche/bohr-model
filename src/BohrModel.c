#include <math.h>

#define COULOMB_CHARGE_TRANSFER_EXCITONS 9e9

#define ELECTRON_CHARGE                  1.60217663e-19

#define ELECTRON_MASS                    9.1093837e-31

#define LIGHT_SPEED                      3e8

#define NANOMETER                        1e9

#define PLANK_CHARGE_TRANSFER_EXCITONS   6.62607015e-34

double electron_energy(unsigned int electron_shell)
{
  double squared_electron_charge = pow(ELECTRON_CHARGE, 2);

  double numerator                       = pow((COULOMB_CHARGE_TRANSFER_EXCITONS * squared_electron_charge), 2) * ELECTRON_MASS;

  double denominator                     = 2 * pow((PLANK_CHARGE_TRANSFER_EXCITONS / (2 * M_PI)), 2);

  double division                        = numerator / denominator;

  double squared_electron_shell          = pow(electron_shell, 2);

  return (-1) * (division * pow(squared_electron_shell, -1));
}

double wavelength(double photon_transition_energy)
{
	return ((LIGHT_SPEED * PLANK_CHARGE_TRANSFER_EXCITONS) / photon_transition_energy) * NANOMETER;
}

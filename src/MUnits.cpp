//v1.8 copyright Comine.com 20130313W0122
#include "MStdLib.h"
#include "MUnits.h"


//////////////////////////////////////////////////////
double MUnitsCalcFineStructureConstant(void)
	{
	return MUNITS_CHARGE_ELECTRON*MUNITS_CHARGE_ELECTRON
			/MUNITS_HBAR
			/MUNITS_VELOCITY_LIGHT
			/4.0
			/MUNITS_PI
			/MUNITS_PERMITTIVITY_E0;
	}


//////////////////////////////////////////////////////
double MUnitsEnergyToWaveNumber(const double &energy)
	{
	const double wavelength=MUNITS_PLANK_CONSTANT*MUNITS_VELOCITY_LIGHT/energy;
	MStdAssert(MStdIsNan(wavelength)==false);

	const double wavenumber=1.0/wavelength*MUNITS_CENTIMETER;
	return wavenumber;
	}


//////////////////////////////////////////////////////
double MUnitsWaveNumberToEnergy(const double &wavenumberincm)
	{
	const double wavenumber=wavenumberincm/MUNITS_CENTIMETER;
	const double energy=MUNITS_PLANK_CONSTANT*MUNITS_VELOCITY_LIGHT*wavenumber;
	return energy;
	}




//v0.0 copyright Comine.com 20050914W09
#include "MStdLib.h"
#include "MUnits.h"
#include "MUnitConverter.h"


//******************************************************
//**  MUnitConverter class
//******************************************************
void MUnitConverter::ClearObject(void)
	{
	}


////////////////////////////////////////////////
MUnitConverter::MUnitConverter(bool create)
	{
	ClearObject();
	if(Create()==false)
		{
		return;
		}
	}


////////////////////////////////////////////////
MUnitConverter::~MUnitConverter(void)
	{  Destroy();  }


////////////////////////////////////////////////
bool MUnitConverter::Create(void)
	{
	Destroy();
	return true;
	}


////////////////////////////////////////////////
bool MUnitConverter::Destroy(void)
	{
	ClearObject();
	return true;
	}


////////////////////////////////////////////////
double MUnitConverter::JoulesToElectronVolts(const double &val)
	{
	return val/MUNITS_ELECTRONVOLT;
	}


////////////////////////////////////////////////
double MUnitConverter::JoulesToHartrees(const double &val)
	{
	return val/MUNITS_HARTREE;
	}


////////////////////////////////////////////////
double MUnitConverter::JoulesToInvCentimeters(const double &val)
	{
	return MUnitsEnergyToWaveNumber(val);
	}



////////////////////////////////////////////////
double MUnitConverter::JoulesToKelvin(const double &val)
	{
	return val/MUNITS_BOLTZMANN_CONSTANT;
	}


////////////////////////////////////////////////
double MUnitConverter::ElectronVoltsToJoules(const double &val)
	{
	return val*MUNITS_ELECTRONVOLT;
	}



////////////////////////////////////////////////
double MUnitConverter::ElectronVoltsToHartrees(const double &val)
	{
	return val*(MUNITS_ELECTRONVOLT/MUNITS_HARTREE);
	}



////////////////////////////////////////////////
double MUnitConverter::ElectronVoltsToInvCentimeters(const double &val)
	{
	return MUnitsEnergyToWaveNumber(val*MUNITS_ELECTRONVOLT);
	}


////////////////////////////////////////////////
double MUnitConverter::ElectronVoltsToKelvin(const double &val)
	{
	return val*MUNITS_ELECTRONVOLT/MUNITS_BOLTZMANN_CONSTANT;
	}


////////////////////////////////////////////////
double MUnitConverter::HartreesToElectronVolts(const double &val)
	{
	return val*(MUNITS_HARTREE/MUNITS_ELECTRONVOLT);
	}


////////////////////////////////////////////////
double MUnitConverter::HartreesToJoules(const double &val)
	{
	return val*MUNITS_HARTREE;
	}


////////////////////////////////////////////////
double MUnitConverter::HartreesToInvCentimeters(const double &val)
	{
	return MUnitsEnergyToWaveNumber(val*MUNITS_HARTREE);
	}


////////////////////////////////////////////////
double MUnitConverter::HartreesToKelvin(const double &val)
	{
	return val*MUNITS_HARTREE/MUNITS_BOLTZMANN_CONSTANT;
	}


////////////////////////////////////////////////
double MUnitConverter::KelvinToElectronVolts(const double &val)
	{
	return val*MUNITS_BOLTZMANN_CONSTANT/MUNITS_ELECTRONVOLT;
	}


////////////////////////////////////////////////
double MUnitConverter::KelvinToHartrees(const double &val)
	{
	return val*MUNITS_BOLTZMANN_CONSTANT/MUNITS_HARTREE;
	}


////////////////////////////////////////////////
double MUnitConverter::KelvinToInvCentimeters(const double &val)
	{
	return MUnitsEnergyToWaveNumber(val * MUNITS_BOLTZMANN_CONSTANT );
	}


////////////////////////////////////////////////
double MUnitConverter::KelvinToJoules(const double &val)
	{
	return val*MUNITS_BOLTZMANN_CONSTANT;
	}


////////////////////////////////////////////////
double MUnitConverter::InvCentimetersToElectronVolts(const double &val)
	{
	return MUnitsWaveNumberToEnergy(val)/MUNITS_ELECTRONVOLT;
	}


////////////////////////////////////////////////
double MUnitConverter::InvCentimetersToHartrees(const double &val)
	{
	return MUnitsWaveNumberToEnergy(val)/MUNITS_HARTREE;
	}



////////////////////////////////////////////////
double MUnitConverter::InvCentimetersToKelvin(const double &val)
	{
	return MUnitsWaveNumberToEnergy(val)/MUNITS_BOLTZMANN_CONSTANT;
	}



////////////////////////////////////////////////
double MUnitConverter::InvCentimetersToJoules(const double &val)
	{
	return MUnitsWaveNumberToEnergy(val);
	}


/////////////////////////////////////////////////
double MUnitConverter::BohrToMeter(const double &val)
	{
	return val*MUNITS_BOHR;	
	}


/////////////////////////////////////////////////
double MUnitConverter::BohrToAngstrom(const double &val)
	{
	return val*(MUNITS_BOHR/MUNITS_ANGSTROM);	
	}


/////////////////////////////////////////////////
double MUnitConverter::MeterToBohr(const double &val)
	{
	return val/MUNITS_BOHR;	
	}


/////////////////////////////////////////////////
double MUnitConverter::AngstromToBohr(const double &val)
	{
	return val*(MUNITS_ANGSTROM/MUNITS_BOHR);
	}


/////////////////////////////////////////////////
double MUnitConverter::FemtoSecToAUTime(const double &val)
	{
	return val*(MUNITS_FEMTOSECOND*MUNITS_HARTREE/MUNITS_HBAR);
	}


/////////////////////////////////////////////////
double MUnitConverter::AUTimeToFemtoSec(const double &val)
	{
	return val*(MUNITS_HBAR/(MUNITS_FEMTOSECOND*MUNITS_HARTREE) );
	}



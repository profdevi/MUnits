//v0.0 copyright Comine.com 20050914W09
#ifndef MUnitConverter_h
#define MUnitConverter_h

//////////////////////////////////////////////////////
#include "MStdLib.h"
#include "MUnits.h"

/*
	Note: NIST uses E=k_b T
*/

//******************************************************
//**  MUnitConverter class
//******************************************************
class MUnitConverter
	{
	////////////////////////////////////////////////
	
	////////////////////////////////////////////////
	void ClearObject(void);
	
	////////////////////////////////////////////////
	public:
	MUnitConverter(bool create=false);
	~MUnitConverter(void);
	bool Create(void);
	bool Destroy(void);
	// Energy Conversions
	double JoulesToElectronVolts(const double &val);
	double JoulesToHartrees(const double &val);
	double JoulesToInvCentimeters(const double &val);
	double JoulesToKelvin(const double &val);

	double ElectronVoltsToJoules(const double &val);
	double ElectronVoltsToHartrees(const double &val);
	double ElectronVoltsToInvCentimeters(const double &val);
	double ElectronVoltsToKelvin(const double &val);

	double HartreesToElectronVolts(const double &val);
	double HartreesToJoules(const double &val);
	double HartreesToInvCentimeters(const double &val);
	double HartreesToKelvin(const double &val);

	double KelvinToElectronVolts(const double &val);
	double KelvinToHartrees(const double &val);
	double KelvinToInvCentimeters(const double &val);
	double KelvinToJoules(const double &val);

	double InvCentimetersToElectronVolts(const double &val);
	double InvCentimetersToHartrees(const double &val);
	double InvCentimetersToKelvin(const double &val);
	double InvCentimetersToJoules(const double &val);

	// Unit of Distance
	double BohrToMeter(const double &val);
	double BohrToAngstrom(const double &val);
	double MeterToBohr(const double &val);
	double AngstromToBohr(const double &val);

	// Unit of Time
	double FemtoSecToAUTime(const double &val);
	double AUTimeToFemtoSec(const double &val); 
	};

#endif // MUnitConverter_h


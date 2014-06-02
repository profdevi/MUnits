//v1.0 copyright Comine.com 20140602M1342
#include "MStdLib.h"
#include "MCommandArg.h"
#include "MUnitConverter.h"


//******************************************************
//* Module Elements
//******************************************************
static const char *GApplicationName="MUnits";	// Used in Help
static const char *GApplicationVersion="1.0";	// Used in Help

////////////////////////////////////////////////////
static void GDisplayHelp(void);

////////////////////////////////////////////////////
int main(int argn,const char *argv[])
	{
	MCommandArg args(argn,argv);
	if(args.CheckRemoveHelp()==true)
		{
		GDisplayHelp();
		return 0;
		}

	// check for verbose output
	bool verbose=false;
	if(args.CheckRemoveArg("-v")==true) { verbose=true; }

	// Check for correct args
	if(args.GetArgCount()<=2)
		{
		GDisplayHelp();
		return 0;
		}


	// Init the converter
	MUnitConverter conv(true);

	/*
				"                  cmha :  inv cm to Hartree\n"  
	*/
	// cmha :  inv cm to Hartree
	if(args.CheckRemoveArg("cmha")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%ginvcm=",val);  }
			
			MStdPrintf("%g",conv.InvCentimetersToHartrees(val ) );
			
			if(verbose==true) { MStdPrintf("Ha");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// cmev :  inv cm to Electron Volts
	if(args.CheckRemoveArg("cmev")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%ginvcm=",val);  }
			
			MStdPrintf("%g",conv.InvCentimetersToElectronVolts(val ) );
			
			if(verbose==true) { MStdPrintf("eV");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// cmj  :  inv cm to Joules
	if(args.CheckRemoveArg("cmk")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%ginvcm=",val);  }
			
			MStdPrintf("%g",conv.InvCentimetersToJoules(val ) );
			
			if(verbose==true) { MStdPrintf("J");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}


	// cmk  :  inv cm to Kelvin
	if(args.CheckRemoveArg("cmk")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%ginvcm=",val);  }
			
			MStdPrintf("%g",conv.InvCentimetersToKelvin(val ) );
			
			if(verbose==true) { MStdPrintf("invcm");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}


	// hacm :  Hartree to inv cm
	if(args.CheckRemoveArg("hacm")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gHa=",val);  }
			
			MStdPrintf("%g",conv.HartreesToInvCentimeters(val ) );
			
			if(verbose==true) { MStdPrintf("invcm");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	//haev :  Hartree to Electron Volts
	if(args.CheckRemoveArg("haev")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gHa=",val);  }
			
			MStdPrintf("%g",conv.HartreesToElectronVolts(val ) );
			
			if(verbose==true) { MStdPrintf("eV");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// haj : Jartree to Joules
	if(args.CheckRemoveArg("haj")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gHa=",val);  }
			
			MStdPrintf("%g",conv.HartreesToJoules(val ) );
			
			if(verbose==true) { MStdPrintf("J");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}
	
	// hak  :  Hartree to Kelvin
	if(args.CheckRemoveArg("hak")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gHa=",val);  }
			
			MStdPrintf("%g",conv.HartreesToKelvin(val ) );
			
			if(verbose==true) { MStdPrintf("K");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}
	

	// jcm  :  Joules to inv cm
	if(args.CheckRemoveArg("jcm")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gJ=",val);  }
			
			MStdPrintf("%g",conv.JoulesToInvCentimeters(val ) );
			
			if(verbose==true) { MStdPrintf("invcm");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// jev  :  Joules to to Electron Volts
	if(args.CheckRemoveArg("jev")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gJ=",val);  }
			
			MStdPrintf("%g",conv.JoulesToElectronVolts(val ) );
			
			if(verbose==true) { MStdPrintf("eV");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}	

	// jha  :  Joules to Hartrees
	if(args.CheckRemoveArg("jha")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gJ=",val);  }
			
			MStdPrintf("%g",conv.JoulesToHartrees(val ) );
			
			if(verbose==true) { MStdPrintf("Ha");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// jk   :  Joules to Kelvin
	if(args.CheckRemoveArg("jk")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gJ=",val);  }
			
			MStdPrintf("%g",conv.JoulesToKelvin(val ) );
			
			if(verbose==true) { MStdPrintf("K");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	
	// evcm :  Elevtron Volts to inv cm
	if(args.CheckRemoveArg("evcm")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%geV=",val);  }
			
			MStdPrintf("%g",conv.ElectronVoltsToInvCentimeters(val ) );
			
			if(verbose==true) { MStdPrintf("invcm");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// evj  :  Elevtron Volts to Joules
	if(args.CheckRemoveArg("evj")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%geV=",val);  }
			
			MStdPrintf("%g",conv.ElectronVoltsToJoules(val ) );
			
			if(verbose==true) { MStdPrintf("J");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// evha :  Elevtron Volts to Hartrees
	if(args.CheckRemoveArg("evha")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%geV=",val);  }
			
			MStdPrintf("%g",conv.ElectronVoltsToHartrees(val ) );
			
			if(verbose==true) { MStdPrintf("Ha");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// evk  :  Elevtron Volts to Kelvin (Equipartition Thm)
	if(args.CheckRemoveArg("evk")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%geV=",val);  }
			
			MStdPrintf("%g",conv.ElectronVoltsToKelvin(val ) );
			
			if(verbose==true) { MStdPrintf("K");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}
	
	// atfs :  Automic Unit Time to femtoseconds
	if(args.CheckRemoveArg("atfs")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gautime=",val);  }
			
			MStdPrintf("%g",conv.AUTimeToFemtoSec(val ) );
			
			if(verbose==true) { MStdPrintf("fs");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// fsat :  Femtoseconts time to automic unit time
	if(args.CheckRemoveArg("fsat")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gfs=",val);  }
			
			MStdPrintf("%g",conv.FemtoSecToAUTime(val ) );
			
			if(verbose==true) { MStdPrintf("autime");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// boan :  Bohr to Angstromes	
	if(args.CheckRemoveArg("boan")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gBohr=",val);  }
			
			MStdPrintf("%g",conv.BohrToAngstrom(val ) );
			
			if(verbose==true) { MStdPrintf("Ang");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	// anbo :  Angstromes to Bohr
	if(args.CheckRemoveArg("anbo")==true)
		{
		const int argcount=args.GetArgCount();
		for(int i=1;i<argcount;++i)
			{
			double val = MStdAToF(args.GetArg(i) );
			
			if(verbose==true) {  MStdPrintf("%gAng=",val);  }
			
			MStdPrintf("%g",conv.AngstromToBohr(val ) );
			
			if(verbose==true) { MStdPrintf("Bohr");  }
			
			MStdPrintf("\t");
			}
		
		MStdPrintf("\n");
		return 0;
		}

	GDisplayHelp();
	return 0;
	}



////////////////////////////////////////////////////
static void GDisplayHelp(void)
	{
	MStdPrintf(	"\n"
				"   usage:  %s <conv> <value>+ [-?|-v]\n"
				"           v%s copyright Comine.com\n"
				"\n"
				"   Program will convert a given value from one unit type to another\n"
				"   convertion type.  The -v flag will give a verbose output.\n"
				"\n"
				"   Convertion: \n"
				"\n"
				"     cmha :  inv cm to Hartree         cmev :  inv cm to Electron Volts\n"  
				"     cmj  :  inv cm to Joules          cmk  :  inv cm to Kelvin \n"  
				"     hacm :  Hartree to inv cm         haev :  Hartree to Electron Volts\n"  
				"     haj  :  Hartree to Joules         hak  :  Hartree to Kelvin \n"  
				"     jcm  :  Joules to inv cm          jev  :  Joules to to Electron Volts\n"  
				"     jha  :  Joules to Hartrees        jk   :  Joules to Kelvin \n"
				"     evcm :  eV to inv cm              evj  :  Elevtron Volts to Joules\n"  
				"     evha :  eV to hartrees            evk  :  Elevtron Volts to Kelvin\n"  
                "     atfs :  atomic Unit Time to fs    fsat :  fs time to atomic unit time\n"
				"     boan :  Bohr to Angstromes        anbo :  Angstromes to Bohr\n"
				"\n"
				,GApplicationName,GApplicationVersion);
	}




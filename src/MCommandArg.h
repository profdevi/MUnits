//v1.35 copyright Comine.com 20140204T1421
#ifndef MCommandArg_h
#define MCommandArg_h

///////////////////////////////////////////////////////
class MCommandArg
	{
	int mArg;											// Total Number of argum
	char **mArgv;										// Argument List
	char *mBlock;										// Block of memory for all args
	int mStartIndex;									// starting index
	bool mUnitTestOutput;								// unit test output

	////////////////////////////////////////////////
	void ClearObject(void);

	////////////////////////////////////////////////
	public:
	MCommandArg(void);
	MCommandArg(int arg,const char *argv[]);	// AutoCreate
	MCommandArg(int arg,char **argv);
	MCommandArg(const char *arguments);
	~MCommandArg(void);
	bool Create(int arg,const char *argv[]);
	bool Create(int arg,char **argv);
	bool Create(const char *arguments);
	bool Destroy(void);
	bool CheckArgHelp(void);
	bool CheckRemoveHelp(void);							// Check If Help Is Called
	bool RemoveArg(int index);
	int GetArgCount(void);
	const char *GetArg(int index);
	bool IsArgument(const char *argvalue,bool casesensitive=false);
	bool RemoveArg(const char *argvalue,bool casesensitive=false);
	bool CheckRemoveArg(const char *argvalue,bool casesense=false);
	bool GetNameValue(const char *name,const char *&value
			,int &index,bool casesense=false);//name="-size="
	};


#endif // MCommandArg_h



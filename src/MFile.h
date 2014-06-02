//v2.5 copyright Comine.com 20140518U0936
#ifndef MFile_h
#define MFile_h

///////////////////////////////////////////////////////
#include "MStdLib.h"

/////////////////////////////////////
#if ( defined(MSTDLIB_OS_WINDOWS) || defined(MSTDLIB_OS_WINDOWSOLD) || defined(MSTDLIB_OS_MINGW) ) 
#undef UNICODE
#include <windows.h>

#endif // MSTDLIB_OS_WINDOWS

//////////////////////////////////////////////////////
#include "MIReader.h"
#include "MIWriter.h"

//******************************************************
//**  MFileOutput class for binary output
//******************************************************
class MFileOutput:public MIWriter
	{
	////////////////////////////////
	#if ( defined(MSTDLIB_OS_WINDOWS) || defined(MSTDLIB_OS_WINDOWSOLD) || defined(MSTDLIB_OS_MINGW) ) 
	HANDLE mFile;												// Handle to file

	///////////////////////////////
	#else
	MStdFileHandle mFile;										// StdInput File

	#endif	// MSTDLIB_OS_WINDOWS

	//////////////////////////////////////////////
	void ClearObject(void);

	//////////////////////////////////////////////
	public:
	MFileOutput(void);
	MFileOutput(const char *filename,bool append=false);
	~MFileOutput(void);
	bool Create(const char *filename,bool append=false);
	bool Destroy(void);
	bool OnWrite(const void *buffer,int length);		// Callback Handler for MIWriter
	int Tell(void);										// =Current position

	////////////////////////////////////////////////
	#if ( defined(MSTDLIB_OS_WINDOWS) || defined(MSTDLIB_OS_WINDOWSOLD) || defined(MSTDLIB_OS_MINGW) ) 
	HANDLE GetHandle(void);

	////////////////////////////////////////////////
	#else
	MStdFileHandle GetHandle(void);

	#endif // MSTDLIB_OS_WINDOWS
	};


//******************************************************
//**  MFileInput class for binary input
//******************************************************
class MFileInput:public MIReader
	{
	///////////////////////////////////////////////
	#if ( defined(MSTDLIB_OS_WINDOWS) || defined(MSTDLIB_OS_WINDOWSOLD) || defined(MSTDLIB_OS_MINGW) ) 
	HANDLE mFile;

	//////////////////////////////////////////////
	#else
	MStdFileHandle mFile;

	#endif // MSTDLIB_OS_WINDOWS

	//////////////////////////////////////////////
	void ClearObject(void);

	//////////////////////////////////////////////
	public:
	MFileInput(void);
	MFileInput(const char *filename);
	~MFileInput(void);
	bool Create(const char *filename);
	bool Destroy(void);
	bool OnRead(void *block,int size);						// Callback Handler for MIReader
	int ReadToBuffer(void *buffer,int size);
	bool Seek(int offset,int relative=0);					// relative=0(beginning) 1(current) 2(end)
	int Tell(void);											// =Current position

	////////////////////////////////////////////////
	#if ( defined(MSTDLIB_OS_WINDOWS) || defined(MSTDLIB_OS_WINDOWSOLD) || defined(MSTDLIB_OS_MINGW) ) 
	HANDLE GetHandle(void);

	#else
	MStdFileHandle GetHandle(void);

	#endif // MSTDLIB_OS_WINDOWS
	};

#endif	// MFile_h

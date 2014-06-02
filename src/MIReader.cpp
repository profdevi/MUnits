//v1.4 copyright Comine.com 20110330W22
#include "MStdLib.h"
#include "MIReader.h"



/////////////////////////////////////////////////
bool MIReader::Read(char *string,int bufsize)
	{
	if(bufsize<1)
		{
		return false;
		}

	int i;
	for(i=0;i<bufsize-1;++i)
		{
		if(this->OnRead(string+i,1)==false)
			{
			string[i]=0;
			return true;
			}

		if(string[i]==0) { return true; }
		}

	// buffer full
	string[bufsize-1]=0;
	return true;	
	}


//////////////////////////////////////////////////
bool MIReader::Read(char &value)
	{
	if(this->OnRead(&value,sizeof(value))==false)
		{
		// May have reached end of file!
		return false;
		}

	return true;
	}


/////////////////////////////////////////////////
bool MIReader::Read(unsigned char &value)
	{
	if(this->OnRead(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


/////////////////////////////////////////////////
bool MIReader::Read(bool &value)
	{
	char bytevalue;
	if(this->OnRead(&bytevalue,sizeof(bytevalue))==false)
		{
		return false;
		}

	if(bytevalue==0)
		{
		value=false;
		}
	else
		{
		value=true;
		}

	return true;
	}


////////////////////////////////////////////////
bool MIReader::Read(short &value)
	{
	if(this->OnRead(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


////////////////////////////////////////////////
bool MIReader::Read(int &value)
	{
	if(this->OnRead(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


////////////////////////////////////////////////
bool MIReader::Read(unsigned long &value)
	{
	if(this->OnRead(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIReader::Read(float &value)
	{
	if(this->OnRead(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


//////////////////////////////////////////////
bool MIReader::Read(double &value)
	{
	if(this->OnRead(&value,sizeof(value))==false)
		{
		return false;
		}

	return true;
	}


//////////////////////////////////////////////
bool MIReader::Read(void *block,int size)
	{
	if(this->OnRead(block,size)==false)
		{
		return false;
		}

	return true;
	}


///////////////////////////////////////////////
bool MIReader::ReadLine(char *string,int bufsize)	// Reads whole line till '\n'
	{
	if(bufsize<1)
		{
		return false;
		}

	// Read Line
	int i;
	for(i=0;i<bufsize-1;++i)
		{
		if(this->OnRead(string+i,1)==false)
			{
			//= We have reached EOF
			if(i==0)
				{
				//=We have not input at all
				string[0]=0;
				return false;
				}

			//=We Have some input

			// Place terminating zero
			string[i]=0;
			return true;
			}

		if(string[i]==0)
			{
			return false;
			}

		//Check for end of file
		if(string[i]=='\n')
			{
			string[i+1]=0;
			return true;
			}
		}

	// buffer full
	string[bufsize-1]=0;
	return true;
	}


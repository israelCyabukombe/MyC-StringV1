/********************************************************************
*** NAME : Israel Cyabukombe
*** CLASS : CSc 346
*** ASSIGNMENT : 	4
*** DUE DATE : 3/30/2016
*** INSTRUCTOR : GAMRADT
*********************************************************************
*** DESCRIPTION :This implement file will implements the a String346
				 function step by step
				 C++ string
*******************************************************************/
#include "cyabukoi4.h"
#include <iostream>
#include <cstdlib>
#include<cstring>

namespace StringNS {
	/********************************************************************
	*** FUNCTION : constructor
	*********************************************************************
	*** DESCRIPTION : default  parametized consructor that creates a string 346 from the passed in char*
	*** INPUT ARGS : inStr
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : nothing
	********************************************************************/
	String346::String346(const char * inStr) :data(NULL), size(0)
	{
		using std::nothrow;
		using std::cout;
		size = strlen(inStr);
		if (size != 0)
		{
			(*this).data = new(nothrow) char[getSize()];
			if (data == NULL)
			{
				cout << "Memory allocation failed!";
			}
			else
			{
				for (unsigned int i = 0; i < size; i++)
				{
					data[i] = inStr[i];
				}
			}
		}

		//Test New
	}

	/********************************************************************
	*** FUNCTION : copy constructor
	*********************************************************************
	*** DESCRIPTION : It accepts an instance of a class String and then it
					  reuses the copy function with the invoking instance( this)
	*** INPUT ARGS : copiedStr- the object to be copied
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : nothing
	********************************************************************/

	String346::String346(const String346 &copiedStr) :data(NULL), size(0)
	{
		copy(copiedStr);
	}

	/********************************************************************
	*** FUNCTION : destructor
	*********************************************************************
	*** DESCRIPTION : reuses destroy to free memory of the String class
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : nothing
	********************************************************************/
	String346::~String346()
	{
		destroy();
	}
	/********************************************************************
	*** FUNCTION : copy
	*********************************************************************
	*** DESCRIPTION : accepts and instance and copies it in the invoking
					  instance access through the this pointer
	*** INPUT ARGS : cop
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : (*this)
	********************************************************************/
	String346 & String346::copy(const String346 & cop) {
		using std::nothrow;
		destroy();
		size = cop.getSize();
		if (cop.getSize() == 0)
		{
			destroy();
		}
		else
		{
			data = new(nothrow) char[getSize()];
			for (unsigned int i = 0; i < size; i++)
			{
				data[i] = cop.data[i];
			}
		}

		return (*this);
	}
	/********************************************************************
	*** FUNCTION : copy
	*********************************************************************
	*** DESCRIPTION : it copies a passed in char string into the String
					  class instance
	*** INPUT ARGS  : char * inStr1
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : (*this) invoking class
	********************************************************************/
	String346 & String346::copy(const char *inStr1)
	{
		String346 Temp(inStr1);
		(*this).copy(Temp);

		return (*this);
	}
	/********************************************************************
	*** FUNCTION : concat
	*********************************************************************
	*** DESCRIPTION : concatinates a string from passedin object to the current
					  string inside the invoking class reuses destroy and constructor
	*** INPUT ARGS : String346 & cop
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN : (*this) class invocationd
	********************************************************************/
	String346 & String346::concat(const String346 & cop)
	{
		using std::nothrow;
		unsigned int i = 0;
		unsigned int j = 0;
		String346 Temp(*this);
		destroy();

		size = Temp.getSize() + cop.getSize();
		data = new(nothrow) char[getSize()];
		for (i; i < Temp.getSize(); i++)
		{
			data[i] = Temp.data[i];
		}
		for (i; i < size; i++)
		{
			data[i] = cop.data[j];
			j++;
		}

		return(*this);
	}
	/********************************************************************
	*** FUNCTION :concat
	*********************************************************************
	*** DESCRIPTION : concatenates a char * passed in to the invoking instance
					  reuses constructor and conc(class inst)
	*** INPUT ARGS : char*inStr2
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :return( *this)
	********************************************************************/
	String346 & String346::concat(const char *inStr2)
	{
		String346 Temp(inStr2);

		(*this).concat(Temp);

		return (*this);
	}
	/********************************************************************
	*** FUNCTION :lessThan
	*********************************************************************
	*** DESCRIPTION : compares the passed in obj's string to the invocation
					  string
	*** INPUT ARGS :String346 & copy
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : boolean
	********************************************************************/
	bool String346::lessThan(const String346 & copy)const
	{
		bool c;
		unsigned loopsize = 0;
		if (copy.getSize() < (*this).getSize())
		{
			loopsize = (copy).getSize();
		}
		else {
			loopsize = (*this).getSize();
		}
		for (unsigned int i = 0; i < loopsize; i++)
		{
			if ((*this).data[i] < copy.data[i])   // if the invoking instance(this) is less than passed in instance
			{
				c = true;
			}
			else
			{
				c = false;
			}
		}
		return c;
	}
	/********************************************************************
	*** FUNCTION :lessThan
	*********************************************************************
	*** DESCRIPTION : Recieves a char * string and resuses concat (obj) and
					  the constructor by instatiating a temporary instance
	*** INPUT ARGS :char * inStr3
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : bolean
	********************************************************************/
	bool String346::lessThan(const char * inStr3)const
	{
		String346 Temp(inStr3);
		return (*this).lessThan(Temp);
	}
	/********************************************************************
	*** FUNCTION : greaterThan
	*********************************************************************
	*** DESCRIPTION : resuses the lessThan function and compares the passed in
					  obj's string with the invoking class' string character by
					  character
	*** INPUT ARGS : String346 & pInst
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN : boolean
	********************************************************************/
	bool String346::greaterThan(const String346 & pInst)const
	{
		bool b;
		if (lessThan(pInst) == false && pInst.lessThan(*this) == true)
		{
			b = true;
			//return(*this).lessThan(pInst);
		}
		else
		{
			b = false;
			//return(pInst.lessThan(*this));
		}
		return b;
	}
	/********************************************************************
	*** FUNCTION : greaterThan
	*********************************************************************
	*** DESCRIPTION : reuses the greaterThan( Obj) function to create the
					  the string and compare a passed in string with the
					  invocation class string
	*** INPUT ARGS :char *inStr4
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :boolean value
	********************************************************************/
	bool String346::greaterThan(const char *inStr4)const
	{
		String346 Temp(inStr4);

		return (*this).greaterThan(Temp);
	}
	/********************************************************************
	*** FUNCTION :equal
	*********************************************************************
	*** DESCRIPTION : resuses lessThan and greater than to compare two obj
					  strings, return true if there equal and otherwise it
					  returns false
	*** INPUT ARGS :String346 & cop
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :
	********************************************************************/
	bool String346::equal(const String346 & cop)const
	{
		bool b;
		if ((*this).lessThan(cop) == false && (*this).greaterThan(cop) == false)
		{
			b = true;
		}
		else
		{
			b = false;
		}

		return b;
	}
	/********************************************************************
	*** FUNCTION :char*inStr5
	*********************************************************************
	*** DESCRIPTION : reuses the above equal function by creating a string
					  from the passed in char * string
	*** INPUT ARGS :char*inStr5
	*** OUTPUT ARGS :
	*** IN/OUT ARGS :
	*** RETURN :(*this).equal(Temp)
	********************************************************************/
	bool String346::equal(const char*inStr5)const
	{
		bool b;
		String346 Temp(inStr5);
		b = (*this).equal(Temp);
		return b;
	}
	/********************************************************************
	*** FUNCTION : view()
	*********************************************************************
	*** DESCRIPTION : display the current state of the String346 obj
	*** INPUT ARGS :none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN :nothing
	********************************************************************/
	void String346::view()const
	{
		using std::cout;
		for (unsigned int i = 0; i < getSize(); i++)
		{
			cout << (*this).data[i];
		}
	}
	/********************************************************************
	*** FUNCTION : decrement()
	*********************************************************************
	*** DESCRIPTION : reduces the current string to the lower string according
					  the characters ASCII values, char by character
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN : (*this)
	********************************************************************/
	String346 & String346::decrement() {
		for (unsigned int i = 0; i < getSize(); i++)
		{
			data[i] = --data[i];
		}
		return(*this);
	}

	/********************************************************************
	*** FUNCTION : destroy
	*********************************************************************
	*** DESCRIPTION : emptys the string class by deleting array and setting size to zero
	*** INPUT ARGS :none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :nothing
	*** RETURN :nothing
	********************************************************************/

	void String346::destroy()
	{
		delete[] data;
		data = NULL;
		size = 0;
		return;
	}
}
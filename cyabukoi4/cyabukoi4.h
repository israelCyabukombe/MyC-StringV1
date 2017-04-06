/********************************************************************
*** NAME : Israel Cyabukombe
*** CLASS : CSc 346
*** ASSIGNMENT : 	4
*** DUE DATE : 3/30/2016
*** INSTRUCTOR : GAMRADT
*********************************************************************
*** DESCRIPTION :This header file will defines a String346 class
				 with class implementation that will operate as the
				 C++ string
*******************************************************************/

#ifndef _CYABUKOI4_H
#define _CYABUKOI4_H

namespace StringNS {
	class String346 {
	public:
		/********************************************************************
		*** FUNCTION : constructor
		*********************************************************************
		*** DESCRIPTION : default  parametized consructor that creates a string 346 from the passed in char*
		*** INPUT ARGS : inStr
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : nothing
		********************************************************************/
		explicit String346(const char * = "");
		/********************************************************************
		*** FUNCTION : copy constructor
		*********************************************************************
		*** DESCRIPTION : It accepts an instance of a class String and then it
						  creates a copy of it
		*** INPUT ARGS : obj
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : nothing
		********************************************************************/
		String346(const String346 &);
		/********************************************************************
		*** FUNCTION : destructor
		*********************************************************************
		*** DESCRIPTION : destroys the string class when program terminates
		*** INPUT ARGS : none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : nothing
		********************************************************************/
		~String346();
		/********************************************************************
		*** FUNCTION : getSize()
		*********************************************************************
		*** DESCRIPTION : returns the sizeof the string
		*** INPUT ARGS : none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : Unsigned int size
		********************************************************************/
		inline unsigned int getSize() const;
		/********************************************************************
		*** FUNCTION : copy
		*********************************************************************
		*** DESCRIPTION : accepts an instance and copies the string into the
						  invonking class string
		*** INPUT ARGS : String Obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : (*this)
		********************************************************************/
		String346 & copy(const String346 &);
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
		String346 & copy(const char * = "");
		/********************************************************************
		*** FUNCTION : concat
		*********************************************************************
		*** DESCRIPTION : concatinates a string from passedin object to the current
						  string inside the invoking class
		*** INPUT ARGS : String346 & obj
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN : (*this) class invocationd
		********************************************************************/
		String346 & concat(const String346 &);
		/********************************************************************
		*** FUNCTION :
		*********************************************************************
		*** DESCRIPTION :
		*** INPUT ARGS :
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		String346 & concat(const char * = "");
		/********************************************************************
		*** FUNCTION :lessThan
		*********************************************************************
		*** DESCRIPTION : compares the passed in obj's string to the invocation
						  string
		*** INPUT ARGS :String346 & obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : boolean
		********************************************************************/
		bool lessThan(const String346 &)const;
		/********************************************************************
		*** FUNCTION : lessThan
		*********************************************************************
		*** DESCRIPTION : compares the passed in char* string to the invoking
						  class string and return true or false
		*** INPUT ARGS : char *
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : boolean
		********************************************************************/
		bool lessThan(const char * = "")const;
		/********************************************************************
		*** FUNCTION : greaterThan
		*********************************************************************
		*** DESCRIPTION : resuses the lessThan function and compares the passed in
		obj's string with the invoking class' string character by
		character
		*** INPUT ARGS : String346 & Obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN : boolean
		********************************************************************/
		bool greaterThan(const String346 &)const;
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
		bool greaterThan(const char * = "")const;
		/********************************************************************
		*** FUNCTION :equal
		*********************************************************************
		*** DESCRIPTION : resuses lessThan and greater than to compare two obj
		strings, return true if there equal and otherwise it
		returns false
		*** INPUT ARGS :String346 & obj
		*** OUTPUT ARGS :
		*** IN/OUT ARGS :
		*** RETURN :
		********************************************************************/
		bool equal(const String346 &)const;
		/********************************************************************
		*** FUNCTION : equal
		*********************************************************************
		*** DESCRIPTION : returns true or false after comparing to string objects
		*** INPUT ARGS :none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN :nothing
		********************************************************************/
		bool equal(const char* = "")const;
		/********************************************************************
		*** FUNCTION : decrement()
		*********************************************************************
		*** DESCRIPTION : reduces the current string to a lower string according
						  AScii valuew
		*** INPUT ARGS : none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :nothing
		*** RETURN : (*this)
		********************************************************************/
		String346 & decrement();
		/********************************************************************
		*** FUNCTION : view()
		*********************************************************************
		*** DESCRIPTION : display the current state of the String346 obj
		*** INPUT ARGS :none
		*** OUTPUT ARGS :none
		*** IN/OUT ARGS :none
		*** RETURN :nothing
		********************************************************************/
		void view()const;

	private:
		void destroy();
		char * data;
		unsigned int size;
	};
	/********************************************************************
	*** FUNCTION : getSize()
	*********************************************************************
	*** DESCRIPTION : returns the current size of the String when a constructor
					  is invoked or when the size is changed
	*** INPUT ARGS : none
	*** OUTPUT ARGS :none
	*** IN/OUT ARGS :none
	*** RETURN :size
	********************************************************************/
	inline unsigned int String346::getSize() const {
		return  size;
	}
}

#endif // _CYABUKOI4_H

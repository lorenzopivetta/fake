/*----- PROTECTED REGION ID(Fake.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        Fake.cpp
//
// description : C++ source for the Fake class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               Fake are implemented in this file.
//
// project :     Fake
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <Fake.h>
#include <FakeClass.h>

/*----- PROTECTED REGION END -----*/	//	Fake.cpp

/**
 *  Fake class description:
 *    
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//================================================================
//  State         |  Inherited (no method)
//  Status        |  Inherited (no method)
//================================================================

//================================================================
//  Attributes managed is:
//================================================================
//================================================================

namespace Fake_ns
{
/*----- PROTECTED REGION ID(Fake::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	Fake::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : Fake::Fake()
 *	Description : Constructors for a Tango device
 *                implementing the classFake
 */
//--------------------------------------------------------
Fake::Fake(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(Fake::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Fake::constructor_1
}
//--------------------------------------------------------
Fake::Fake(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(Fake::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Fake::constructor_2
}
//--------------------------------------------------------
Fake::Fake(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(Fake::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Fake::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : Fake::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void Fake::delete_device()
{
	DEBUG_STREAM << "Fake::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(Fake::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	Fake::delete_device
}

//--------------------------------------------------------
/**
 *	Method      : Fake::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void Fake::init_device()
{
	DEBUG_STREAM << "Fake::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(Fake::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	Fake::init_device_before
	
	//	No device property to be read from database
	
	/*----- PROTECTED REGION ID(Fake::init_device) ENABLED START -----*/
	
	//	Initialize device
	set_state(Tango::ON);
	
	/*----- PROTECTED REGION END -----*/	//	Fake::init_device
}


//--------------------------------------------------------
/**
 *	Method      : Fake::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void Fake::always_executed_hook()
{
	DEBUG_STREAM << "Fake::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(Fake::always_executed_hook) ENABLED START -----*/
	
	//	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	Fake::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : Fake::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void Fake::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Fake::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Fake::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	Fake::read_attr_hardware
}


//--------------------------------------------------------
/**
 *	Method      : Fake::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void Fake::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(Fake::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	Fake::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : Fake::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void Fake::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(Fake::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
	/*----- PROTECTED REGION END -----*/	//	Fake::add_dynamic_commands
}

/*----- PROTECTED REGION ID(Fake::namespace_ending) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Fake::namespace_ending
} //	namespace

// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "xmlschema.h"
#include "buffer.h"
#include "xmlschema.pypp.hpp"

namespace bp = boost::python;

static boost::python::object fromBuffer_bb8de6e12f421acfa47c0f7d2a4e5ed4( ::osiris::Buffer const & buffer ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::XMLSchema> result = ::osiris::XMLSchema::fromBuffer(buffer);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object fromFile_31ba079fc4d7961cca13b5014eed7ac4( ::osiris::String const & filename ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::XMLSchema> result = ::osiris::XMLSchema::fromFile(filename);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object fromString_8b05e812c1accab21c7f73e57e1ac906( ::osiris::String const & str ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::boost::shared_ptr<osiris::XMLSchema> result = ::osiris::XMLSchema::fromString(str);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void parseBuffer_e516c03339d4350e5a480e3afd59dd2f( ::osiris::XMLSchema & inst, ::osiris::Buffer const & buffer ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.parseBuffer(buffer);
    __pythreadSaver.restore();
}

static void parseFile_5ee4b2a01a5acc055f6e909a41198472( ::osiris::XMLSchema & inst, ::osiris::String const & filename ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.parseFile(filename);
    __pythreadSaver.restore();
}

static void parseString_d6d17bd3aca0cce0c1ac5a6bcf0437c8( ::osiris::XMLSchema & inst, ::osiris::String const & str ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.parseString(str);
    __pythreadSaver.restore();
}

void register_XMLSchema_class(){

    { //::osiris::XMLSchema
        typedef ::boost::python::class_< ::osiris::XMLSchema, ::boost::noncopyable > XMLSchema_exposer_t;
        XMLSchema_exposer_t XMLSchema_exposer = XMLSchema_exposer_t( "XMLSchema", ::boost::python::no_init );
        ::boost::python::scope XMLSchema_scope( XMLSchema_exposer );
        XMLSchema_exposer.def( ::boost::python::init< >() );
        { //::osiris::XMLSchema::fromBuffer
        
            typedef boost::python::object ( *fromBuffer_function_type )( ::osiris::Buffer const & );
            
            XMLSchema_exposer.def( 
                "fromBuffer"
                , fromBuffer_function_type( &fromBuffer_bb8de6e12f421acfa47c0f7d2a4e5ed4 )
                , ( ::boost::python::arg("buffer") ) );
        
        }
        { //::osiris::XMLSchema::fromFile
        
            typedef boost::python::object ( *fromFile_function_type )( ::osiris::String const & );
            
            XMLSchema_exposer.def( 
                "fromFile"
                , fromFile_function_type( &fromFile_31ba079fc4d7961cca13b5014eed7ac4 )
                , ( ::boost::python::arg("filename") ) );
        
        }
        { //::osiris::XMLSchema::fromString
        
            typedef boost::python::object ( *fromString_function_type )( ::osiris::String const & );
            
            XMLSchema_exposer.def( 
                "fromString"
                , fromString_function_type( &fromString_8b05e812c1accab21c7f73e57e1ac906 )
                , ( ::boost::python::arg("str") ) );
        
        }
        { //::osiris::XMLSchema::parseBuffer
        
            typedef void ( *parseBuffer_function_type )( ::osiris::XMLSchema &,::osiris::Buffer const & );
            
            XMLSchema_exposer.def( 
                "parseBuffer"
                , parseBuffer_function_type( &parseBuffer_e516c03339d4350e5a480e3afd59dd2f )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("buffer") ) );
        
        }
        { //::osiris::XMLSchema::parseFile
        
            typedef void ( *parseFile_function_type )( ::osiris::XMLSchema &,::osiris::String const & );
            
            XMLSchema_exposer.def( 
                "parseFile"
                , parseFile_function_type( &parseFile_5ee4b2a01a5acc055f6e909a41198472 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("filename") ) );
        
        }
        { //::osiris::XMLSchema::parseString
        
            typedef void ( *parseString_function_type )( ::osiris::XMLSchema &,::osiris::String const & );
            
            XMLSchema_exposer.def( 
                "parseString"
                , parseString_function_type( &parseString_d6d17bd3aca0cce0c1ac5a6bcf0437c8 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("str") ) );
        
        }
        XMLSchema_exposer.staticmethod( "fromBuffer" );
        XMLSchema_exposer.staticmethod( "fromFile" );
        XMLSchema_exposer.staticmethod( "fromString" );
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::XMLSchema > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::XMLSchema >, boost::shared_ptr< ::osiris::Object > >();
    }

}
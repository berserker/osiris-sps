// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "searchpostoptions.h"
#include "idesearchparam.h"
#include "searchpostoptions.pypp.hpp"

namespace bp = boost::python;

struct SearchPostOptions_wrapper : ::osiris::SearchPostOptions, ::osiris::PythonWrapper< ::osiris::SearchPostOptions > {

    SearchPostOptions_wrapper(::osiris::SearchPostOptions const & arg )
    : ::osiris::SearchPostOptions( arg )
      , ::osiris::PythonWrapper< ::osiris::SearchPostOptions >(){
        // copy constructor
        
    }

    SearchPostOptions_wrapper( )
    : ::osiris::SearchPostOptions( )
      , ::osiris::PythonWrapper< ::osiris::SearchPostOptions >(){
        // null constructor
    
    }

    virtual ::boost::shared_ptr< osiris::IdeSearchParam > getControl(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getControl = this->get_override( "getControl" ) )
            return func_getControl(  );
        else{
            __pystate.leave();
            return this->::osiris::ISearchOptions::getControl(  );
        }
    }
    
    ::boost::shared_ptr< osiris::IdeSearchParam > default_getControl(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::ISearchOptions::getControl( );
    }

};

void register_SearchPostOptions_class(){

    ::boost::python::class_< SearchPostOptions_wrapper, ::boost::python::bases< ::osiris::ISearchOptions > >( "SearchPostOptions", ::boost::python::init< >() )    
        .def( 
            "getControl"
            , (::boost::shared_ptr< osiris::IdeSearchParam > ( ::osiris::ISearchOptions::* )(  ) )(&::osiris::ISearchOptions::getControl)
            , (::boost::shared_ptr< osiris::IdeSearchParam > ( SearchPostOptions_wrapper::* )(  ) )(&SearchPostOptions_wrapper::default_getControl) );

}
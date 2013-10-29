// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "extensionsmoduleeditor.h"
#include "xmldocument.h"
#include "ideskin.h"
#include "idesession.h"
#include "ideportalcontrol.h"
#include "datatree.h"
#include "htmlattributes.h"
#include "htmlevent.h"
#include "eventssource.h"
#include "htmlvirtualpage.h"
#include "htmlwriter.h"
#include "httprequest.h"
#include "httpresponse.h"
#include "httpsession.h"
#include "extensionsmoduleeditor.pypp.hpp"

namespace bp = boost::python;

struct ExtensionsModuleEditor_wrapper : ::osiris::ExtensionsModuleEditor, ::osiris::PythonWrapper< ::osiris::ExtensionsModuleEditor > {

    ExtensionsModuleEditor_wrapper( )
    : ::osiris::ExtensionsModuleEditor( )
      , ::osiris::PythonWrapper< ::osiris::ExtensionsModuleEditor >(){
        // null constructor
    
    }

    static boost::python::object getEventCreateDocument( ::osiris::ExtensionsModuleEditor const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::boost::shared_ptr<osiris::EventSource> result = inst.getEventCreateDocument();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual bool createDocument(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_createDocument = this->get_override( "createDocument" ) )
            return func_createDocument(  );
        else{
            __pystate.leave();
            return this->::osiris::ExtensionsModuleEditor::createDocument(  );
        }
    }
    
    bool default_createDocument(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::ExtensionsModuleEditor::createDocument( );
    }

    bool decodeEvent( ::osiris::String const & command, ::osiris::String & eventName, ::osiris::HtmlEvent & e ) const {
        return ::osiris::IHtmlControl::decodeEvent( boost::ref(command), boost::ref(eventName), boost::ref(e) );
    }

    ::osiris::String encodeEvent( ::osiris::String const & eventName, ::osiris::HtmlEvent const * e=(osiris::null) ) const {
        return ::osiris::IHtmlControl::encodeEvent( boost::ref(eventName), boost::python::ptr(e) );
    }

    virtual ::boost::shared_ptr< osiris::HttpSession > getSession(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getSession = this->get_override( "getSession" ) )
            return func_getSession(  );
        else{
            __pystate.leave();
            return this->::osiris::IHtmlControl::getSession(  );
        }
    }
    
    ::boost::shared_ptr< osiris::HttpSession > default_getSession(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IHtmlControl::getSession( );
    }

    virtual bool init( ::boost::shared_ptr< osiris::IExtensionsModule > module, ::osiris::String const & title, ::osiris::UniqueID const & instance, ::osiris::String const & xml ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_init = this->get_override( "init" ) )
            return func_init( module, boost::ref(title), boost::ref(instance), boost::ref(xml) );
        else{
            __pystate.leave();
            return this->::osiris::ExtensionsModuleControl::init( module, boost::ref(title), boost::ref(instance), boost::ref(xml) );
        }
    }
    
    bool default_init( ::boost::shared_ptr< osiris::IExtensionsModule > module, ::osiris::String const & title, ::osiris::UniqueID const & instance, ::osiris::String const & xml ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::ExtensionsModuleControl::init( module, boost::ref(title), boost::ref(instance), boost::ref(xml) );
    }

    virtual void onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onEvent = this->get_override( "onEvent" ) )
            func_onEvent( boost::ref(name), boost::python::ptr(e) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
        }
    }
    
    virtual void default_onEvent( ::osiris::String const & name, ::osiris::IEvent * e=(osiris::null) ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onEvent( boost::ref(name), boost::python::ptr(e) );
    }

    virtual void onInit(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onInit(  );
        }
    }
    
    virtual void default_onInit(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onInit( );
    }

    virtual void onLoad(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoad(  );
        }
    }
    
    virtual void default_onLoad(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoad( );
    }

    virtual void onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoadViewState = this->get_override( "onLoadViewState" ) )
            func_onLoadViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onLoadViewState( ::osiris::DataTree const & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onLoadViewState( boost::ref(state) );
    }

    virtual void onPreRender(  ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onPreRender(  );
        }
    }
    
    virtual void default_onPreRender(  ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onPreRender( );
    }

    virtual void onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onRender = this->get_override( "onRender" ) )
            func_onRender( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::HtmlDiv::onRender( boost::ref(writer) );
        }
    }
    
    virtual void default_onRender( ::osiris::HtmlWriter & writer ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::HtmlDiv::onRender( boost::ref(writer) );
    }

    virtual void onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onSaveViewState = this->get_override( "onSaveViewState" ) )
            func_onSaveViewState( boost::ref(state) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
        }
    }
    
    virtual void default_onSaveViewState( ::osiris::DataTree & state ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::onSaveViewState( boost::ref(state) );
    }

    virtual void renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderAttributes = this->get_override( "renderAttributes" ) )
            func_renderAttributes( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
        }
    }
    
    void default_renderAttributes( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderAttributes( boost::ref(writer) );
    }

    virtual void renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_renderChilds = this->get_override( "renderChilds" ) )
            func_renderChilds( boost::ref(writer) );
        else{
            __pystate.leave();
            this->::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
        }
    }
    
    void default_renderChilds( ::osiris::HtmlWriter & writer ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IHtmlControl::renderChilds( boost::ref(writer) );
    }

    void saveViewState( ::osiris::DataTree & states ){
        ::osiris::IHtmlControl::saveViewState( boost::ref(states) );
    }

};

void register_ExtensionsModuleEditor_class(){

    { //::osiris::ExtensionsModuleEditor
        typedef ::boost::python::class_< ExtensionsModuleEditor_wrapper, ::boost::python::bases< ::osiris::ExtensionsModuleControl >, ::boost::noncopyable > ExtensionsModuleEditor_exposer_t;
        ExtensionsModuleEditor_exposer_t ExtensionsModuleEditor_exposer = ExtensionsModuleEditor_exposer_t( "ExtensionsModuleEditor", ::boost::python::init< >() );
        ::boost::python::scope ExtensionsModuleEditor_scope( ExtensionsModuleEditor_exposer );
        { //::osiris::ExtensionsModuleEditor::getEventCreateDocument
        
            typedef boost::python::object ( *getEventCreateDocument_function_type )( ::osiris::ExtensionsModuleEditor const & );
            
            ExtensionsModuleEditor_exposer.def( 
                "getEventCreateDocument"
                , getEventCreateDocument_function_type( &ExtensionsModuleEditor_wrapper::getEventCreateDocument ) );
        
        }
        { //::osiris::ExtensionsModuleEditor::createDocument
        
            typedef bool ( ::osiris::ExtensionsModuleEditor::*createDocument_function_type )(  ) ;
            typedef bool ( ExtensionsModuleEditor_wrapper::*default_createDocument_function_type )(  ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "createDocument"
                , createDocument_function_type(&::osiris::ExtensionsModuleEditor::createDocument)
                , default_createDocument_function_type(&ExtensionsModuleEditor_wrapper::default_createDocument) );
        
        }
        ExtensionsModuleEditor_exposer.def_readonly( "EVENT_ONCREATEDOCUMENT", ::osiris::ExtensionsModuleEditor::EVENT_ONCREATEDOCUMENT );
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( ExtensionsModuleEditor_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            ExtensionsModuleEditor_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &ExtensionsModuleEditor_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( ExtensionsModuleEditor_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            ExtensionsModuleEditor_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &ExtensionsModuleEditor_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ExtensionsModuleEditor_wrapper::*default_getSession_function_type )(  ) const;
            
            ExtensionsModuleEditor_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&ExtensionsModuleEditor_wrapper::default_getSession) );
        
        }
        { //::osiris::ExtensionsModuleControl::init
        
            typedef bool ( ::osiris::ExtensionsModuleControl::*init_function_type )( ::boost::shared_ptr< osiris::IExtensionsModule >,::osiris::String const &,::osiris::UniqueID const &,::osiris::String const & ) ;
            typedef bool ( ExtensionsModuleEditor_wrapper::*default_init_function_type )( ::boost::shared_ptr< osiris::IExtensionsModule >,::osiris::String const &,::osiris::UniqueID const &,::osiris::String const & ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "init"
                , init_function_type(&::osiris::ExtensionsModuleControl::init)
                , default_init_function_type(&ExtensionsModuleEditor_wrapper::default_init)
                , ( ::boost::python::arg("module"), ::boost::python::arg("title"), ::boost::python::arg("instance"), ::boost::python::arg("xml") ) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( ExtensionsModuleEditor_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "onEvent"
                , onEvent_function_type( &ExtensionsModuleEditor_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::onInit
        
            typedef void ( ExtensionsModuleEditor_wrapper::*onInit_function_type )(  ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "onInit"
                , onInit_function_type( &ExtensionsModuleEditor_wrapper::default_onInit ) );
        
        }
        { //::osiris::IHtmlControl::onLoad
        
            typedef void ( ExtensionsModuleEditor_wrapper::*onLoad_function_type )(  ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "onLoad"
                , onLoad_function_type( &ExtensionsModuleEditor_wrapper::default_onLoad ) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( ExtensionsModuleEditor_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &ExtensionsModuleEditor_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::onPreRender
        
            typedef void ( ExtensionsModuleEditor_wrapper::*onPreRender_function_type )(  ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "onPreRender"
                , onPreRender_function_type( &ExtensionsModuleEditor_wrapper::default_onPreRender ) );
        
        }
        { //::osiris::HtmlDiv::onRender
        
            typedef void ( ExtensionsModuleEditor_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "onRender"
                , onRender_function_type( &ExtensionsModuleEditor_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( ExtensionsModuleEditor_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &ExtensionsModuleEditor_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( ExtensionsModuleEditor_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&ExtensionsModuleEditor_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( ExtensionsModuleEditor_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&ExtensionsModuleEditor_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( ExtensionsModuleEditor_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            ExtensionsModuleEditor_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &ExtensionsModuleEditor_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //property "eventCreateDocument"[fget=::osiris::ExtensionsModuleEditor::getEventCreateDocument]
        
            typedef ::boost::shared_ptr<osiris::EventSource> ( ::osiris::ExtensionsModuleEditor::*fget )(  ) const;
            
            ExtensionsModuleEditor_exposer.add_property( 
                "eventCreateDocument"
                , fget( &::osiris::ExtensionsModuleEditor::getEventCreateDocument )
                , "get property, built on top of \"boost::shared_ptr<osiris::EventSource> osiris::ExtensionsModuleEditor::getEventCreateDocument() const [member function]\"" );
        
        }
        ::boost::python::register_ptr_to_python< boost::shared_ptr< ::osiris::ExtensionsModuleEditor > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ExtensionsModuleEditor >, boost::shared_ptr< ::osiris::ExtensionsModuleControl > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ExtensionsModuleEditor >, boost::shared_ptr< ::osiris::IPortalPageControl< osiris::HtmlDiv > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ExtensionsModuleEditor >, boost::shared_ptr< ::osiris::IPageControl< osiris::HtmlDiv > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ExtensionsModuleEditor >, boost::shared_ptr< ::boost::noncopyable_::noncopyable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ExtensionsModuleEditor >, boost::shared_ptr< ::boost::signals::trackable > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ExtensionsModuleEditor >, boost::shared_ptr< ::osiris::enable_this_ptr< osiris::IHtmlControl > > >();
        ::boost::python::implicitly_convertible< boost::shared_ptr< ::osiris::ExtensionsModuleEditor >, boost::shared_ptr< ::osiris::Object > >();
    }

}
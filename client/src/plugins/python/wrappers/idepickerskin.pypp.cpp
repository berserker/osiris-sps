// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "idepickerskin.h"
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
#include "idepickerskin.pypp.hpp"

namespace bp = boost::python;

struct IdePickerSkin_wrapper : ::osiris::IdePickerSkin, ::osiris::PythonWrapper< ::osiris::IdePickerSkin > {

    IdePickerSkin_wrapper( )
    : ::osiris::IdePickerSkin( )
      , ::osiris::PythonWrapper< ::osiris::IdePickerSkin >(){
        // null constructor
    
    }

    static boost::python::object getShowSystem( ::osiris::IdePickerSkin const & inst ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        bool result = inst.getShowSystem();
        __pythreadSaver.restore();
        return boost::python::object( result );
    }

    virtual void onLoad(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onLoad = this->get_override( "onLoad" ) )
            func_onLoad(  );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSkin::onLoad(  );
        }
    }
    
    void default_onLoad(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSkin::onLoad( );
    }

    virtual void onPreRender(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onPreRender = this->get_override( "onPreRender" ) )
            func_onPreRender(  );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSkin::onPreRender(  );
        }
    }
    
    void default_onPreRender(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSkin::onPreRender( );
    }

    static void setShowSystem( ::osiris::IdePickerSkin & inst, bool const showSystem ){
        ::osiris::PythonThreadSaver __pythreadSaver;
        inst.setShowSystem(showSystem);
        __pythreadSaver.restore();
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

    virtual ::osiris::String getTemplateName(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getTemplateName = this->get_override( "getTemplateName" ) )
            return func_getTemplateName(  );
        else{
            __pystate.leave();
            return this->::osiris::IdePickerSelect::getTemplateName(  );
        }
    }
    
    ::osiris::String default_getTemplateName(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdePickerSelect::getTemplateName( );
    }

    virtual ::osiris::String getValue(  ) const  {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_getValue = this->get_override( "getValue" ) )
            return func_getValue(  );
        else{
            __pystate.leave();
            return this->::osiris::IdePickerSelect::getValue(  );
        }
    }
    
    ::osiris::String default_getValue(  ) const  {
        ::osiris::PythonThreadSaver __pythreadSaver;
        return ::osiris::IdePickerSelect::getValue( );
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

    virtual void onInit(  ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_onInit = this->get_override( "onInit" ) )
            func_onInit(  );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSelect::onInit(  );
        }
    }
    
    void default_onInit(  ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSelect::onInit( );
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

    virtual void setTemplateName( ::osiris::String const & templateName ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_setTemplateName = this->get_override( "setTemplateName" ) )
            func_setTemplateName( boost::ref(templateName) );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSelect::setTemplateName( boost::ref(templateName) );
        }
    }
    
    void default_setTemplateName( ::osiris::String const & templateName ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSelect::setTemplateName( boost::ref(templateName) );
    }

    virtual void setValue( ::osiris::String const & val ) {
        ::osiris::PythonState __pystate(getPythonThreadState());
        if( ::osiris::PythonOverride func_setValue = this->get_override( "setValue" ) )
            func_setValue( boost::ref(val) );
        else{
            __pystate.leave();
            this->::osiris::IdePickerSelect::setValue( boost::ref(val) );
        }
    }
    
    void default_setValue( ::osiris::String const & val ) {
        ::osiris::PythonThreadSaver __pythreadSaver;
        ::osiris::IdePickerSelect::setValue( boost::ref(val) );
    }

};

void register_IdePickerSkin_class(){

    { //::osiris::IdePickerSkin
        typedef ::boost::python::class_< IdePickerSkin_wrapper, ::boost::python::bases< ::osiris::IdePickerSelect >, ::boost::noncopyable > IdePickerSkin_exposer_t;
        IdePickerSkin_exposer_t IdePickerSkin_exposer = IdePickerSkin_exposer_t( "IdePickerSkin", ::boost::python::init< >() );
        ::boost::python::scope IdePickerSkin_scope( IdePickerSkin_exposer );
        { //::osiris::IdePickerSkin::getShowSystem
        
            typedef boost::python::object ( *getShowSystem_function_type )( ::osiris::IdePickerSkin const & );
            
            IdePickerSkin_exposer.def( 
                "getShowSystem"
                , getShowSystem_function_type( &IdePickerSkin_wrapper::getShowSystem ) );
        
        }
        { //::osiris::IdePickerSkin::onLoad
        
            typedef void ( ::osiris::IdePickerSkin::*onLoad_function_type )(  ) ;
            typedef void ( IdePickerSkin_wrapper::*default_onLoad_function_type )(  ) ;
            
            IdePickerSkin_exposer.def( 
                "onLoad"
                , onLoad_function_type(&::osiris::IdePickerSkin::onLoad)
                , default_onLoad_function_type(&IdePickerSkin_wrapper::default_onLoad) );
        
        }
        { //::osiris::IdePickerSkin::onPreRender
        
            typedef void ( ::osiris::IdePickerSkin::*onPreRender_function_type )(  ) ;
            typedef void ( IdePickerSkin_wrapper::*default_onPreRender_function_type )(  ) ;
            
            IdePickerSkin_exposer.def( 
                "onPreRender"
                , onPreRender_function_type(&::osiris::IdePickerSkin::onPreRender)
                , default_onPreRender_function_type(&IdePickerSkin_wrapper::default_onPreRender) );
        
        }
        { //::osiris::IdePickerSkin::setShowSystem
        
            typedef void ( *setShowSystem_function_type )( ::osiris::IdePickerSkin &,bool const );
            
            IdePickerSkin_exposer.def( 
                "setShowSystem"
                , setShowSystem_function_type( &IdePickerSkin_wrapper::setShowSystem )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("showSystem") ) );
        
        }
        { //::osiris::IHtmlControl::decodeEvent
        
            typedef bool ( IdePickerSkin_wrapper::*decodeEvent_function_type )( ::osiris::String const &,::osiris::String &,::osiris::HtmlEvent & ) const;
            
            IdePickerSkin_exposer.def( 
                "decodeEvent"
                , decodeEvent_function_type( &IdePickerSkin_wrapper::decodeEvent )
                , ( ::boost::python::arg("command"), ::boost::python::arg("eventName"), ::boost::python::arg("e") ) );
        
        }
        { //::osiris::IHtmlControl::encodeEvent
        
            typedef ::osiris::String ( IdePickerSkin_wrapper::*encodeEvent_function_type )( ::osiris::String const &,::osiris::HtmlEvent const * ) const;
            
            IdePickerSkin_exposer.def( 
                "encodeEvent"
                , encodeEvent_function_type( &IdePickerSkin_wrapper::encodeEvent )
                , ( ::boost::python::arg("eventName"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IHtmlControl::getSession
        
            typedef ::boost::shared_ptr< osiris::HttpSession > ( ::osiris::IHtmlControl::*getSession_function_type )(  ) const;
            typedef ::boost::shared_ptr< osiris::HttpSession > ( IdePickerSkin_wrapper::*default_getSession_function_type )(  ) const;
            
            IdePickerSkin_exposer.def( 
                "getSession"
                , getSession_function_type(&::osiris::IHtmlControl::getSession)
                , default_getSession_function_type(&IdePickerSkin_wrapper::default_getSession) );
        
        }
        { //::osiris::IdePickerSelect::getTemplateName
        
            typedef ::osiris::String ( ::osiris::IdePickerSelect::*getTemplateName_function_type )(  ) const;
            typedef ::osiris::String ( IdePickerSkin_wrapper::*default_getTemplateName_function_type )(  ) const;
            
            IdePickerSkin_exposer.def( 
                "getTemplateName"
                , getTemplateName_function_type(&::osiris::IdePickerSelect::getTemplateName)
                , default_getTemplateName_function_type(&IdePickerSkin_wrapper::default_getTemplateName) );
        
        }
        { //::osiris::IdePickerSelect::getValue
        
            typedef ::osiris::String ( ::osiris::IdePickerSelect::*getValue_function_type )(  ) const;
            typedef ::osiris::String ( IdePickerSkin_wrapper::*default_getValue_function_type )(  ) const;
            
            IdePickerSkin_exposer.def( 
                "getValue"
                , getValue_function_type(&::osiris::IdePickerSelect::getValue)
                , default_getValue_function_type(&IdePickerSkin_wrapper::default_getValue) );
        
        }
        { //::osiris::IHtmlControl::onEvent
        
            typedef void ( IdePickerSkin_wrapper::*onEvent_function_type )( ::osiris::String const &,::osiris::IEvent * ) ;
            
            IdePickerSkin_exposer.def( 
                "onEvent"
                , onEvent_function_type( &IdePickerSkin_wrapper::default_onEvent )
                , ( ::boost::python::arg("name"), ::boost::python::arg("e")=(osiris::null) ) );
        
        }
        { //::osiris::IdePickerSelect::onInit
        
            typedef void ( ::osiris::IdePickerSelect::*onInit_function_type )(  ) ;
            typedef void ( IdePickerSkin_wrapper::*default_onInit_function_type )(  ) ;
            
            IdePickerSkin_exposer.def( 
                "onInit"
                , onInit_function_type(&::osiris::IdePickerSelect::onInit)
                , default_onInit_function_type(&IdePickerSkin_wrapper::default_onInit) );
        
        }
        { //::osiris::IHtmlControl::onLoadViewState
        
            typedef void ( IdePickerSkin_wrapper::*onLoadViewState_function_type )( ::osiris::DataTree const & ) ;
            
            IdePickerSkin_exposer.def( 
                "onLoadViewState"
                , onLoadViewState_function_type( &IdePickerSkin_wrapper::default_onLoadViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::HtmlDiv::onRender
        
            typedef void ( IdePickerSkin_wrapper::*onRender_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerSkin_exposer.def( 
                "onRender"
                , onRender_function_type( &IdePickerSkin_wrapper::default_onRender )
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::onSaveViewState
        
            typedef void ( IdePickerSkin_wrapper::*onSaveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdePickerSkin_exposer.def( 
                "onSaveViewState"
                , onSaveViewState_function_type( &IdePickerSkin_wrapper::default_onSaveViewState )
                , ( ::boost::python::arg("state") ) );
        
        }
        { //::osiris::IHtmlControl::renderAttributes
        
            typedef void ( ::osiris::IHtmlControl::*renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdePickerSkin_wrapper::*default_renderAttributes_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerSkin_exposer.def( 
                "renderAttributes"
                , renderAttributes_function_type(&::osiris::IHtmlControl::renderAttributes)
                , default_renderAttributes_function_type(&IdePickerSkin_wrapper::default_renderAttributes)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::renderChilds
        
            typedef void ( ::osiris::IHtmlControl::*renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            typedef void ( IdePickerSkin_wrapper::*default_renderChilds_function_type )( ::osiris::HtmlWriter & ) ;
            
            IdePickerSkin_exposer.def( 
                "renderChilds"
                , renderChilds_function_type(&::osiris::IHtmlControl::renderChilds)
                , default_renderChilds_function_type(&IdePickerSkin_wrapper::default_renderChilds)
                , ( ::boost::python::arg("writer") ) );
        
        }
        { //::osiris::IHtmlControl::saveViewState
        
            typedef void ( IdePickerSkin_wrapper::*saveViewState_function_type )( ::osiris::DataTree & ) ;
            
            IdePickerSkin_exposer.def( 
                "saveViewState"
                , saveViewState_function_type( &IdePickerSkin_wrapper::saveViewState )
                , ( ::boost::python::arg("states") ) );
        
        }
        { //::osiris::IdePickerSelect::setTemplateName
        
            typedef void ( ::osiris::IdePickerSelect::*setTemplateName_function_type )( ::osiris::String const & ) ;
            typedef void ( IdePickerSkin_wrapper::*default_setTemplateName_function_type )( ::osiris::String const & ) ;
            
            IdePickerSkin_exposer.def( 
                "setTemplateName"
                , setTemplateName_function_type(&::osiris::IdePickerSelect::setTemplateName)
                , default_setTemplateName_function_type(&IdePickerSkin_wrapper::default_setTemplateName)
                , ( ::boost::python::arg("templateName") ) );
        
        }
        { //::osiris::IdePickerSelect::setValue
        
            typedef void ( ::osiris::IdePickerSelect::*setValue_function_type )( ::osiris::String const & ) ;
            typedef void ( IdePickerSkin_wrapper::*default_setValue_function_type )( ::osiris::String const & ) ;
            
            IdePickerSkin_exposer.def( 
                "setValue"
                , setValue_function_type(&::osiris::IdePickerSelect::setValue)
                , default_setValue_function_type(&IdePickerSkin_wrapper::default_setValue)
                , ( ::boost::python::arg("val") ) );
        
        }
        { //property "showSystem"[fget=::osiris::IdePickerSkin::getShowSystem]
        
            typedef bool ( ::osiris::IdePickerSkin::*fget )(  ) const;
            
            IdePickerSkin_exposer.add_property( 
                "showSystem"
                , fget( &::osiris::IdePickerSkin::getShowSystem )
                , "get property, built on top of \"bool osiris::IdePickerSkin::getShowSystem() const [member function]\"" );
        
        }
    }

}
/* Osiris Assistant javascript library.

Many clean-up need.
*/


Osiris.Assistant =
{
    visible: false,
    panel: null,
    clickMode: 'none',
    clickEvent: '',
    enterList: new Array(),
    
    init: function(portal)
    {
      this.panel = osGetById("assistant");
      this.portal = portal;
	    
	    this.panel.tabObj = osGetById("assistant_tab");
	    
	    osDragEnable(this.panel);
    	
    	this.panel.saveStatus = this.saveStatus;
    	
    	osTabCreate(this.panel.tabObj);
	    
	    this.readStatus();
    	
	    this.initObjects(window.document.body);
    	
	    this.panel.tabObj.onSwitchPage = function ()
	    {
	        Osiris.Assistant.saveStatus();
	    }
    		    
	    
	    var notes = Osiris.storageGet("assistant.notes");
	    if(notes)
		    osGetById("assistantNotes").value = unescape(notes);
    },
    
    hide: function()
    {
        Osiris.Assistant.visible = false;
        $("#assistant").stop(true,true).fadeOut(Osiris.effectsSpeedSlow);
        this.objectPickerCancel();        
        
        $("#userbox_assistant").removeClass("os_userbox_assistant_down");
        $("#userbox_assistant").addClass("os_userbox_assistant_up");                    
    },
    
    show: function()
    {
        Osiris.Assistant.visible = true;
        $("#assistant").stop(true,true).fadeIn(Osiris.effectsSpeedSlow);
        this.objectPickerCancel();
               
        $("#userbox_assistant").removeClass("os_userbox_assistant_up");
        $("#userbox_assistant").addClass("os_userbox_assistant_down");                                                    
    },
        
    toggle: function()
    {
        if(Osiris.Assistant.visible)
        {
            Osiris.Assistant.hide();
        }
        else
        {
            Osiris.Assistant.show();
        }
        
        this.saveStatus();
        
        {
            // Create, alla prima chiamata, Ajax edition
            // C'� da decidere prima come gestire i postback, e migrare/copiare la ideassistant.cpp in ideportalassistant.cpp.
            /*
            alert('Create');
            var ajaxDiv = osCreate("div");
            document.body.appendChild(ajaxDiv);		
	        var url = "/portals/assistant?portal=" + encodeURIComponent("00000001A8D26EB5CAC566FFDBC2225B97697E917D1B4270") + "&id="+encodeURIComponent("03000002B8FBB06AB198E3355C3F34AA0E9FFD0CC46C7292");
    	    
	        osAjax_InnerHtmlFromUrl(ajaxDiv,url);
    	    
	        //osMoveOnCursor(evt, ajaxDiv, 10);		
    	    
	        ajaxDiv.onReady = function()
	        {	
	            osInitControls(this);
	            this.toggle();
	        }	
	        */    
        }
        
        
    },
    
    readStatus: function()
    {
        /*
        var src = this.panel;        
        
        var cookieValue = osCookieRead("assistant");
        //alert("cookieRead: " + cookieValue);
	
        if(cookieValue != null)
        {
            var cookiePos = cookieValue.split(',');
            
		    panelMove(src, cookiePos[0], cookiePos[1]);
		    		  
		    var vis = (cookiePos[2] != "false");
	        if(vis)
	            Osiris.Assistant.show()
	        else
	            Osiris.Assistant.hide()
	            
	        src.tabObj.switchPage(cookiePos[3]);	        
        }   
        */
        
        var lastVisible = Osiris.storageGet("assistant.visible", 0);
        var lastX = Osiris.storageGet("assistant.x", -1);
        var lastY = Osiris.storageGet("assistant.y", -1);        
        
        if( (lastX != -1) && (lastY != -1) )
        	panelMove(Osiris.Assistant.panel, lastX, lastY);
        	
        if(lastVisible != 0)
            Osiris.Assistant.show()
        else
            Osiris.Assistant.hide()        
    },
    
    saveStatus: function()
    {
        /*
        var src = this.panel;    
                    
        var cookieValue = src.style.left + "," + src.style.top + "," + this.visible + "," + src.tabObj.pageIndex;
        osCookieCreate("assistant", cookieValue);        
        */        
        
        Osiris.storageSet("assistant.visible", Osiris.Assistant.visible ? 1:0);
        Osiris.storageSet("assistant.x", Osiris.Assistant.panel.style.left);
        Osiris.storageSet("assistant.y", Osiris.Assistant.panel.style.top);
    },
    

    notesChange: function()
    {
	    Osiris.storageSet("assistant.notes",escape(osGetById("assistantNotes").value));
    },    

    doSearch: function(inputID,searchHref, startText, ajax)
    {	
	    // javascript:if (osGetEvent(event).keyCode != 13)  return true; 
    	
	    var text = jQuery("#" + inputID).val();		
	    if(ajax)
	    {
		    var href = searchHref + "&mode=ajax&hide_params=1&run=1&templateView=row-tech&text=" + text;		
		    osDynamicDiv(osGetById("assistant_search_results"), href);
	    }
	    else
	    {
		    var href = searchHref;
		    if( (text != "") && (text != startText) )
			    href += "&run=1&templateView=table&text=" + text;
    			
		    href = Osiris.adjustUrl(href);
		    window.location.href = href;	
	    }
    	
    },   
    
    
    initObjects: function(src)
    {	
	    if( (src.attributes) && (src.attributes["data-os-entity"]) )
	    {
		    this.objectInit(src, src.attributes["data-os-entity"].nodeValue);				
	    }
    		
	    for(var i=0;i<src.childNodes.length;i++)
	    {
		    var childsrc = src.childNodes[i];
		    this.initObjects(childsrc);
	    }	
    },

    objectInit: function(src, entityId)
    {
	    if (src == null)  
		    return;
    	
	    src.entityId = entityId;    
	    src.onmouseover=function(evt) { Osiris.Assistant.objectEnter(evt,this); }
	    src.onmouseout=function(evt) { Osiris.Assistant.objectLeave(evt,this); }
	    src.onclick=function(evt) { Osiris.Assistant.objectClick(evt,this); }
    },
    
    objectPicker: function(eventName)
    {	
	    if(this.clickMode == "picking")
	    {
		    this.objectPickerCancel();
	    }
	    else
	    {
		    this.clickMode = 'picking';
		    this.clickEvent = eventName;
		    
		    //$('div[data-os-entity]').addClass("os_assistant_objectNoHighlight");
	    }
    },
    
    objectPickerCancel: function()
    {
	    this.clickMode = "none";
	    //$('div[data-os-entity]').removeClass("os_assistant_objectNoHighlight");
	    Osiris.styleLookUp($('os_assistant_quickactions_view'));
    },     
    
    objectPickerDone: function(evt, src)
    {
        if(this.clickMode == 'picking')
        {
            this.clickMode = 'none';
            C = this.getCurrentObject();        
            this.objectDeHighlight(evt, C);               
            return src.entityId;
        }
        else
        {
            return "";
        }
    },
    
    objectEnter: function(evt, src)
    {
        this.enterList.push(src);

        if(this.clickMode == 'picking')
        {
            C = this.getCurrentObject();
            this.objectHighlight(evt, C);
        }
    },

    objectLeave: function(evt,Src)
    {
        C = this.getCurrentObject();        
        if(this.clickMode == 'picking')
        {
	        this.objectDeHighlight(evt, C);        
        }
        if(C != null) 
            this.enterList.pop();
    },
    
    


    objectClick: function(evt, src)
    {
        var entityId = this.objectPickerDone(evt, src);
                
        if(entityId != "")
        {
            if(typeof(this.clickEvent) == "function")
	        {
		        // E' una funziona javascript, la chiamo passandogli l'oggetto
		        this.clickEvent(evt, entityId);
	        }
	        else
	        {
		        // E' una stringa, faccio la postback		    
		        osEventPostCtl('page-myassistant', this.clickEvent + ":" + entityId);	
            }
        }    
    },


    
    objectHighlight: function(evt, src)
    {
	    if ( (src != null) && (src.previousClass == null) )
	    {
		    src.previousClass = src.className;
		    src.className += " os_assistant_objectHighlight";				
	    }
    },

    objectDeHighlight: function(evt, src)
    {
	    if ( (src != null) && (src.previousClass != null) )
	    {
		    src.className = C.previousClass;
		    src.previousClass = null;
	    }
    },

    getCurrentObject: function()
    {
        return this.enterList[0];
    }
}


/*
function osAssistant_detail()
{
	osAssistant_objectPicker(osAssistant_showDetail);
}

function osAssistant_showDetail(evt, entityId)
{	
    var detailPanel = osGetById(entityId+"_detail");
    if(detailPanel)
    {
        osMoveOnCursor(evt, detailPanel, 10);		    	    
        //detailPanel.style.display = "block";
        detailPanel.toggle();
    }
    else
    {
        var ajaxDiv = osCreate("div");
        ajaxDiv.os_entityId = entityId;
	    document.body.appendChild(ajaxDiv);		
	    var portal = Osiris.Assistant.portal;
	    var url = "/portals/objectDetail?portal=" + encodeURIComponent(portal) + "&id="+encodeURIComponent(entityId);
	    
	    osAjax_InnerHtmlFromUrl(ajaxDiv,url);
	    
	    osMoveOnCursor(evt, ajaxDiv, 10);		
	    
	    ajaxDiv.onReady = function()
	    {	
	        //alert(this.os_entityId+"_detail");
	        var obj = osGetById(this.os_entityId+"_detail");	        
	        //alert("theobj:" + obj);
	        //alert("osInitControlsassistand " + obj.id);    	    
	        osInitControls(obj);
	        //osMoveOnCursor(evt, obj, 10);		
	        obj.toggle();
	    }	
    }
}

function osAssistant_toggleDetail(evt, oid)
{
	var detailPanel = osGetById(oid + "_detail");	
	detailPanel.toggle();
}
*/






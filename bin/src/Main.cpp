// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_WebSocketDG
#include <WebSocketDG.h>
#endif
#ifndef INCLUDED_WebhookSender
#include <WebhookSender.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_hxdiscord_DiscordClient
#include <hxdiscord/DiscordClient.h>
#endif
#ifndef INCLUDED_hxdiscord_endpoints_Endpoints
#include <hxdiscord/endpoints/Endpoints.h>
#endif
#ifndef INCLUDED_hxdiscord_types_ApplicationCommand
#include <hxdiscord/types/ApplicationCommand.h>
#endif
#ifndef INCLUDED_hxdiscord_types_Interaction
#include <hxdiscord/types/Interaction.h>
#endif
#ifndef INCLUDED_hxdiscord_types_Message
#include <hxdiscord/types/Message.h>
#endif
#ifndef INCLUDED_hxdiscord_types_User
#include <hxdiscord/types/User.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_50_main,"Main","main",0xed0e206e,"Main.main","Main.hx",50,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_89_main,"Main","main",0xed0e206e,"Main.main","Main.hx",89,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_108_main,"Main","main",0xed0e206e,"Main.main","Main.hx",108,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_111_main,"Main","main",0xed0e206e,"Main.main","Main.hx",111,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_24_main,"Main","main",0xed0e206e,"Main.main","Main.hx",24,0x087e5c05)
static const int _hx_array_data_332f6459_6[] = {
	(int)3276799,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_21_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",21,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_22_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",22,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_23_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",23,0x087e5c05)

#include <windows.h>


void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07825a7d;
}

 ::hxdiscord::DiscordClient Main_obj::BotClient;

 ::WebhookSender Main_obj::webhook;

::String Main_obj::bot_token;

bool Main_obj::showMessageUrl;

void Main_obj::main(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_50_main)
HXLINE(  51)			::Sys_obj::println((HX_("[Discord Chat Logger] Successfully initialized as ",75,3d,e5,8e) + ::Main_obj::BotClient->user->username));
HXLINE(  52)			 ::hxdiscord::types::ApplicationCommand setTargetServer =  ::hxdiscord::types::ApplicationCommand_obj::__alloc( HX_CTX );
HXLINE(  53)			setTargetServer->setName(HX_("set_target",8e,01,f2,7a));
HXLINE(  54)			setTargetServer->setDescription(HX_("Set a guild ID to be the new target",93,20,76,b6));
HXLINE(  55)			setTargetServer->addOption( ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("required",5f,91,62,b2),true)
            				->setFixed(1,HX_("name",4b,72,ff,48),HX_("id",db,5b,00,00))
            				->setFixed(2,HX_("type",ba,f2,08,4d),3)
            				->setFixed(3,HX_("description",fc,08,1d,5f),HX_("Guild ID",48,54,3e,4b))));
HXLINE(  61)			setTargetServer->default_member_permissions = HX_("0",30,00,00,00);
HXLINE(  62)			 ::hxdiscord::types::ApplicationCommand setToken =  ::hxdiscord::types::ApplicationCommand_obj::__alloc( HX_CTX );
HXLINE(  63)			setToken->setName(HX_("set_token",5c,cb,25,3b));
HXLINE(  64)			setToken->setDescription(HX_("Set a token to make it log all messages",eb,5b,88,9e));
HXLINE(  65)			setToken->addOption( ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("required",5f,91,62,b2),true)
            				->setFixed(1,HX_("name",4b,72,ff,48),HX_("token",f9,82,2b,14))
            				->setFixed(2,HX_("type",ba,f2,08,4d),3)
            				->setFixed(3,HX_("description",fc,08,1d,5f),HX_("The token (bruh)",f4,4c,9f,29))));
HXLINE(  71)			setToken->default_member_permissions = HX_("0",30,00,00,00);
HXLINE(  72)			 ::hxdiscord::types::ApplicationCommand setWebhook =  ::hxdiscord::types::ApplicationCommand_obj::__alloc( HX_CTX );
HXLINE(  73)			setWebhook->setName(HX_("set_webhook",9a,b1,44,f9));
HXLINE(  74)			setWebhook->setDescription(HX_("Set a webhook URL to send the logged messages",11,e8,bd,b8));
HXLINE(  75)			setWebhook->addOption( ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("required",5f,91,62,b2),true)
            				->setFixed(1,HX_("name",4b,72,ff,48),HX_("webhook",77,4a,dd,68))
            				->setFixed(2,HX_("type",ba,f2,08,4d),3)
            				->setFixed(3,HX_("description",fc,08,1d,5f),HX_("Webhook URL",06,85,93,c0))));
HXLINE(  81)			setWebhook->default_member_permissions = HX_("0",30,00,00,00);
HXLINE(  82)			 ::hxdiscord::types::ApplicationCommand reload =  ::hxdiscord::types::ApplicationCommand_obj::__alloc( HX_CTX );
HXLINE(  83)			reload->setName(HX_("reload",59,53,df,03));
HXLINE(  84)			reload->setDescription(HX_("If you made some changes to the bot, you can reload the entire logger with the new configuration set",cc,41,bf,c2));
HXLINE(  85)			reload->default_member_permissions = HX_("0",30,00,00,00);
HXLINE(  86)			::Main_obj::BotClient->setInteractionCommands(::cpp::VirtualArray_obj::__new(4)->init(0,setTargetServer)->init(1,setToken)->init(2,setWebhook)->init(3,reload));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::hxdiscord::types::Interaction i){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_89_main)
HXLINE(  89)			::String _hx_switch_0 = i->name;
            			if (  (_hx_switch_0==HX_("reload",59,53,df,03)) ){
HXLINE( 102)				::WebSocketDG_obj::stopEverything();
HXLINE( 103)				::WebSocketDG_obj::startTheThing();
HXLINE( 104)				i->reply( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("content",39,8d,77,19),HX_("Logger reloaded successfully",1f,47,01,8a))),null());
HXLINE( 101)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("set_target",8e,01,f2,7a)) ){
HXLINE(  91)				::sys::io::File_obj::saveContent(HX_("guild_id_target.txt",2b,ed,39,4a),( (::String)(i->getValue(HX_("id",db,5b,00,00))) ));
HXLINE(  92)				i->reply( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("content",39,8d,77,19),HX_("Target changed successfully",22,df,79,ee))),true);
HXLINE(  90)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("set_token",5c,cb,25,3b)) ){
HXLINE(  94)				::sys::io::File_obj::saveContent(HX_("token.txt",7b,32,9b,9a),( (::String)(i->getValue(HX_("token",f9,82,2b,14))) ));
HXLINE(  95)				i->reply( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("content",39,8d,77,19),HX_("Token changed successfully",ba,aa,72,db))),true);
HXLINE(  93)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("set_webhook",9a,b1,44,f9)) ){
HXLINE(  97)				::sys::io::File_obj::saveContent(HX_("webhook.txt",f9,90,b9,e5),( (::String)(i->getValue(HX_("webhook",77,4a,dd,68))) ));
HXLINE(  98)				i->reply( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("content",39,8d,77,19),HX_("Webhook changed successfully",7c,66,eb,e3))),true);
HXLINE(  99)				::Main_obj::webhook =  ::WebhookSender_obj::__alloc( HX_CTX ,::sys::io::File_obj::getContent(HX_("webhook.txt",f9,90,b9,e5)));
HXLINE( 100)				::Main_obj::webhook->send( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("content",39,8d,77,19),HX_("`The webhook has been successfully configured`",3f,fc,c5,b9))
            					->setFixed(1,HX_("username",16,86,eb,20),HX_("!",21,00,00,00))));
HXLINE(  96)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            		void _hx_run( ::hxdiscord::types::Message m){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_108_main)
HXLINE( 108)			if ((m->content.indexOf(((HX_("<@",84,34,00,00) + ::Main_obj::BotClient->user->id) + HX_(">",3e,00,00,00)),null()) != -1)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::hxdiscord::types::Message,m) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_111_main)
HXLINE( 111)					m->reply( ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("content",39,8d,77,19),HX_("stop pinging me i'm too busy!!!",91,62,83,6b))),true);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 109)				::hxdiscord::endpoints::Endpoints_obj::triggerTypingIndicator(m->channel_id);
HXLINE( 110)				::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_2(m)),3000);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_24_main)
HXLINE(  25)		if (::sys::FileSystem_obj::exists(HX_("webhook.txt",f9,90,b9,e5))) {
HXLINE(  26)			::Main_obj::webhook =  ::WebhookSender_obj::__alloc( HX_CTX ,::sys::io::File_obj::getContent(HX_("webhook.txt",f9,90,b9,e5)));
            		}
HXLINE(  28)		bool _hx_tmp;
HXDLIN(  28)		if (::sys::FileSystem_obj::exists(HX_("token.txt",7b,32,9b,9a))) {
HXLINE(  28)			_hx_tmp = ::sys::FileSystem_obj::exists(HX_("guild_id_target.txt",2b,ed,39,4a));
            		}
            		else {
HXLINE(  28)			_hx_tmp = false;
            		}
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  29)			::WebSocketDG_obj::startTheThing();
            		}
HXLINE(  31)		if (!(::sys::FileSystem_obj::exists(HX_("config.json",54,db,08,a4)))) {
HXLINE(  32)			 ::Dynamic replacer = null();
HXDLIN(  32)			::sys::io::File_obj::saveContent(HX_("config.json",54,db,08,a4),::haxe::format::JsonPrinter_obj::print( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("bot_token",81,47,16,75),HX_("",00,00,00,00))),replacer,HX_("\t",09,00,00,00)));
HXLINE(  38)			MessageBoxA(NULL, "A new config.json file has been generated, edit the file and open the program again.\n\nCheck https://github.com/FurretDev/Discord-Chat-Logger for more information", "Edit the config.json file", MB_ICONEXCLAMATION);;
HXLINE(  42)			::Sys_obj::exit(0);
            		}
HXLINE(  44)		::Sys_obj::println(HX_("[NOTE] If you don't see the \"successfully started\" message this is due to an issue with your token. Check these steps to reassure everything is okay",8e,23,cb,7b));
HXLINE(  45)		::Sys_obj::println(HX_("1. Check that the intents \"Presence Intent\", \"Server Member Intent\" and \"Message Content Intent\" are enabled in your bot. You can change this on the Discord Developer Portal",96,c3,84,de));
HXLINE(  46)		::Sys_obj::println(HX_("2. Check that if your token is not invalid or expired",06,34,08,6a));
HXLINE(  47)		::Sys_obj::println(HX_("3. Check if you have internet (This sounds stupid but it is possible for that to happen)",ca,50,47,d9));
HXLINE(  48)		::Sys_obj::println(HX_("",00,00,00,00));
HXLINE(  49)		::Main_obj::BotClient =  ::hxdiscord::DiscordClient_obj::__alloc( HX_CTX ,HX_("MTEyODAyNjI0NjA4MTY3OTM3MA.GQ2uU5.",4d,f2,9a,d8),::Array_obj< int >::fromData( _hx_array_data_332f6459_6,1),false);
HXLINE(  50)		::Main_obj::BotClient->onReady =  ::Dynamic(new _hx_Closure_0());
HXLINE(  88)		::Main_obj::BotClient->onInteractionCreate =  ::Dynamic(new _hx_Closure_1());
HXLINE( 107)		::Main_obj::BotClient->onMessageCreate =  ::Dynamic(new _hx_Closure_3());
HXLINE( 115)		::Main_obj::BotClient->connect();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"webhook") ) { outValue = ( webhook ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BotClient") ) { outValue = ( BotClient ); return true; }
		if (HX_FIELD_EQ(inName,"bot_token") ) { outValue = ( bot_token ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"showMessageUrl") ) { outValue = ( showMessageUrl ); return true; }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"webhook") ) { webhook=ioValue.Cast<  ::WebhookSender >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BotClient") ) { BotClient=ioValue.Cast<  ::hxdiscord::DiscordClient >(); return true; }
		if (HX_FIELD_EQ(inName,"bot_token") ) { bot_token=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"showMessageUrl") ) { showMessageUrl=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hxdiscord::DiscordClient */ ,(void *) &Main_obj::BotClient,HX_("BotClient",92,9b,ba,45)},
	{::hx::fsObject /*  ::WebhookSender */ ,(void *) &Main_obj::webhook,HX_("webhook",77,4a,dd,68)},
	{::hx::fsString,(void *) &Main_obj::bot_token,HX_("bot_token",81,47,16,75)},
	{::hx::fsBool,(void *) &Main_obj::showMessageUrl,HX_("showMessageUrl",45,1b,cd,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::BotClient,"BotClient");
	HX_MARK_MEMBER_NAME(Main_obj::webhook,"webhook");
	HX_MARK_MEMBER_NAME(Main_obj::bot_token,"bot_token");
	HX_MARK_MEMBER_NAME(Main_obj::showMessageUrl,"showMessageUrl");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::BotClient,"BotClient");
	HX_VISIT_MEMBER_NAME(Main_obj::webhook,"webhook");
	HX_VISIT_MEMBER_NAME(Main_obj::bot_token,"bot_token");
	HX_VISIT_MEMBER_NAME(Main_obj::showMessageUrl,"showMessageUrl");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("BotClient",92,9b,ba,45),
	HX_("webhook",77,4a,dd,68),
	HX_("bot_token",81,47,16,75),
	HX_("showMessageUrl",45,1b,cd,fc),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_21_boot)
HXDLIN(  21)		webhook = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_22_boot)
HXDLIN(  22)		bot_token = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_23_boot)
HXDLIN(  23)		showMessageUrl = true;
            	}
}

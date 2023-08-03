// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_hxdiscord_types_ApplicationCommand
#include <hxdiscord/types/ApplicationCommand.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6350de680d395366_11_new,"hxdiscord.types.ApplicationCommand","new",0x0909a6d4,"hxdiscord.types.ApplicationCommand.new","hxdiscord/types/ApplicationCommand.hx",11,0x97ef351a)
HX_LOCAL_STACK_FRAME(_hx_pos_6350de680d395366_44_setName,"hxdiscord.types.ApplicationCommand","setName",0xa057d381,"hxdiscord.types.ApplicationCommand.setName","hxdiscord/types/ApplicationCommand.hx",44,0x97ef351a)
HX_LOCAL_STACK_FRAME(_hx_pos_6350de680d395366_49_setType,"hxdiscord.types.ApplicationCommand","setType",0xa46153f0,"hxdiscord.types.ApplicationCommand.setType","hxdiscord/types/ApplicationCommand.hx",49,0x97ef351a)
HX_LOCAL_STACK_FRAME(_hx_pos_6350de680d395366_54_setDescription,"hxdiscord.types.ApplicationCommand","setDescription",0x50a6da86,"hxdiscord.types.ApplicationCommand.setDescription","hxdiscord/types/ApplicationCommand.hx",54,0x97ef351a)
HX_LOCAL_STACK_FRAME(_hx_pos_6350de680d395366_61_addOption,"hxdiscord.types.ApplicationCommand","addOption",0xab132dea,"hxdiscord.types.ApplicationCommand.addOption","hxdiscord/types/ApplicationCommand.hx",61,0x97ef351a)
namespace hxdiscord{
namespace types{

void ApplicationCommand_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6350de680d395366_11_new)
HXLINE(  23)		this->default_permission = true;
HXLINE(  20)		this->options = ::Array_obj< ::Dynamic>::__new();
HXLINE(  13)		this->type = 1;
HXLINE(  32)		if (::hx::IsNull( this->default_member_permissions )) {
HXLINE(  34)			::Reflect_obj::deleteField(::hx::ObjectPtr<OBJ_>(this),HX_("default_member_permissions",dd,f3,48,50));
            		}
            	}

Dynamic ApplicationCommand_obj::__CreateEmpty() { return new ApplicationCommand_obj; }

void *ApplicationCommand_obj::_hx_vtable = 0;

Dynamic ApplicationCommand_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ApplicationCommand_obj > _hx_result = new ApplicationCommand_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ApplicationCommand_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a765e98;
}

void ApplicationCommand_obj::setName(::String name){
            	HX_STACKFRAME(&_hx_pos_6350de680d395366_44_setName)
HXDLIN(  44)		this->name = name;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationCommand_obj,setName,(void))

void ApplicationCommand_obj::setType(int type){
            	HX_STACKFRAME(&_hx_pos_6350de680d395366_49_setType)
HXDLIN(  49)		this->type = type;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationCommand_obj,setType,(void))

void ApplicationCommand_obj::setDescription(::String description){
            	HX_STACKFRAME(&_hx_pos_6350de680d395366_54_setDescription)
HXDLIN(  54)		this->description = description;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationCommand_obj,setDescription,(void))

void ApplicationCommand_obj::addOption( ::Dynamic _option){
            	HX_STACKFRAME(&_hx_pos_6350de680d395366_61_addOption)
HXDLIN(  61)		this->options->push(_option);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationCommand_obj,addOption,(void))


::hx::ObjectPtr< ApplicationCommand_obj > ApplicationCommand_obj::__new() {
	::hx::ObjectPtr< ApplicationCommand_obj > __this = new ApplicationCommand_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ApplicationCommand_obj > ApplicationCommand_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ApplicationCommand_obj *__this = (ApplicationCommand_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ApplicationCommand_obj), true, "hxdiscord.types.ApplicationCommand"));
	*(void **)__this = ApplicationCommand_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ApplicationCommand_obj::ApplicationCommand_obj()
{
}

void ApplicationCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationCommand);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(application_id,"application_id");
	HX_MARK_MEMBER_NAME(guild_id,"guild_id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(name_localizations,"name_localizations");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(description_localizations,"description_localizations");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(default_member_permissions,"default_member_permissions");
	HX_MARK_MEMBER_NAME(dm_permission,"dm_permission");
	HX_MARK_MEMBER_NAME(default_permission,"default_permission");
	HX_MARK_MEMBER_NAME(nsfw,"nsfw");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void ApplicationCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(application_id,"application_id");
	HX_VISIT_MEMBER_NAME(guild_id,"guild_id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(name_localizations,"name_localizations");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(description_localizations,"description_localizations");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(default_member_permissions,"default_member_permissions");
	HX_VISIT_MEMBER_NAME(dm_permission,"dm_permission");
	HX_VISIT_MEMBER_NAME(default_permission,"default_permission");
	HX_VISIT_MEMBER_NAME(nsfw,"nsfw");
	HX_VISIT_MEMBER_NAME(version,"version");
}

::hx::Val ApplicationCommand_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"nsfw") ) { return ::hx::Val( nsfw ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"setName") ) { return ::hx::Val( setName_dyn() ); }
		if (HX_FIELD_EQ(inName,"setType") ) { return ::hx::Val( setType_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"guild_id") ) { return ::hx::Val( guild_id ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addOption") ) { return ::hx::Val( addOption_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dm_permission") ) { return ::hx::Val( dm_permission ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"application_id") ) { return ::hx::Val( application_id ); }
		if (HX_FIELD_EQ(inName,"setDescription") ) { return ::hx::Val( setDescription_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"name_localizations") ) { return ::hx::Val( name_localizations ); }
		if (HX_FIELD_EQ(inName,"default_permission") ) { return ::hx::Val( default_permission ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"description_localizations") ) { return ::hx::Val( description_localizations ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"default_member_permissions") ) { return ::hx::Val( default_member_permissions ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ApplicationCommand_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nsfw") ) { nsfw=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"guild_id") ) { guild_id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dm_permission") ) { dm_permission=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"application_id") ) { application_id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"name_localizations") ) { name_localizations=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"default_permission") ) { default_permission=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"description_localizations") ) { description_localizations=inValue.Cast< ::String >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"default_member_permissions") ) { default_member_permissions=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("application_id",aa,b8,27,8d));
	outFields->push(HX_("guild_id",27,82,bc,71));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("name_localizations",06,0f,76,19));
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("description_localizations",77,99,e7,39));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("default_member_permissions",dd,f3,48,50));
	outFields->push(HX_("dm_permission",45,f1,0a,16));
	outFields->push(HX_("default_permission",0d,0b,45,b3));
	outFields->push(HX_("nsfw",d6,14,0d,49));
	outFields->push(HX_("version",18,e7,f1,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ApplicationCommand_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsInt,(int)offsetof(ApplicationCommand_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,application_id),HX_("application_id",aa,b8,27,8d)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,guild_id),HX_("guild_id",27,82,bc,71)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,name_localizations),HX_("name_localizations",06,0f,76,19)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,description_localizations),HX_("description_localizations",77,99,e7,39)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ApplicationCommand_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,default_member_permissions),HX_("default_member_permissions",dd,f3,48,50)},
	{::hx::fsBool,(int)offsetof(ApplicationCommand_obj,dm_permission),HX_("dm_permission",45,f1,0a,16)},
	{::hx::fsBool,(int)offsetof(ApplicationCommand_obj,default_permission),HX_("default_permission",0d,0b,45,b3)},
	{::hx::fsBool,(int)offsetof(ApplicationCommand_obj,nsfw),HX_("nsfw",d6,14,0d,49)},
	{::hx::fsString,(int)offsetof(ApplicationCommand_obj,version),HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ApplicationCommand_obj_sStaticStorageInfo = 0;
#endif

static ::String ApplicationCommand_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("type",ba,f2,08,4d),
	HX_("application_id",aa,b8,27,8d),
	HX_("guild_id",27,82,bc,71),
	HX_("name",4b,72,ff,48),
	HX_("name_localizations",06,0f,76,19),
	HX_("description",fc,08,1d,5f),
	HX_("description_localizations",77,99,e7,39),
	HX_("options",5e,33,fe,df),
	HX_("default_member_permissions",dd,f3,48,50),
	HX_("dm_permission",45,f1,0a,16),
	HX_("default_permission",0d,0b,45,b3),
	HX_("nsfw",d6,14,0d,49),
	HX_("version",18,e7,f1,7c),
	HX_("setName",0d,b3,83,0e),
	HX_("setType",7c,33,8d,12),
	HX_("setDescription",7a,44,db,06),
	HX_("addOption",76,08,9f,e3),
	::String(null()) };

::hx::Class ApplicationCommand_obj::__mClass;

void ApplicationCommand_obj::__register()
{
	ApplicationCommand_obj _hx_dummy;
	ApplicationCommand_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxdiscord.types.ApplicationCommand",e2,ec,d8,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ApplicationCommand_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ApplicationCommand_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationCommand_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationCommand_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxdiscord
} // end namespace types

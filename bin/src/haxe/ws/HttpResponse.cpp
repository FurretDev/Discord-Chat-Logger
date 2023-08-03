// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ws_HttpResponse
#include <haxe/ws/HttpResponse.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81a9aae75ccc1898_3_new,"haxe.ws.HttpResponse","new",0x73f48805,"haxe.ws.HttpResponse.new","haxe/ws/HttpResponse.hx",3,0x6a085c6b)
HX_LOCAL_STACK_FRAME(_hx_pos_81a9aae75ccc1898_15_addLine,"haxe.ws.HttpResponse","addLine",0x9cd648da,"haxe.ws.HttpResponse.addLine","haxe/ws/HttpResponse.hx",15,0x6a085c6b)
HX_LOCAL_STACK_FRAME(_hx_pos_81a9aae75ccc1898_28_build,"haxe.ws.HttpResponse","build",0xe1e48613,"haxe.ws.HttpResponse.build","haxe/ws/HttpResponse.hx",28,0x6a085c6b)
static const ::String _hx_array_data_9dad2193_4[] = {
	HX_(" ",20,00,00,00),
};
static const ::String _hx_array_data_9dad2193_5[] = {
	HX_(" ",20,00,00,00),
};
static const ::String _hx_array_data_9dad2193_6[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_9dad2193_7[] = {
	HX_(": ",a6,32,00,00),
};
static const ::String _hx_array_data_9dad2193_8[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_9dad2193_9[] = {
	HX_("\r\n",5d,0b,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_81a9aae75ccc1898_64_toString,"haxe.ws.HttpResponse","toString",0xe8b942e7,"haxe.ws.HttpResponse.toString","haxe/ws/HttpResponse.hx",64,0x6a085c6b)
namespace haxe{
namespace ws{

void HttpResponse_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_81a9aae75ccc1898_3_new)
HXLINE(   9)		this->headers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(   7)		this->responseDataString = null();
HXLINE(   6)		this->text = HX_("",00,00,00,00);
HXLINE(   5)		this->code = -1;
HXLINE(   4)		this->httpVersion = HX_("HTTP/1.1",6d,25,7a,80);
            	}

Dynamic HttpResponse_obj::__CreateEmpty() { return new HttpResponse_obj; }

void *HttpResponse_obj::_hx_vtable = 0;

Dynamic HttpResponse_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HttpResponse_obj > _hx_result = new HttpResponse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HttpResponse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x341e85af;
}

void HttpResponse_obj::addLine(::String line){
            	HX_STACKFRAME(&_hx_pos_81a9aae75ccc1898_15_addLine)
HXDLIN(  15)		if ((this->code == -1)) {
HXLINE(  16)			::Array< ::String > parts = line.split(HX_(" ",20,00,00,00));
HXLINE(  17)			this->httpVersion = parts->__get(0);
HXLINE(  18)			this->code = ( (int)(::Std_obj::parseInt(parts->__get(1))) );
HXLINE(  19)			this->text = parts->__get(2);
            		}
            		else {
HXLINE(  21)			int n = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE(  22)			::String name = line.substr(0,n);
HXLINE(  23)			::String value = line.substr((n + 1),line.length);
HXLINE(  24)			{
HXLINE(  24)				::Dynamic this1 = this->headers;
HXDLIN(  24)				::String key = ::StringTools_obj::trim(name);
HXDLIN(  24)				( ( ::haxe::ds::StringMap)(this1) )->set(key,::StringTools_obj::trim(value));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HttpResponse_obj,addLine,(void))

::String HttpResponse_obj::build(){
            	HX_GC_STACKFRAME(&_hx_pos_81a9aae75ccc1898_28_build)
HXLINE(  29)		int contentLength = 0;
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if (::hx::IsNotNull( this->responseDataString )) {
HXLINE(  30)			_hx_tmp = (this->responseDataString.length > 0);
            		}
            		else {
HXLINE(  30)			_hx_tmp = false;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  31)			contentLength = this->responseDataString.length;
            		}
HXLINE(  33)		{
HXLINE(  33)			::Dynamic this1 = this->headers;
HXDLIN(  33)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("Content-Length",fa,f8,b6,65),::Std_obj::string(contentLength));
            		}
HXLINE(  36)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  38)		{
HXLINE(  38)			::String x = this->httpVersion;
HXDLIN(  38)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  38)				sb->flush();
            			}
HXDLIN(  38)			if (::hx::IsNull( sb->b )) {
HXLINE(  38)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  38)				::Array< ::String > sb1 = sb->b;
HXDLIN(  38)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  39)		{
HXLINE(  39)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  39)				sb->flush();
            			}
HXDLIN(  39)			if (::hx::IsNull( sb->b )) {
HXLINE(  39)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_9dad2193_4,1);
            			}
            			else {
HXLINE(  39)				sb->b->push(HX_(" ",20,00,00,00));
            			}
            		}
HXLINE(  40)		{
HXLINE(  40)			int x1 = this->code;
HXDLIN(  40)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  40)				sb->flush();
            			}
HXDLIN(  40)			if (::hx::IsNull( sb->b )) {
HXLINE(  40)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE(  40)				::Array< ::String > sb2 = sb->b;
HXDLIN(  40)				sb2->push(::Std_obj::string(x1));
            			}
            		}
HXLINE(  41)		if ((this->text != HX_("",00,00,00,00))) {
HXLINE(  42)			{
HXLINE(  42)				if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  42)					sb->flush();
            				}
HXDLIN(  42)				if (::hx::IsNull( sb->b )) {
HXLINE(  42)					sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_9dad2193_5,1);
            				}
            				else {
HXLINE(  42)					sb->b->push(HX_(" ",20,00,00,00));
            				}
            			}
HXLINE(  43)			{
HXLINE(  43)				::String x2 = this->text;
HXDLIN(  43)				if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  43)					sb->flush();
            				}
HXDLIN(  43)				if (::hx::IsNull( sb->b )) {
HXLINE(  43)					sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            				}
            				else {
HXLINE(  43)					::Array< ::String > sb3 = sb->b;
HXDLIN(  43)					sb3->push(::Std_obj::string(x2));
            				}
            			}
            		}
HXLINE(  45)		{
HXLINE(  45)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  45)				sb->flush();
            			}
HXDLIN(  45)			if (::hx::IsNull( sb->b )) {
HXLINE(  45)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_9dad2193_6,1);
            			}
            			else {
HXLINE(  45)				sb->b->push(HX_("\r\n",5d,0b,00,00));
            			}
            		}
HXLINE(  47)		{
HXLINE(  47)			 ::Dynamic header = this->headers->keys();
HXDLIN(  47)			while(( (bool)(header->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  47)				::String header1 = ( (::String)(header->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  48)				{
HXLINE(  48)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  48)						sb->flush();
            					}
HXDLIN(  48)					if (::hx::IsNull( sb->b )) {
HXLINE(  48)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(header1));
            					}
            					else {
HXLINE(  48)						::Array< ::String > sb4 = sb->b;
HXDLIN(  48)						sb4->push(::Std_obj::string(header1));
            					}
            				}
HXLINE(  49)				{
HXLINE(  49)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  49)						sb->flush();
            					}
HXDLIN(  49)					if (::hx::IsNull( sb->b )) {
HXLINE(  49)						sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_9dad2193_7,1);
            					}
            					else {
HXLINE(  49)						sb->b->push(HX_(": ",a6,32,00,00));
            					}
            				}
HXLINE(  50)				{
HXLINE(  50)					::String x3 = this->headers->get_string(header1);
HXDLIN(  50)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  50)						sb->flush();
            					}
HXDLIN(  50)					if (::hx::IsNull( sb->b )) {
HXLINE(  50)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            					}
            					else {
HXLINE(  50)						::Array< ::String > sb5 = sb->b;
HXDLIN(  50)						sb5->push(::Std_obj::string(x3));
            					}
            				}
HXLINE(  51)				{
HXLINE(  51)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  51)						sb->flush();
            					}
HXDLIN(  51)					if (::hx::IsNull( sb->b )) {
HXLINE(  51)						sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_9dad2193_8,1);
            					}
            					else {
HXLINE(  51)						sb->b->push(HX_("\r\n",5d,0b,00,00));
            					}
            				}
            			}
            		}
HXLINE(  54)		{
HXLINE(  54)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  54)				sb->flush();
            			}
HXDLIN(  54)			if (::hx::IsNull( sb->b )) {
HXLINE(  54)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_9dad2193_9,1);
            			}
            			else {
HXLINE(  54)				sb->b->push(HX_("\r\n",5d,0b,00,00));
            			}
            		}
HXLINE(  56)		bool _hx_tmp1;
HXDLIN(  56)		if (::hx::IsNotNull( this->responseDataString )) {
HXLINE(  56)			_hx_tmp1 = (this->responseDataString.length > 0);
            		}
            		else {
HXLINE(  56)			_hx_tmp1 = false;
            		}
HXDLIN(  56)		if (_hx_tmp1) {
HXLINE(  57)			::String x4 = this->responseDataString;
HXDLIN(  57)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE(  57)				sb->flush();
            			}
HXDLIN(  57)			if (::hx::IsNull( sb->b )) {
HXLINE(  57)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            			}
            			else {
HXLINE(  57)				::Array< ::String > sb6 = sb->b;
HXDLIN(  57)				sb6->push(::Std_obj::string(x4));
            			}
            		}
HXLINE(  60)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HttpResponse_obj,build,return )

::String HttpResponse_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_81a9aae75ccc1898_64_toString)
HXDLIN(  64)		return this->build();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HttpResponse_obj,toString,return )


::hx::ObjectPtr< HttpResponse_obj > HttpResponse_obj::__new() {
	::hx::ObjectPtr< HttpResponse_obj > __this = new HttpResponse_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HttpResponse_obj > HttpResponse_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HttpResponse_obj *__this = (HttpResponse_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HttpResponse_obj), true, "haxe.ws.HttpResponse"));
	*(void **)__this = HttpResponse_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HttpResponse_obj::HttpResponse_obj()
{
}

void HttpResponse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HttpResponse);
	HX_MARK_MEMBER_NAME(httpVersion,"httpVersion");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(responseDataString,"responseDataString");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_END_CLASS();
}

void HttpResponse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(httpVersion,"httpVersion");
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(responseDataString,"responseDataString");
	HX_VISIT_MEMBER_NAME(headers,"headers");
}

::hx::Val HttpResponse_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return ::hx::Val( code ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { return ::hx::Val( build_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { return ::hx::Val( headers ); }
		if (HX_FIELD_EQ(inName,"addLine") ) { return ::hx::Val( addLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"httpVersion") ) { return ::hx::Val( httpVersion ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"responseDataString") ) { return ::hx::Val( responseDataString ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HttpResponse_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"httpVersion") ) { httpVersion=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"responseDataString") ) { responseDataString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HttpResponse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("httpVersion",70,74,d2,61));
	outFields->push(HX_("code",2d,b1,c4,41));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("responseDataString",7c,2c,89,39));
	outFields->push(HX_("headers",46,52,08,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HttpResponse_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(HttpResponse_obj,httpVersion),HX_("httpVersion",70,74,d2,61)},
	{::hx::fsInt,(int)offsetof(HttpResponse_obj,code),HX_("code",2d,b1,c4,41)},
	{::hx::fsString,(int)offsetof(HttpResponse_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(HttpResponse_obj,responseDataString),HX_("responseDataString",7c,2c,89,39)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(HttpResponse_obj,headers),HX_("headers",46,52,08,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HttpResponse_obj_sStaticStorageInfo = 0;
#endif

static ::String HttpResponse_obj_sMemberFields[] = {
	HX_("httpVersion",70,74,d2,61),
	HX_("code",2d,b1,c4,41),
	HX_("text",ad,cc,f9,4c),
	HX_("responseDataString",7c,2c,89,39),
	HX_("headers",46,52,08,63),
	HX_("addLine",b5,5a,f0,83),
	HX_("build",2e,db,ea,ba),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class HttpResponse_obj::__mClass;

void HttpResponse_obj::__register()
{
	HttpResponse_obj _hx_dummy;
	HttpResponse_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ws.HttpResponse",93,21,ad,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HttpResponse_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HttpResponse_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HttpResponse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HttpResponse_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ws

// Generated by Haxe 4.3.1
#ifndef INCLUDED_WebhookSender
#define INCLUDED_WebhookSender

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WebhookSender)
HX_DECLARE_CLASS2(haxe,http,HttpBase)
HX_DECLARE_CLASS1(sys,Http)



class HXCPP_CLASS_ATTRIBUTES WebhookSender_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebhookSender_obj OBJ_;
		WebhookSender_obj();

	public:
		enum { _hx_ClassId = 0x39bb9eac };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WebhookSender")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WebhookSender"); }
		static ::hx::ObjectPtr< WebhookSender_obj > __new(::String url);
		static ::hx::ObjectPtr< WebhookSender_obj > __alloc(::hx::Ctx *_hx_ctx,::String url);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebhookSender_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebhookSender",6c,89,74,5d); }

		::String url;
		void send( ::Dynamic data);
		::Dynamic send_dyn();

		 ::sys::Http getHttp();
		::Dynamic getHttp_dyn();

};


#endif /* INCLUDED_WebhookSender */ 
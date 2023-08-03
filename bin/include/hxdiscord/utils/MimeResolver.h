// Generated by Haxe 4.3.1
#ifndef INCLUDED_hxdiscord_utils_MimeResolver
#define INCLUDED_hxdiscord_utils_MimeResolver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxdiscord,utils,MimeResolver)

namespace hxdiscord{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES MimeResolver_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MimeResolver_obj OBJ_;
		MimeResolver_obj();

	public:
		enum { _hx_ClassId = 0x5ba6d157 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxdiscord.utils.MimeResolver")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxdiscord.utils.MimeResolver"); }

		inline static ::hx::ObjectPtr< MimeResolver_obj > __new() {
			::hx::ObjectPtr< MimeResolver_obj > __this = new MimeResolver_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MimeResolver_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MimeResolver_obj *__this = (MimeResolver_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MimeResolver_obj), false, "hxdiscord.utils.MimeResolver"));
			*(void **)__this = MimeResolver_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MimeResolver_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MimeResolver",fa,a5,23,a1); }

		static ::String getMimeType(::String file);
		static ::Dynamic getMimeType_dyn();

};

} // end namespace hxdiscord
} // end namespace utils

#endif /* INCLUDED_hxdiscord_utils_MimeResolver */ 

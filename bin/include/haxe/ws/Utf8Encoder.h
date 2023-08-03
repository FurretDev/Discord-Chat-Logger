// Generated by Haxe 4.3.1
#ifndef INCLUDED_haxe_ws_Utf8Encoder
#define INCLUDED_haxe_ws_Utf8Encoder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,ws,Utf8Encoder)

namespace haxe{
namespace ws{


class HXCPP_CLASS_ATTRIBUTES Utf8Encoder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Utf8Encoder_obj OBJ_;
		Utf8Encoder_obj();

	public:
		enum { _hx_ClassId = 0x4838bb89 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ws.Utf8Encoder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ws.Utf8Encoder"); }

		inline static ::hx::ObjectPtr< Utf8Encoder_obj > __new() {
			::hx::ObjectPtr< Utf8Encoder_obj > __this = new Utf8Encoder_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Utf8Encoder_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Utf8Encoder_obj *__this = (Utf8Encoder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Utf8Encoder_obj), false, "haxe.ws.Utf8Encoder"));
			*(void **)__this = Utf8Encoder_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Utf8Encoder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Utf8Encoder",4b,c4,b1,f5); }

		static  ::haxe::io::Bytes encode(::String str);
		static ::Dynamic encode_dyn();

		static ::String decode( ::haxe::io::Bytes data);
		static ::Dynamic decode_dyn();

};

} // end namespace haxe
} // end namespace ws

#endif /* INCLUDED_haxe_ws_Utf8Encoder */ 
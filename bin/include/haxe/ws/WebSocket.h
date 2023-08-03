// Generated by Haxe 4.3.1
#ifndef INCLUDED_haxe_ws_WebSocket
#define INCLUDED_haxe_ws_WebSocket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ws_WebSocketCommon
#include <haxe/ws/WebSocketCommon.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,ws,HttpResponse)
HX_DECLARE_CLASS2(haxe,ws,WebSocket)
HX_DECLARE_CLASS2(haxe,ws,WebSocketCommon)
HX_DECLARE_CLASS2(sys,net,Socket)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace haxe{
namespace ws{


class HXCPP_CLASS_ATTRIBUTES WebSocket_obj : public  ::haxe::ws::WebSocketCommon_obj
{
	public:
		typedef  ::haxe::ws::WebSocketCommon_obj super;
		typedef WebSocket_obj OBJ_;
		WebSocket_obj();

	public:
		enum { _hx_ClassId = 0x3bb74421 };

		void __construct(::String url,::hx::Null< bool >  __o_immediateOpen);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ws.WebSocket")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ws.WebSocket"); }
		static ::hx::ObjectPtr< WebSocket_obj > __new(::String url,::hx::Null< bool >  __o_immediateOpen);
		static ::hx::ObjectPtr< WebSocket_obj > __alloc(::hx::Ctx *_hx_ctx,::String url,::hx::Null< bool >  __o_immediateOpen);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebSocket_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebSocket",47,2b,04,87); }

		::String _protocol;
		::String _host;
		int _port;
		::String _path;
		 ::sys::thread::_Thread::HaxeThread _processThread;
		::String _encodedKey;
		::String binaryType;
		 ::haxe::ds::StringMap additionalHeaders;
		void parseUrl(::String url);
		::Dynamic parseUrl_dyn();

		 ::sys::net::Socket createSocket();
		::Dynamic createSocket_dyn();

		void open();
		::Dynamic open_dyn();

		void processThread();
		::Dynamic processThread_dyn();

		void processLoop( ::haxe::ws::WebSocket ws);
		::Dynamic processLoop_dyn();

		 ::haxe::ds::StringMap get_additionalHeaders();
		::Dynamic get_additionalHeaders_dyn();

		void sendHandshake();
		::Dynamic sendHandshake_dyn();

		void handleData();

		void handshake( ::haxe::ws::HttpResponse httpResponse);
		::Dynamic handshake_dyn();

		::String generateWSKey();
		::Dynamic generateWSKey_dyn();

};

} // end namespace haxe
} // end namespace ws

#endif /* INCLUDED_haxe_ws_WebSocket */ 

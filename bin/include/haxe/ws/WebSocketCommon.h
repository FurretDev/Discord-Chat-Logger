// Generated by Haxe 4.3.1
#ifndef INCLUDED_haxe_ws_WebSocketCommon
#define INCLUDED_haxe_ws_WebSocketCommon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,ws,Buffer)
HX_DECLARE_CLASS2(haxe,ws,HttpRequest)
HX_DECLARE_CLASS2(haxe,ws,HttpResponse)
HX_DECLARE_CLASS2(haxe,ws,MessageType)
HX_DECLARE_CLASS2(haxe,ws,State)
HX_DECLARE_CLASS2(haxe,ws,WebSocketCommon)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace haxe{
namespace ws{


class HXCPP_CLASS_ATTRIBUTES WebSocketCommon_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebSocketCommon_obj OBJ_;
		WebSocketCommon_obj();

	public:
		enum { _hx_ClassId = 0x6a897c2c };

		void __construct( ::sys::net::Socket socket);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ws.WebSocketCommon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ws.WebSocketCommon"); }
		static ::hx::ObjectPtr< WebSocketCommon_obj > __new( ::sys::net::Socket socket);
		static ::hx::ObjectPtr< WebSocketCommon_obj > __alloc(::hx::Ctx *_hx_ctx, ::sys::net::Socket socket);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebSocketCommon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebSocketCommon",d2,43,2d,41); }

		static  ::haxe::io::Bytes generateMask();
		static ::Dynamic generateMask_dyn();

		static  ::haxe::io::Bytes applyMask( ::haxe::io::Bytes payload, ::haxe::io::Bytes mask);
		static ::Dynamic applyMask_dyn();

		::String id;
		 ::haxe::ws::State state;
		bool isClient;
		 ::sys::net::Socket _socket;
		 ::Dynamic _onopenCalled;
		 ::Dynamic _lastError;
		 ::Dynamic onopen;
		Dynamic onopen_dyn() { return onopen;}
		 ::Dynamic onclose;
		Dynamic onclose_dyn() { return onclose;}
		 ::Dynamic onerror;
		Dynamic onerror_dyn() { return onerror;}
		 ::Dynamic onmessage;
		Dynamic onmessage_dyn() { return onmessage;}
		 ::haxe::ws::Buffer _buffer;
		void send( ::Dynamic data);
		::Dynamic send_dyn();

		void sendFrame( ::haxe::io::Bytes data,int type);
		::Dynamic sendFrame_dyn();

		bool _isFinal;
		bool _isMasked;
		int _opcode;
		bool _frameIsBinary;
		int _partialLength;
		int _length;
		 ::haxe::io::Bytes _mask;
		 ::haxe::ws::Buffer _payload;
		 ::Date _lastPong;
		virtual void handleData();
		::Dynamic handleData_dyn();

		void close();
		::Dynamic close_dyn();

		void writeBytes( ::haxe::io::Bytes data);
		::Dynamic writeBytes_dyn();

		 ::haxe::io::Bytes prepareFrame( ::haxe::io::Bytes data,int type,bool isFinal);
		::Dynamic prepareFrame_dyn();

		void process();
		::Dynamic process_dyn();

		void sendHttpRequest( ::haxe::ws::HttpRequest httpRequest);
		::Dynamic sendHttpRequest_dyn();

		void sendHttpResponse( ::haxe::ws::HttpResponse httpResponse);
		::Dynamic sendHttpResponse_dyn();

		 ::haxe::ws::HttpRequest recvHttpRequest();
		::Dynamic recvHttpRequest_dyn();

		 ::haxe::ws::HttpResponse recvHttpResponse();
		::Dynamic recvHttpResponse_dyn();

		::String makeWSKeyResponse(::String key);
		::Dynamic makeWSKeyResponse_dyn();

};

} // end namespace haxe
} // end namespace ws

#endif /* INCLUDED_haxe_ws_WebSocketCommon */ 

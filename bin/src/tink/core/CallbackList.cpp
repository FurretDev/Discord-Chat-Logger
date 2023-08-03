// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_tink_core_CallbackList
#include <tink/core/CallbackList.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_SimpleDisposable
#include <tink/core/SimpleDisposable.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_ListCell
#include <tink/core/_Callback/ListCell.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_186_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",186,0x0104eb06)
HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_185_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",185,0x0104eb06)
HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_180_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",180,0x0104eb06)
HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_165_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",165,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_172_get_length,"tink.core.CallbackList","get_length",0xae03bb47,"tink.core.CallbackList.get_length","tink/core/Callback.hx",172,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_189_release,"tink.core.CallbackList","release",0x3687402f,"tink.core.CallbackList.release","tink/core/Callback.hx",189,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_192_destroy,"tink.core.CallbackList","destroy",0x021fe762,"tink.core.CallbackList.destroy","tink/core/Callback.hx",192,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_206_drain,"tink.core.CallbackList","drain",0x35ad1c20,"tink.core.CallbackList.drain","tink/core/Callback.hx",206,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_208_add,"tink.core.CallbackList","add",0x140c5889,"tink.core.CallbackList.add","tink/core/Callback.hx",208,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_217_invoke,"tink.core.CallbackList","invoke",0x81e00210,"tink.core.CallbackList.invoke","tink/core/Callback.hx",217,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_221_invoke,"tink.core.CallbackList","invoke",0x81e00210,"tink.core.CallbackList.invoke","tink/core/Callback.hx",221,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_218_invoke,"tink.core.CallbackList","invoke",0x81e00210,"tink.core.CallbackList.invoke","tink/core/Callback.hx",218,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_248_compact,"tink.core.CallbackList","compact",0x6102c60b,"tink.core.CallbackList.compact","tink/core/Callback.hx",248,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_269_resize,"tink.core.CallbackList","resize",0xea7ae48c,"tink.core.CallbackList.resize","tink/core/Callback.hx",269,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_272_clear,"tink.core.CallbackList","clear",0x9e5241f5,"tink.core.CallbackList.clear","tink/core/Callback.hx",272,0x0104eb06)
namespace tink{
namespace core{

void CallbackList_obj::__construct(::hx::Null< bool >  __o_destructive){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_03325987736a825f_186_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_03325987736a825f_185_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::tink::core::CallbackList,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_03325987736a825f_180_new)
HXLINE( 180)			if (!(_gthis->busy)) {
HXLINE( 180)				_gthis->destroy();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		bool destructive = __o_destructive.Default(false);
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_165_new)
HXLINE( 186)		this->onfill =  ::Dynamic(new _hx_Closure_0());
HXLINE( 185)		this->ondrain =  ::Dynamic(new _hx_Closure_1());
HXLINE( 177)		this->busy = false;
HXLINE( 175)		this->queue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 174)		this->used = 0;
HXLINE( 179)		 ::tink::core::CallbackList _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 180)		super::__construct( ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE( 181)		this->destructive = destructive;
HXLINE( 182)		this->cells = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic CallbackList_obj::__CreateEmpty() { return new CallbackList_obj; }

void *CallbackList_obj::_hx_vtable = 0;

Dynamic CallbackList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallbackList_obj > _hx_result = new CallbackList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallbackList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x11eb7047) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x11eb7047;
	} else {
		return inClassId==(int)0x12a8ef7c;
	}
}

int CallbackList_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_172_get_length)
HXDLIN( 172)		return this->used;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,get_length,return )

void CallbackList_obj::release(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_189_release)
HXDLIN( 189)		if ((--this->used <= (this->cells->length >> 1))) {
HXLINE( 190)			this->compact();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,release,(void))

void CallbackList_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_192_destroy)
HXLINE( 193)		{
HXLINE( 193)			int _g = 0;
HXDLIN( 193)			::Array< ::Dynamic> _g1 = this->cells;
HXDLIN( 193)			while((_g < _g1->length)){
HXLINE( 193)				 ::tink::core::_Callback::ListCell c = _g1->__get(_g).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 193)				_g = (_g + 1);
HXLINE( 194)				{
HXLINE( 194)					c->cb = null();
HXDLIN( 194)					c->list = null();
            				}
            			}
            		}
HXLINE( 196)		this->queue = null();
HXLINE( 197)		this->cells = null();
HXLINE( 199)		if ((this->used > 0)) {
HXLINE( 200)			this->used = 0;
HXLINE( 201)			{
HXLINE( 201)				 ::Dynamic fn = this->ondrain;
HXDLIN( 201)				if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 201)					::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 201)					fn();
HXDLIN( 201)					::tink::core::_Callback::Callback_Impl__obj::depth--;
            				}
            				else {
HXLINE( 201)					::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,destroy,(void))

void CallbackList_obj::drain(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_206_drain)
HXDLIN( 206)		 ::Dynamic fn = this->ondrain;
HXDLIN( 206)		if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXDLIN( 206)			::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 206)			fn();
HXDLIN( 206)			::tink::core::_Callback::Callback_Impl__obj::depth--;
            		}
            		else {
HXDLIN( 206)			::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,drain,(void))

::Dynamic CallbackList_obj::add( ::Dynamic cb){
            	HX_GC_STACKFRAME(&_hx_pos_03325987736a825f_208_add)
HXLINE( 209)		if (::hx::IsNull( this->disposeHandlers )) {
HXLINE( 209)			return null();
            		}
HXLINE( 210)		 ::tink::core::_Callback::ListCell node =  ::tink::core::_Callback::ListCell_obj::__alloc( HX_CTX ,cb,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 211)		this->cells->push(node);
HXLINE( 212)		if ((this->used++ == 0)) {
HXLINE( 212)			 ::Dynamic fn = this->onfill;
HXDLIN( 212)			if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 212)				::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 212)				fn();
HXDLIN( 212)				::tink::core::_Callback::Callback_Impl__obj::depth--;
            			}
            			else {
HXLINE( 212)				::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            			}
            		}
HXLINE( 213)		return node;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackList_obj,add,return )

void CallbackList_obj::invoke( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_217_invoke)
HXDLIN( 217)		 ::tink::core::CallbackList _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)		if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXDLIN( 217)			::tink::core::_Callback::Callback_Impl__obj::depth++;
HXLINE( 218)			if (::hx::IsNotNull( _gthis->disposeHandlers )) {
HXLINE( 219)				if (_gthis->busy) {
HXLINE( 220)					if ((_gthis->destructive != true)) {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::tink::core::CallbackList,_g, ::Dynamic,data1) HXARGC(0)
            						void _hx_run(){
            							HX_STACKFRAME(&_hx_pos_03325987736a825f_221_invoke)
HXLINE( 221)							_g->invoke(data1);
            						}
            						HX_END_LOCAL_FUNC0((void))

HXLINE( 221)						 ::tink::core::CallbackList _g = _gthis;
HXDLIN( 221)						 ::Dynamic data1 = data;
HXDLIN( 221)						 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(_g,data1));
HXDLIN( 221)						_gthis->queue->push(_hx_tmp);
            					}
            				}
            				else {
HXLINE( 224)					_gthis->busy = true;
HXLINE( 226)					if (_gthis->destructive) {
HXLINE( 227)						_gthis->dispose();
            					}
HXLINE( 229)					int length = _gthis->cells->length;
HXLINE( 230)					{
HXLINE( 230)						int _g1 = 0;
HXDLIN( 230)						while((_g1 < length)){
HXLINE( 230)							_g1 = (_g1 + 1);
HXLINE( 231)							{
HXLINE( 231)								 ::tink::core::_Callback::ListCell _this = _gthis->cells->__get((_g1 - 1)).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 231)								if (::hx::IsNotNull( _this->list )) {
HXLINE( 231)									_this->cb(data);
            								}
            							}
            						}
            					}
HXLINE( 233)					_gthis->busy = false;
HXLINE( 235)					if (::hx::IsNull( _gthis->disposeHandlers )) {
HXLINE( 236)						_gthis->destroy();
            					}
            					else {
HXLINE( 238)						if ((_gthis->used < _gthis->cells->length)) {
HXLINE( 239)							_gthis->compact();
            						}
HXLINE( 241)						if ((_gthis->queue->length > 0)) {
HXLINE( 242)							_gthis->queue->shift()();
            						}
            					}
            				}
            			}
HXLINE( 217)			::tink::core::_Callback::Callback_Impl__obj::depth--;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::tink::core::CallbackList,_gthis, ::Dynamic,data) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_03325987736a825f_218_invoke)
HXLINE( 218)				if (::hx::IsNotNull( _gthis->disposeHandlers )) {
HXLINE( 219)					if (_gthis->busy) {
HXLINE( 220)						if ((_gthis->destructive != true)) {
            							HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::tink::core::CallbackList,_g, ::Dynamic,data1) HXARGC(0)
            							void _hx_run(){
            								HX_STACKFRAME(&_hx_pos_03325987736a825f_221_invoke)
HXLINE( 221)								_g->invoke(data1);
            							}
            							HX_END_LOCAL_FUNC0((void))

HXLINE( 221)							 ::tink::core::CallbackList _g = _gthis;
HXDLIN( 221)							 ::Dynamic data1 = data;
HXDLIN( 221)							 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_1(_g,data1));
HXDLIN( 221)							_gthis->queue->push(_hx_tmp);
            						}
            					}
            					else {
HXLINE( 224)						_gthis->busy = true;
HXLINE( 226)						if (_gthis->destructive) {
HXLINE( 227)							_gthis->dispose();
            						}
HXLINE( 229)						int length = _gthis->cells->length;
HXLINE( 230)						{
HXLINE( 230)							int _g1 = 0;
HXDLIN( 230)							while((_g1 < length)){
HXLINE( 230)								_g1 = (_g1 + 1);
HXLINE( 231)								{
HXLINE( 231)									 ::tink::core::_Callback::ListCell _this = _gthis->cells->__get((_g1 - 1)).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 231)									if (::hx::IsNotNull( _this->list )) {
HXLINE( 231)										_this->cb(data);
            									}
            								}
            							}
            						}
HXLINE( 233)						_gthis->busy = false;
HXLINE( 235)						if (::hx::IsNull( _gthis->disposeHandlers )) {
HXLINE( 236)							_gthis->destroy();
            						}
            						else {
HXLINE( 238)							if ((_gthis->used < _gthis->cells->length)) {
HXLINE( 239)								_gthis->compact();
            							}
HXLINE( 241)							if ((_gthis->queue->length > 0)) {
HXLINE( 242)								_gthis->queue->shift()();
            							}
            						}
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 217)			::tink::core::_Callback::Callback_Impl__obj::defer( ::Dynamic(new _hx_Closure_2(_gthis,data)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackList_obj,invoke,(void))

void CallbackList_obj::compact(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_248_compact)
HXDLIN( 248)		if (this->busy) {
HXDLIN( 248)			return;
            		}
            		else {
HXLINE( 249)			if ((this->used == 0)) {
HXLINE( 250)				this->resize(0);
HXLINE( 251)				{
HXLINE( 251)					 ::Dynamic fn = this->ondrain;
HXDLIN( 251)					if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 251)						::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 251)						fn();
HXDLIN( 251)						::tink::core::_Callback::Callback_Impl__obj::depth--;
            					}
            					else {
HXLINE( 251)						::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            					}
            				}
            			}
            			else {
HXLINE( 254)				int compacted = 0;
HXLINE( 256)				{
HXLINE( 256)					int _g = 0;
HXDLIN( 256)					int _g1 = this->cells->length;
HXDLIN( 256)					while((_g < _g1)){
HXLINE( 256)						_g = (_g + 1);
HXDLIN( 256)						int i = (_g - 1);
HXLINE( 257)						{
HXLINE( 257)							 ::tink::core::_Callback::ListCell _g2 = this->cells->__get(i).StaticCast<  ::tink::core::_Callback::ListCell >();
HXLINE( 258)							if (::hx::IsNotNull( _g2->cb )) {
HXLINE( 260)								if ((compacted != i)) {
HXLINE( 261)									this->cells[compacted] = _g2;
            								}
HXLINE( 262)								compacted = (compacted + 1);
HXDLIN( 262)								if ((compacted == this->used)) {
HXLINE( 262)									goto _hx_goto_16;
            								}
            							}
            						}
            					}
            					_hx_goto_16:;
            				}
HXLINE( 265)				this->resize(this->used);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,compact,(void))

void CallbackList_obj::resize(int length){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_269_resize)
HXDLIN( 269)		this->cells->resize(length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackList_obj,resize,(void))

void CallbackList_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_272_clear)
HXLINE( 273)		if (this->busy) {
HXLINE( 274)			this->queue->push(this->clear_dyn());
            		}
HXLINE( 275)		{
HXLINE( 275)			int _g = 0;
HXDLIN( 275)			::Array< ::Dynamic> _g1 = this->cells;
HXDLIN( 275)			while((_g < _g1->length)){
HXLINE( 275)				 ::tink::core::_Callback::ListCell cell = _g1->__get(_g).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 275)				_g = (_g + 1);
HXLINE( 276)				{
HXLINE( 276)					cell->cb = null();
HXDLIN( 276)					cell->list = null();
            				}
            			}
            		}
HXLINE( 277)		this->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,clear,(void))


::hx::ObjectPtr< CallbackList_obj > CallbackList_obj::__new(::hx::Null< bool >  __o_destructive) {
	::hx::ObjectPtr< CallbackList_obj > __this = new CallbackList_obj();
	__this->__construct(__o_destructive);
	return __this;
}

::hx::ObjectPtr< CallbackList_obj > CallbackList_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_destructive) {
	CallbackList_obj *__this = (CallbackList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallbackList_obj), true, "tink.core.CallbackList"));
	*(void **)__this = CallbackList_obj::_hx_vtable;
	__this->__construct(__o_destructive);
	return __this;
}

CallbackList_obj::CallbackList_obj()
{
}

void CallbackList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallbackList);
	HX_MARK_MEMBER_NAME(destructive,"destructive");
	HX_MARK_MEMBER_NAME(cells,"cells");
	HX_MARK_MEMBER_NAME(used,"used");
	HX_MARK_MEMBER_NAME(queue,"queue");
	HX_MARK_MEMBER_NAME(busy,"busy");
	HX_MARK_MEMBER_NAME(ondrain,"ondrain");
	HX_MARK_MEMBER_NAME(onfill,"onfill");
	 ::tink::core::SimpleDisposable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CallbackList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destructive,"destructive");
	HX_VISIT_MEMBER_NAME(cells,"cells");
	HX_VISIT_MEMBER_NAME(used,"used");
	HX_VISIT_MEMBER_NAME(queue,"queue");
	HX_VISIT_MEMBER_NAME(busy,"busy");
	HX_VISIT_MEMBER_NAME(ondrain,"ondrain");
	HX_VISIT_MEMBER_NAME(onfill,"onfill");
	 ::tink::core::SimpleDisposable_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CallbackList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"used") ) { return ::hx::Val( used ); }
		if (HX_FIELD_EQ(inName,"busy") ) { return ::hx::Val( busy ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cells") ) { return ::hx::Val( cells ); }
		if (HX_FIELD_EQ(inName,"queue") ) { return ::hx::Val( queue ); }
		if (HX_FIELD_EQ(inName,"drain") ) { return ::hx::Val( drain_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"onfill") ) { return ::hx::Val( onfill ); }
		if (HX_FIELD_EQ(inName,"invoke") ) { return ::hx::Val( invoke_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ondrain") ) { return ::hx::Val( ondrain ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"compact") ) { return ::hx::Val( compact_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destructive") ) { return ::hx::Val( destructive ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CallbackList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"used") ) { used=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"busy") ) { busy=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cells") ) { cells=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onfill") ) { onfill=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ondrain") ) { ondrain=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destructive") ) { destructive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CallbackList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("destructive",02,6d,89,7b));
	outFields->push(HX_("cells",91,4c,c0,43));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("used",3d,92,ad,4d));
	outFields->push(HX_("queue",91,8d,ea,5d));
	outFields->push(HX_("busy",39,15,20,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CallbackList_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(CallbackList_obj,destructive),HX_("destructive",02,6d,89,7b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CallbackList_obj,cells),HX_("cells",91,4c,c0,43)},
	{::hx::fsInt,(int)offsetof(CallbackList_obj,used),HX_("used",3d,92,ad,4d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CallbackList_obj,queue),HX_("queue",91,8d,ea,5d)},
	{::hx::fsBool,(int)offsetof(CallbackList_obj,busy),HX_("busy",39,15,20,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CallbackList_obj,ondrain),HX_("ondrain",39,7a,c6,e2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CallbackList_obj,onfill),HX_("onfill",22,ab,6c,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CallbackList_obj_sStaticStorageInfo = 0;
#endif

static ::String CallbackList_obj_sMemberFields[] = {
	HX_("destructive",02,6d,89,7b),
	HX_("cells",91,4c,c0,43),
	HX_("get_length",af,04,8f,8f),
	HX_("used",3d,92,ad,4d),
	HX_("queue",91,8d,ea,5d),
	HX_("busy",39,15,20,41),
	HX_("ondrain",39,7a,c6,e2),
	HX_("onfill",22,ab,6c,fb),
	HX_("release",c7,85,ed,58),
	HX_("destroy",fa,2c,86,24),
	HX_("drain",b8,4b,b6,df),
	HX_("add",21,f2,49,00),
	HX_("invoke",78,77,e0,9f),
	HX_("compact",a3,0b,69,83),
	HX_("resize",f4,59,7b,08),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class CallbackList_obj::__mClass;

void CallbackList_obj::__register()
{
	CallbackList_obj _hx_dummy;
	CallbackList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.CallbackList",d6,72,f9,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CallbackList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CallbackList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallbackList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallbackList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
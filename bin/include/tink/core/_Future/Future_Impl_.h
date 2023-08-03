// Generated by Haxe 4.3.1
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#define INCLUDED_tink_core__Future_Future_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS2(tink,core,FutureTrigger)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS2(tink,core,Outcome)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS3(tink,core,_Future,Future_Impl_)
HX_DECLARE_CLASS3(tink,core,_Lazy,Computable)
HX_DECLARE_CLASS3(tink,core,_Lazy,LazyObject)

namespace tink{
namespace core{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES Future_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Future_Impl__obj OBJ_;
		Future_Impl__obj();

	public:
		enum { _hx_ClassId = 0x78864394 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.core._Future.Future_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.core._Future.Future_Impl_"); }

		inline static ::hx::ObjectPtr< Future_Impl__obj > __new() {
			::hx::ObjectPtr< Future_Impl__obj > __this = new Future_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Future_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Future_Impl__obj *__this = (Future_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Future_Impl__obj), false, "tink.core._Future.Future_Impl_"));
			*(void **)__this = Future_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Future_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Future_Impl_",43,35,0a,97); }

		static void __boot();
		static  ::tink::core::_Future::FutureObject NOISE;
		static  ::tink::core::_Future::FutureObject NEVER_INST;
		static  ::tink::core::_Future::FutureObject NEVER;
		static  ::tink::core::_Future::FutureObject never();
		static ::Dynamic never_dyn();

		static  ::tink::core::FutureStatus get_status( ::tink::core::_Future::FutureObject this1);
		static ::Dynamic get_status_dyn();

		static  ::tink::core::_Future::FutureObject _new( ::Dynamic wakeup);
		static ::Dynamic _new_dyn();

		static ::Dynamic handle( ::tink::core::_Future::FutureObject this1, ::Dynamic callback);
		static ::Dynamic handle_dyn();

		static  ::tink::core::_Future::FutureObject eager( ::tink::core::_Future::FutureObject this1);
		static ::Dynamic eager_dyn();

		static  ::tink::core::_Future::FutureObject noise( ::tink::core::_Future::FutureObject this1);
		static ::Dynamic noise_dyn();

		static  ::tink::core::_Future::FutureObject first( ::tink::core::_Future::FutureObject this1, ::tink::core::_Future::FutureObject that);
		static ::Dynamic first_dyn();

		static  ::tink::core::_Future::FutureObject map( ::tink::core::_Future::FutureObject this1, ::Dynamic f, ::Dynamic gather);
		static ::Dynamic map_dyn();

		static  ::tink::core::_Future::FutureObject flatMap( ::tink::core::_Future::FutureObject this1, ::Dynamic next, ::Dynamic gather);
		static ::Dynamic flatMap_dyn();

		static  ::tink::core::_Future::FutureObject swap( ::tink::core::_Future::FutureObject this1, ::Dynamic v);
		static ::Dynamic swap_dyn();

		static  ::tink::core::_Future::FutureObject next( ::tink::core::_Future::FutureObject this1, ::Dynamic n);
		static ::Dynamic next_dyn();

		static  ::tink::core::_Future::FutureObject withSideEffect( ::tink::core::_Future::FutureObject this1, ::Dynamic c);
		static ::Dynamic withSideEffect_dyn();

		static  ::tink::core::_Future::FutureObject gather( ::tink::core::_Future::FutureObject this1);
		static ::Dynamic gather_dyn();

		static  ::tink::core::_Future::FutureObject merge( ::tink::core::_Future::FutureObject this1, ::tink::core::_Future::FutureObject that, ::Dynamic combine);
		static ::Dynamic merge_dyn();

		static  ::tink::core::_Future::FutureObject flatten( ::tink::core::_Future::FutureObject f);
		static ::Dynamic flatten_dyn();

		static  ::tink::core::_Future::FutureObject neverToAny( ::tink::core::_Future::FutureObject l);
		static ::Dynamic neverToAny_dyn();

		static  ::tink::core::_Future::FutureObject ofAny( ::Dynamic v);
		static ::Dynamic ofAny_dyn();

		static  ::tink::core::_Future::FutureObject asPromise( ::tink::core::_Future::FutureObject s);
		static ::Dynamic asPromise_dyn();

		static  ::tink::core::_Future::FutureObject ofMany(::Array< ::Dynamic> futures, ::Dynamic gather);
		static ::Dynamic ofMany_dyn();

		static  ::tink::core::_Future::FutureObject inParallel(::Array< ::Dynamic> futures, ::Dynamic concurrency);
		static ::Dynamic inParallel_dyn();

		static  ::tink::core::_Future::FutureObject inSequence(::Array< ::Dynamic> futures);
		static ::Dynamic inSequence_dyn();

		static  ::tink::core::_Future::FutureObject many(::Array< ::Dynamic> a, ::Dynamic concurrency);
		static ::Dynamic many_dyn();

		static  ::tink::core::_Future::FutureObject processMany(::Array< ::Dynamic> a, ::Dynamic concurrency, ::Dynamic fn, ::Dynamic lift);
		static ::Dynamic processMany_dyn();

		static  ::tink::core::_Future::FutureObject lazy(::Dynamic l);
		static ::Dynamic lazy_dyn();

		static  ::tink::core::_Future::FutureObject sync( ::Dynamic v);
		static ::Dynamic sync_dyn();

		static bool isFuture( ::Dynamic maybeFuture);
		static ::Dynamic isFuture_dyn();

		static  ::tink::core::_Future::FutureObject async( ::Dynamic init, ::Dynamic lazy);
		static ::Dynamic async_dyn();

		static  ::tink::core::_Future::FutureObject irreversible( ::Dynamic init);
		static ::Dynamic irreversible_dyn();

		static  ::tink::core::_Future::FutureObject _hx_or( ::tink::core::_Future::FutureObject a, ::tink::core::_Future::FutureObject b);
		static ::Dynamic _hx_or_dyn();

		static  ::tink::core::_Future::FutureObject either( ::tink::core::_Future::FutureObject a, ::tink::core::_Future::FutureObject b);
		static ::Dynamic either_dyn();

		static  ::tink::core::_Future::FutureObject _hx_and( ::tink::core::_Future::FutureObject a, ::tink::core::_Future::FutureObject b);
		static ::Dynamic _hx_and_dyn();

		static  ::tink::core::_Future::FutureObject _tryFailingFlatMap( ::tink::core::_Future::FutureObject f, ::Dynamic map);
		static ::Dynamic _tryFailingFlatMap_dyn();

		static  ::tink::core::_Future::FutureObject _tryFlatMap( ::tink::core::_Future::FutureObject f, ::Dynamic map);
		static ::Dynamic _tryFlatMap_dyn();

		static  ::tink::core::_Future::FutureObject _tryFailingMap( ::tink::core::_Future::FutureObject f, ::Dynamic map);
		static ::Dynamic _tryFailingMap_dyn();

		static  ::tink::core::_Future::FutureObject _tryMap( ::tink::core::_Future::FutureObject f, ::Dynamic map);
		static ::Dynamic _tryMap_dyn();

		static  ::tink::core::_Future::FutureObject _flatMap( ::tink::core::_Future::FutureObject f, ::Dynamic map);
		static ::Dynamic _flatMap_dyn();

		static  ::tink::core::_Future::FutureObject _map( ::tink::core::_Future::FutureObject f, ::Dynamic map);
		static ::Dynamic _map_dyn();

		static  ::tink::core::FutureTrigger trigger();
		static ::Dynamic trigger_dyn();

		static  ::tink::core::_Future::FutureObject delay(int ms,::Dynamic value);
		static ::Dynamic delay_dyn();

};

} // end namespace tink
} // end namespace core
} // end namespace _Future

#endif /* INCLUDED_tink_core__Future_Future_Impl_ */ 

// Generated by Haxe 4.3.1
#ifndef INCLUDED_hxdiscord_types_Message
#define INCLUDED_hxdiscord_types_Message

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxdiscord,DiscordClient)
HX_DECLARE_CLASS2(hxdiscord,types,Member)
HX_DECLARE_CLASS2(hxdiscord,types,Message)
HX_DECLARE_CLASS2(hxdiscord,types,User)

namespace hxdiscord{
namespace types{


class HXCPP_CLASS_ATTRIBUTES Message_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Message_obj OBJ_;
		Message_obj();

	public:
		enum { _hx_ClassId = 0x0ad98bea };

		void __construct( ::Dynamic ms, ::hxdiscord::DiscordClient _client);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxdiscord.types.Message")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxdiscord.types.Message"); }
		static ::hx::ObjectPtr< Message_obj > __new( ::Dynamic ms, ::hxdiscord::DiscordClient _client);
		static ::hx::ObjectPtr< Message_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic ms, ::hxdiscord::DiscordClient _client);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Message_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Message",a7,5d,62,67); }

		int type;
		bool tts;
		::String timestamp;
		bool pinned;
		::String id;
		::String channel_id;
		::Array< ::Dynamic> attachments;
		 ::hxdiscord::types::User author;
		 ::Dynamic guildmember;
		 ::Dynamic referenced_message;
		::Array< ::Dynamic> embeds;
		 ::Dynamic message_reference;
		::String guild_id;
		 ::Dynamic allowed_mentions;
		::String content;
		 ::Dynamic embed;
		bool mention_everyone;
		 ::hxdiscord::DiscordClient client;
		 ::hxdiscord::types::Message prevSentMessage;
		void send( ::Dynamic mc);
		::Dynamic send_dyn();

		void reply( ::Dynamic mc, ::Dynamic ping);
		::Dynamic reply_dyn();

		void replyData( ::Dynamic data);
		::Dynamic replyData_dyn();

		void react(::String emoji);
		::Dynamic react_dyn();

		void deleteOwnReaction(::String emoji);
		::Dynamic deleteOwnReaction_dyn();

		void deleteReactions();
		::Dynamic deleteReactions_dyn();

		void deleteEmojiReaction(::String emoji);
		::Dynamic deleteEmojiReaction_dyn();

		void deleteMessage();
		::Dynamic deleteMessage_dyn();

		void pin();
		::Dynamic pin_dyn();

		void pinMessage();
		::Dynamic pinMessage_dyn();

		void unpin();
		::Dynamic unpin_dyn();

		void unpinMessage();
		::Dynamic unpinMessage_dyn();

		 ::Dynamic createThread( ::Dynamic obj);
		::Dynamic createThread_dyn();

		void editMessage( ::Dynamic m);
		::Dynamic editMessage_dyn();

		bool hasRole(::String roleToLookFor);
		::Dynamic hasRole_dyn();

		bool hasPermission(::String permissionToLookFor);
		::Dynamic hasPermission_dyn();

		 ::hxdiscord::types::Member getMember();
		::Dynamic getMember_dyn();

};

} // end namespace hxdiscord
} // end namespace types

#endif /* INCLUDED_hxdiscord_types_Message */ 

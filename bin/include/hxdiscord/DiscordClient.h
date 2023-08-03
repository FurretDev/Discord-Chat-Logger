// Generated by Haxe 4.3.1
#ifndef INCLUDED_hxdiscord_DiscordClient
#define INCLUDED_hxdiscord_DiscordClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ws,WebSocket)
HX_DECLARE_CLASS2(haxe,ws,WebSocketCommon)
HX_DECLARE_CLASS1(hxdiscord,BotData)
HX_DECLARE_CLASS1(hxdiscord,DiscordClient)
HX_DECLARE_CLASS1(hxdiscord,VoiceClient)
HX_DECLARE_CLASS2(hxdiscord,cache,CachedData)
HX_DECLARE_CLASS2(hxdiscord,types,Interaction)
HX_DECLARE_CLASS2(hxdiscord,types,Message)
HX_DECLARE_CLASS2(hxdiscord,types,User)

namespace hxdiscord{


class HXCPP_CLASS_ATTRIBUTES DiscordClient_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DiscordClient_obj OBJ_;
		DiscordClient_obj();

	public:
		enum { _hx_ClassId = 0x616787db };

		void __construct(::String _token,::Array< int > intents, ::Dynamic _debug);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxdiscord.DiscordClient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxdiscord.DiscordClient"); }
		static ::hx::ObjectPtr< DiscordClient_obj > __new(::String _token,::Array< int > intents, ::Dynamic _debug);
		static ::hx::ObjectPtr< DiscordClient_obj > __alloc(::hx::Ctx *_hx_ctx,::String _token,::Array< int > intents, ::Dynamic _debug);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,DiscordClient_obj *_hx_obj);
		//~DiscordClient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DiscordClient",f7,d0,c5,2b); }

		static void __boot();
		static ::String token;
		static bool debug;
		static ::String accountId;
		static ::String authHeader;
		 ::haxe::ws::WebSocket ws;
		 ::haxe::Timer hb_timer;
		::String status;
		bool canResume;
		bool receivedHelloOC;
		bool ignore;
		int sequence;
		bool showWsLogsVar;
		::Array< ::Dynamic> connectedVoiceClients;
		::String session;
		::String session_type;
		::String session_id;
		 ::Date last_heartbeat;
		int interval;
		::String editThis;
		int heartbeat_interval;
		 ::hxdiscord::cache::CachedData cache;
		 ::hxdiscord::BotData data;
		bool alive;
		bool readySent;
		bool verified;
		::String username;
		bool mfa_enabled;
		 ::hxdiscord::types::User user;
		bool ticked;
		::String accId;
		int flags;
		 ::Dynamic email;
		::String resume_gateway_url;
		::String discriminator;
		bool bot;
		 ::Dynamic avatar;
		::String presence;
		int presenceType;
		::cpp::VirtualArray presenceArray;
		bool afk;
		::Array< ::Dynamic> currentVoiceClients;
		int intentsNumber;
		bool noConnection;
		void sendHeartbeat();
		::Dynamic sendHeartbeat_dyn();

		void showWsLogs();
		::Dynamic showWsLogs_dyn();

		void hideWsLogs();
		::Dynamic hideWsLogs_dyn();

		void tick();
		::Dynamic tick_dyn();

		void connect();
		::Dynamic connect_dyn();

		 ::Dynamic setInteractionCommands( ::Dynamic j);
		::Dynamic setInteractionCommands_dyn();

		 ::Dynamic getValue(::cpp::VirtualArray array, ::Dynamic thingToSearch);
		::Dynamic getValue_dyn();

		void incomingMessages(::String msg);
		::Dynamic incomingMessages_dyn();

		void causeResume();
		::Dynamic causeResume_dyn();

		void changeStatus(::String status,::String type,::String presence, ::Dynamic afk);
		::Dynamic changeStatus_dyn();

		void changePresence(::String type,::String status);
		::Dynamic changePresence_dyn();

		 ::hxdiscord::VoiceClient createVoiceConnection(::String guild_id,::String channel_id, ::Dynamic self_mute, ::Dynamic self_deaf);
		::Dynamic createVoiceConnection_dyn();

		 ::hxdiscord::types::Interaction nInteraction( ::Dynamic ins, ::Dynamic d, ::Dynamic pj);
		::Dynamic nInteraction_dyn();

		 ::hxdiscord::types::Message nMessage( ::Dynamic ms, ::Dynamic d);
		::Dynamic nMessage_dyn();

		::Dynamic onInteractionCreate;
		inline ::Dynamic &onInteractionCreate_dyn() {return onInteractionCreate; }

		::Dynamic onReady;
		inline ::Dynamic &onReady_dyn() {return onReady; }

		::Dynamic onResumed;
		inline ::Dynamic &onResumed_dyn() {return onResumed; }

		::Dynamic onMessageCreate;
		inline ::Dynamic &onMessageCreate_dyn() {return onMessageCreate; }

		::Dynamic onThreadMemberUpdate;
		inline ::Dynamic &onThreadMemberUpdate_dyn() {return onThreadMemberUpdate; }

		::Dynamic onThreadMembersUpdate;
		inline ::Dynamic &onThreadMembersUpdate_dyn() {return onThreadMembersUpdate; }

		::Dynamic onGuildCreate;
		inline ::Dynamic &onGuildCreate_dyn() {return onGuildCreate; }

		::Dynamic onGuildUpdate;
		inline ::Dynamic &onGuildUpdate_dyn() {return onGuildUpdate; }

		::Dynamic onGuildDelete;
		inline ::Dynamic &onGuildDelete_dyn() {return onGuildDelete; }

		::Dynamic onGuildBanAdd;
		inline ::Dynamic &onGuildBanAdd_dyn() {return onGuildBanAdd; }

		::Dynamic onGuildBanRemove;
		inline ::Dynamic &onGuildBanRemove_dyn() {return onGuildBanRemove; }

		::Dynamic onGuildAuditLogEntryCreate;
		inline ::Dynamic &onGuildAuditLogEntryCreate_dyn() {return onGuildAuditLogEntryCreate; }

		::Dynamic onGuildMemberAdd;
		inline ::Dynamic &onGuildMemberAdd_dyn() {return onGuildMemberAdd; }

		::Dynamic onGuildMemberRemove;
		inline ::Dynamic &onGuildMemberRemove_dyn() {return onGuildMemberRemove; }

		::Dynamic onGuildMemberUpdate;
		inline ::Dynamic &onGuildMemberUpdate_dyn() {return onGuildMemberUpdate; }

		::Dynamic onChannelCreate;
		inline ::Dynamic &onChannelCreate_dyn() {return onChannelCreate; }

};

} // end namespace hxdiscord

#endif /* INCLUDED_hxdiscord_DiscordClient */ 
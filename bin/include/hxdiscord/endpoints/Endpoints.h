// Generated by Haxe 4.3.1
#ifndef INCLUDED_hxdiscord_endpoints_Endpoints
#define INCLUDED_hxdiscord_endpoints_Endpoints

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f1f00be883a777db_31_new)
HX_DECLARE_CLASS2(hxdiscord,endpoints,Endpoints)
HX_DECLARE_CLASS2(hxdiscord,types,Guild)
HX_DECLARE_CLASS2(hxdiscord,types,Member)
HX_DECLARE_CLASS2(hxdiscord,types,User)
HX_DECLARE_CLASS3(hxdiscord,types,message,ActionRow)

namespace hxdiscord{
namespace endpoints{


class HXCPP_CLASS_ATTRIBUTES Endpoints_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Endpoints_obj OBJ_;
		Endpoints_obj();

	public:
		enum { _hx_ClassId = 0x1977e4d0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxdiscord.endpoints.Endpoints")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxdiscord.endpoints.Endpoints"); }

		inline static ::hx::ObjectPtr< Endpoints_obj > __new() {
			::hx::ObjectPtr< Endpoints_obj > __this = new Endpoints_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Endpoints_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Endpoints_obj *__this = (Endpoints_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Endpoints_obj), true, "hxdiscord.endpoints.Endpoints"));
			*(void **)__this = Endpoints_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f1f00be883a777db_31_new)
HXDLIN(  31)		( ( ::hxdiscord::endpoints::Endpoints)(__this) )->getGateway = HX_("/gateway",b5,33,9c,11);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Endpoints_obj();

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
		::String __ToString() const { return HX_("Endpoints",1e,cc,4e,a4); }

		static void __boot();
		static ::String url;
		static ::String version;
		static ::String getGatewayBot;
		static ::String getEndpointData(::String token,::String _url,::String _version,::String _endpointPath,::String _args);
		static ::Dynamic getEndpointData_dyn();

		static ::String createDM(::String userID);
		static ::Dynamic createDM_dyn();

		static  ::hxdiscord::types::User getCurrentUser();
		static ::Dynamic getCurrentUser_dyn();

		static bool hasPermission(::String userID,::String guild_id,::String permissionToLookFor);
		static ::Dynamic hasPermission_dyn();

		static  ::hxdiscord::types::User getUser(::String id);
		static ::Dynamic getUser_dyn();

		static void getGuildMember(::String guild_id,::String id, ::Dynamic cb, ::Dynamic err);
		static ::Dynamic getGuildMember_dyn();

		static ::String getRoles(::String guild_id);
		static ::Dynamic getRoles_dyn();

		static void deleteMessage(::String channel_id,::String m_id);
		static ::Dynamic deleteMessage_dyn();

		static void editMessage(::String channel_id,::String m_id, ::Dynamic m);
		static ::Dynamic editMessage_dyn();

		static  ::Dynamic sendMessage(::String channel_id, ::Dynamic message,::String id,bool reply);
		static ::Dynamic sendMessage_dyn();

		static void sendMessageToChannelID(::String channelID, ::Dynamic data);
		static ::Dynamic sendMessageToChannelID_dyn();

		static void sendDataToMessageAPI( ::Dynamic data,::String channelId);
		static ::Dynamic sendDataToMessageAPI_dyn();

		static void createReaction(::String channel_id,::String message_id,::String emoji);
		static ::Dynamic createReaction_dyn();

		static void deleteOwnReaction(::String channel_id,::String message_id,::String emoji);
		static ::Dynamic deleteOwnReaction_dyn();

		static void deleteUserReaction(::String channel_id,::String message_id,::String emoji,::String user_id);
		static ::Dynamic deleteUserReaction_dyn();

		static void deleteAllReactions(::String channel_id,::String message_id);
		static ::Dynamic deleteAllReactions_dyn();

		static void deleteAllReactionsForEmoji(::String channel_id,::String message_id,::String emoji);
		static ::Dynamic deleteAllReactionsForEmoji_dyn();

		static  ::hxdiscord::types::Guild getGuild(::String guild_id);
		static ::Dynamic getGuild_dyn();

		static bool createGuildBan(::String id,::String guild_id,::String reason);
		static ::Dynamic createGuildBan_dyn();

		static bool removeGuildBan(::String id,::String guild_id);
		static ::Dynamic removeGuildBan_dyn();

		static bool removeGuildMember(::String id,::String guild_id,::String reason);
		static ::Dynamic removeGuildMember_dyn();

		static bool modifyGuildMember(::String guild_id,::String user_id, ::Dynamic d);
		static ::Dynamic modifyGuildMember_dyn();

		static bool modifyGuild(::String guild_id, ::Dynamic params);
		static ::Dynamic modifyGuild_dyn();

		static ::String getGuildChannels(::String guild_id);
		static ::Dynamic getGuildChannels_dyn();

		static bool deleteGuild(::String guild_id);
		static ::Dynamic deleteGuild_dyn();

		static bool editChannelPermissions(::String channel_id,::String overwrite_id, ::Dynamic data);
		static ::Dynamic editChannelPermissions_dyn();

		static ::String getChannelInvites(::String channel_id);
		static ::Dynamic getChannelInvites_dyn();

		static ::String getChannelMessages(::String channel_id,int limit);
		static ::Dynamic getChannelMessages_dyn();

		static ::String createChannelInvite(::String channel_id, ::Dynamic obj);
		static ::Dynamic createChannelInvite_dyn();

		static bool deleteChannelPermission(::String channel_id,::String overwrite_id);
		static ::Dynamic deleteChannelPermission_dyn();

		static void followAnnouncementChannel(::String channel_id,::String id);
		static ::Dynamic followAnnouncementChannel_dyn();

		static void triggerTypingIndicator(::String channel_id);
		static ::Dynamic triggerTypingIndicator_dyn();

		static ::String getPinnedMessages(::String channel_id);
		static ::Dynamic getPinnedMessages_dyn();

		static bool pinMessage(::String channel_id,::String message_id);
		static ::Dynamic pinMessage_dyn();

		static bool unpinMessage(::String channel_id,::String message_id);
		static ::Dynamic unpinMessage_dyn();

		static void groupDMAddRecipient(::String channel_id,::String user_id,::String access_token,::String nick);
		static ::Dynamic groupDMAddRecipient_dyn();

		static void groupDMRemoveRecipient(::String channel_id,::String user_id);
		static ::Dynamic groupDMRemoveRecipient_dyn();

		static  ::Dynamic startThreadFromMessage(::String channel_id,::String message_id, ::Dynamic obj);
		static ::Dynamic startThreadFromMessage_dyn();

		static bool startThreadWithoutMessage(::String channel_id, ::Dynamic obj);
		static ::Dynamic startThreadWithoutMessage_dyn();

		static bool startThreadInForumChannel(::String channel_id,::String message_id, ::Dynamic obj);
		static ::Dynamic startThreadInForumChannel_dyn();

		static bool joinThread(::String channel_id);
		static ::Dynamic joinThread_dyn();

		static bool addThreadMember(::String channel_id,::String user_id);
		static ::Dynamic addThreadMember_dyn();

		static bool leaveThread(::String channel_id);
		static ::Dynamic leaveThread_dyn();

		static bool removeThreadMember(::String channel_id,::String user_id);
		static ::Dynamic removeThreadMember_dyn();

		static ::String getThreadMember(::String channel_id,::String user_id);
		static ::Dynamic getThreadMember_dyn();

		static ::String listThreadMembers(::String channel_id,::String user_id);
		static ::Dynamic listThreadMembers_dyn();

		static ::String listPublicArchivedThreads(::String channel_id,::String user_id);
		static ::Dynamic listPublicArchivedThreads_dyn();

		static ::String listPrivateArchivedThreads(::String channel_id,::String user_id);
		static ::Dynamic listPrivateArchivedThreads_dyn();

		static ::String listJoinedPrivateArchivedThreads(::String channel_id);
		static ::Dynamic listJoinedPrivateArchivedThreads_dyn();

		static bool modifyGuildRole(::String guild_id,::String role_id, ::Dynamic data);
		static ::Dynamic modifyGuildRole_dyn();

		static bool addGuildMemberRole(::String guild_id,::String user_id,::String role_id);
		static ::Dynamic addGuildMemberRole_dyn();

		static bool removeGuildMemberRole(::String guild_id,::String user_id,::String role_id);
		static ::Dynamic removeGuildMemberRole_dyn();

		static ::String getGlobalApplicationCommands();
		static ::Dynamic getGlobalApplicationCommands_dyn();

		static void createGlobalApplicationCommand( ::Dynamic data);
		static ::Dynamic createGlobalApplicationCommand_dyn();

		static  ::Dynamic bulkOverwriteGlobalApplicationCommands( ::Dynamic data);
		static ::Dynamic bulkOverwriteGlobalApplicationCommands_dyn();

		static void bulkDeleteMessages(::String channel_id,::Array< ::String > messages);
		static ::Dynamic bulkDeleteMessages_dyn();

		static void makeInteractionThink(::String interactionID,::String interactionToken, ::Dynamic ephemeral);
		static ::Dynamic makeInteractionThink_dyn();

		static void showInteractionModal(::Array< ::Dynamic> imc,::String interactionID,::String interactionToken,int type,::String title,::String custom_id);
		static ::Dynamic showInteractionModal_dyn();

		static void sendInteractionCallback( ::Dynamic ic,::String interactionID,::String interactionToken,int type, ::Dynamic ephemeral);
		static ::Dynamic sendInteractionCallback_dyn();

		static  ::Dynamic editInteractionResponse( ::Dynamic ic,::String interactionToken);
		static ::Dynamic editInteractionResponse_dyn();

		::String getGateway;
};

} // end namespace hxdiscord
} // end namespace endpoints

#endif /* INCLUDED_hxdiscord_endpoints_Endpoints */ 
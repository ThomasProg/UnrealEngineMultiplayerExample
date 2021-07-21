==== To create a new multiplayer project ====
Step 1 : Download the Advanced Sessions plugin
Step 2 : Extract the AdvancedSessions and the AdvancedSteamSessions folders in Unreal Projects/MyProject/Plugins (create it if it doesn't exist)
Step 3 : Reopen the project
Step 4 : Use the Advanced Sessions plugin in blueprints
Step 5 : Paste the following in DefaultEngine.ini after the [/Script/Engine.Engine] section :

[/Script/Engine.GameEngine]
+NetDriverDefinitions=(DefName="GameNetDriver",DriverClassName="OnlineSubsystemSteam.SteamNetDriver",DriverClassNameFallback="OnlineSubsystemUtils.IpNetDriver")

[OnlineSubsystem]
DefaultPlatformService=Steam

[OnlineSubsystemSteam]
bEnabled=true
SteamDevAppId=480

[/Script/OnlineSubsystemSteam.SteamNetDriver]
NetConnectionClassName="OnlineSubsystemSteam.SteamNetConnection"


==== CURRENT PROJECT ====

Config > DefaultEngine.ini
in [OnlineSubsystemSteam] :
If you want to test without steam (on your computer), set :
bEnabled = false
If you want to test with steam, you have to use different accounts to join and set :
bEnabled = true


Tuto video : https://www.youtube.com/watch?v=EDNF2DNLhPc

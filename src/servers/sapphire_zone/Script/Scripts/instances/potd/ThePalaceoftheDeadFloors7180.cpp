#include <Script/NativeScriptApi.h>
#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class ThePalaceoftheDeadFloors7180 : public InstanceContentScript
{
public:
   ThePalaceoftheDeadFloors7180() : InstanceContentScript( 60008 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {
      
      instance->registerEObj( "Unknown0", 2000608, 6521120, 4, { -300.000000f, 3.189805f, -241.061096f }, 1.000000f );
   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};
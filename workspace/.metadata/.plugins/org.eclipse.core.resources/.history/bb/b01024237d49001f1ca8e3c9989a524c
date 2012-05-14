
/**
 * Implementation of the ReceivingAppC application. 
 * An application only receives a message.When the application receives a message, Led0 toggles. 
 * Packet's name is RadyoMsg. 
 * @author Senol Zafer Erdogan
 * @date   January 5 2010
 */

#include "Receiving.h"

configuration ReceivingAppC{}
implementation{
  components MainC, ReceivingC as App, LedsC;
  components new AMReceiverC(AM_RECEIVER);
  components new TimerMilliC();
  components ActiveMessageC;

  App.Boot -> MainC.Boot;
  App.Receive -> AMReceiverC;
  App.AMControl -> ActiveMessageC;
  App.Leds -> LedsC;
  App.MilliTimer -> TimerMilliC;
}	


/**
 * The application SendingAppC only sends the message. 
 * Every 2 sec, it sends a message to a specific node or broadcast 
 * When the application sends a message, Led0 toggles. 
 * Packet's name is RadyoMsg.
 * @author Senol Zafer Erdogan
 * @date   January 25 2010
 */

#include "Sending.h"
#include "mts300.h"
configuration SendingAppC {}

implementation {
  components MainC, SendingC as App, LedsC;
  components new AMSenderC(AM_SENDER);
  components new TimerMilliC();
  components ActiveMessageC;
  components new SensorMts300C();
  
  App.Boot -> MainC.Boot;
  App.AccelX -> SensorMts300C.AccelX;
  App.AccelY -> SensorMts300C.AccelY;
  App.AMSend -> AMSenderC;
  App.AMPacket -> AMSenderC;
  App.AMControl -> ActiveMessageC;
  App.Leds -> LedsC;
  App.Timer0 -> TimerMilliC;
  App.Packet -> AMSenderC;
}


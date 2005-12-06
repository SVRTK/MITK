// mitkInteractionDebug.h
#ifndef INTERACTION_DEBUG_H
#define INTERACTION_DEBUG_H

class SocketClient;
class StateMachine;

namespace mitk{

class InteractionDebug
{
  static InteractionDebug* m_Instance;
  static char* m_FileName;

  SocketClient* m_SocketClient;
  char m_Buffer[255];
  
  static const int OPEN_CONNECTION;
  static const int NEW_STATE_MACHINE;
  static const int EVENT;  
  static const int TRANSITION;
  static const int DELETE_STATE_MACHINE;
  
  unsigned int GetHashValue();
  InteractionDebug();

public:
  void OpenConection();
  bool NewStateMachine( const char* name, const StateMachine* stateMachine );
  bool Event( const StateMachine* stateMachine, unsigned int EventId );
  bool Transition( const StateMachine* stateMachine, int transitionId );
  bool DeleteStateMachine( const StateMachine* stateMachine );
  static InteractionDebug* GetInstance();
  static void SetXMLFileName( const char* fileName );
};

} // mitk

#endif // INTERACTION_DEBUG_H
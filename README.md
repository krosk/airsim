# airsim

Behaviors

Passenger check list

1/ Commuting to airport, to the correct terminal
2/ Looking for the desk panel, to look for the flight company check-in desk
3/ Moving to the check-in desk
4/ Queue in the correct class
5/ Check-in, put luggages, retrieve boarding pass
6/ Move to passport control
7/ Queue
8/ Control
9/ Optional: shopping
10/ Move to screening checkpoint
11/ Queue
12/ Screening
13/ Optional: shopping/eat/drink
14/ Move to gate
15/ Optional: shopping
16/ Queue for boarding class
17/ Boarding
18/ Follow boarding procedure




Apron
   
Taxiway
   Don't park a plane on a Taxiway if possible
Runway
   Pre Threshold: require connection to taxiway one directional
   Runway
   Threshold
   Stopway

Aircraft Landing
   Land
   Stop somewhere on the Runway
   Retrieve designated area DA
   Move towards DA
   Queue to DA until DA free
   Move to DA
   Wait until luggage unloaded and pax unboarded (by bus or gate)
   Move towards service area (could be same)
   Wait until maintenance done

Aircraft Flying
   Move towards DA
   Queue to DA until DA free
   Move to DA
   Wait until luggage loaded and pax boarded
   Move towards runway
   Queue to runway until runway free
   Move to runway
   Fly
   
Luggage vehicle loading aircraft
   Free
   Move toward luggage hangar
   Queue?
   Wait until loaded and ready
   Move to DA
   Wait until aircraft on DA
   Unload luggage
   Free, move back to parking
   
Luggage vehicle unloading aircraft
   Free
   Move to DA
   Wait until aircraft in DA
   Load luggage
   Wait until loaded and ready
   Move toward luggage hangar
   Queue
   Unload luggage
   Free, move back to parking

Maintenance vehicle
   Same as luggage
   Could directly wait at service area



Implementing Entity System



   Entity
      Aircraft
      Vehicle
      Passenger
      Luggage
      Building
      Gate
      Road
   Components
      Sprite
         
      Position
         X Y Z R
      PositionTarget
         X Y Z R
      VelocityBase
         FB UD LR
      
      AircraftLandingState
         Enum
      AircraftTakeoffState
         Enum
      PassengerState
         Enum
         Name
         
      VehicleState
         Enum
      LuggageState
         Enum
      VehicleMovementArea
      AircraftMovementArea
      PassengerMovementArea
      AircraftLoadingArea
      AircraftServiceArea
      PassengerContainer
      LuggageContainer
      Money
      Reputation
   System
      DecisionSystem
      MovementSystem
         In Position
         In VelocityBase
         In MoveTarget
         Ou Position
      RenderSystem
         In Position
         Ou Sprite

Example
http://www.miniatur-wunderland.de/fileadmin/media/wochenbericht/2007/01/09-flughafen-layout.jpg


Resource
http://theory.stanford.edu/~amitp/GameProgramming/MapRepresentations.html


Coding
http://stackoverflow.com/questions/471432/in-which-scenario-do-i-use-a-particular-stl-container
http://www.richardlord.net/blog/what-is-an-entity-framework
http://gameprogrammingpatterns.com/data-locality.html
http://incise.org/hash-table-benchmarks.html
/************
GAIT (Geospatial Analysis Integrity Tool) is a geospatial data validation tool developed by the Institute for Defense Analyses (IDA) for the National Geospatial-Intelligence Agency (NGA).  

This source code was used to generate GAIT 26 executable software in accordance with Amendment 6 to Task Order DH-8-3815 under Contract HQ0034-14-D-0001.

IDA is furnishing this item "as is". IDA was not tasked or funded to generate developer documentation or to provide support for this source code. IDA does not provide any warranty of the item whatsoever, whether express, implied, or statutory, including, but not limited to, any warranty of fitness for a particular purpose or any warranty that the contents of the item will be error-free. In no event shall NGA or IDA be held liable for damages arising, directly or indirectly, from the use of this source code. 

This material may be reproduced by the U.S. Government pursuant to its unlimited use rights under DFARS 252.227-7014 [Feb 2014].

The Institute for Defense Analyses (IDA) is a Federally Funded Research and Development Center that provides scientific and technical expertise on issues important to national security to the Office of the Secretary of Defense, Joint Staff, Unified Commands, and Defense Agencies. 

� 2017 Institute for Defense Analyses
  4850 Mark Center Drive
  Alexandria, Virginia 22311-1882
  703.845-2000
  www.ida.org
************/
#include "share.h"
int UFD3_CLASS_NUM=144;

char *UFD3_class_codes[] = {
"GB010",
"GB005",
"AK030",
"GB015",
"BH010",
"AL012",
"AE010",
"AK040",
"AP041",
"BC010",
"AC010",
"DB010",
"AQ045",
"AQ050",
"AQ055",
"AQ040",
"AL015",
"AL018",
"AL020",
"BH020",
"AP010",
"AQ064",
"AL030",
"AF010",
"AT050",
"AT080",
"AQ060",
"AF030",
"AF040",
"EA010",
"AQ065",
"DB070",
"BI020",
"AM010",
"AT010",
"AB000",
"BH030",
"AT020",
"DB090",
"AK090",
"DB110",
"AJ030",
"AL070",
"AQ070",
"AQ080",
"BH040",
"BH171",
"FA015",
"AK190",
"AF070",
"BH070",
"AH050",
"BH075",
"AP040",
"ZD019",
"AK100",
"AM020",
"AM030",
"AK110",
"EB010",
"GB030",
"GB035",
"AP020",
"BA030",
"BH080",
"GB040",
"BC050",
"BI030",
"ED010",
"SU001",
"AA010",
"AM040",
"AL120",
"AL130",
"AC040",
"EA040",
"GB045",
"AK120",
"AL165",
"AQ113",
"AL170",
"AD010",
"AT030",
"AT040",
"AC000",
"AQ116",
"AA012",
"AT045",
"AN010",
"AN050",
"AN075",
"AN060",
"BB220",
"BH130",
"GB050",
"BH135",
"AA040",
"BH140",
"BH145",
"AP030",
"AL200",
"GB055",
"BH155",
"DB170",
"EB020",
"GB065",
"BB230",
"BH160",
"AC030",
"AL208",
"AQ035",
"AD020",
"BH165",
"CA030",
"AK160",
"AQ125",
"AM060",
"AD030",
"SU002",
"ED020",
"AK170",
"AM070",
"GB075",
"AT070",
"AL209",
"AM031",
"AL240",
"AP050",
"FA165",
"EC030",
"AQ130",
"AH060",
"AL250",
"AQ140",
"EA050",
"AL260",
"BA040",
"BI050",
"AM080",
"AA050",
"AJ050",
"AJ051",
"AB010",
"AK180"
};

char *UFD3_class_names[] = {
"Airport Lighting",
"Airport/Airfield",
"Amusement Park",
"Apron/Hardstand",
"Aqueduct",
"Archeological Site",
"Assembly Plant",
"Athletic Field",
"Barrier",
"Beacon",
"Blast Furnace",
"Bluff/Cliff/Escarpment",
"Bridge Span",
"Bridge Superstructure",
"Bridge Tower/Bridge Pylon",
"Bridge/Overpass/Viaduct",
"Building",
"Building Superstructure Addition",
"Built-Up Area",
"Canal",
"Cart Track",
"Causeway",
"Cemetery",
"Chimney/Smokestack",
"Communication Building",
"Communication Tower",
"Control Tower",
"Cooling Tower",
"Crane",
"Cropland",
"Culvert",
"Cut",
"Dam/Weir",
"Depot (Storage)",
"Disk/Dish",
"Disposal Site/Waste Pile",
"Ditch",
"Early Warning Radar Site",
"Embankment/Fill",
"Fairgrounds",
"Fault",
"Feed Lot/Stockyard/Holding Pen",
"Fence",
"Ferry Crossing",
"Ferry Site",
"Filtration Beds/Aeration Beds",
"Fire Hydrant",
"Firing Range/Gunnery Range",
"Fishing Pier/Promenade Pier",
"Flare Pipe",
"Ford",
"Fortification",
"Fountain",
"Gate",
"General Miscellaneous Feature",
"Golf Course",
"Grain Bin/Silo",
"Grain Elevator",
"Grandstand",
"Grassland",
"Helicopter Landing Pad",
"Heliport",
"Interchange",
"Island",
"Lake/Pond",
"Launch Pad",
"Lighthouse",
"Lock",
"Marsh",
"Military Base",
"Mine",
"Mineral Pile",
"Missile Site",
"Monument",
"Oil/Gas Facilities",
"Orchard/Plantation",
"Overrun/Stopway",
"Park",
"Pipeline Or Pipe Crossing Point",
"Pipeline/Pipe",
"Plaza/City Square",
"Power Plant",
"Power Transmission Line",
"Power Transmission Pylon",
"Processing/Treatment Plant",
"Pumping Station",
"Quarry",
"Radar Transmitter",
"Railroad",
"Railroad Siding/Railroad Spur",
"Railroad Turntable",
"Railroad Yard/Marshalling Yard",
"Ramp (Maritime)",
"Reservoir",
"Revetment (Airfield/Equipment/Facilities )",
"Rice Field",
"Rig/Superstructure",
"River/Stream",
"River/Stream Vanishing Point",
"Road",
"Ruins",
"Runway",
"Salt Evaporator",
"Sand Dune/Sand Hills",
"Scrub/Brush/Bush",
"Seaplane Base",
"Seawall",
"Sebkha",
"Settling Basin/Sludge Pond",
"Shanty Town",
"Sidewalk",
"Solar Panels",
"Spillway",
"Spot Elevation",
"Stadium/Amphitheater",
"Station (Miscellaneous)",
"Storage Bunker/Storage Mound",
"Substation/Transformer Yard",
"Subway",
"Swamp",
"Swimming Pool",
"Tank",
"Taxiway",
"Telephone-Telegraph Pylon/Pole",
"Tent Dwellings",
"Timber Yard",
"Tower (Non-Communication)",
"Trail",
"Training Area",
"Trees",
"Tunnel",
"Underground Bunker",
"Underground Dwelling",
"Vehicle Storage/Parking Area",
"Vineyards",
"Wall",
"Water (Except Inland)",
"Water Intake Tower",
"Water Tower",
"Well",
"Windmill",
"Windmotor",
"Wrecking Yard/Scrap Yard",
"Zoo/Safari Park"
};

char *UFD3_class_defns[] = {
"Lights used to: define and outline perimeters, runways, taxiways, etc.; guide aircraft while on the ground, and to provide guidance to aircraft on approach for landing.",
"A defined area of land or water used for landing, take-off, and movement of aircraft including associated buildings and facilities.",
"A predominantly man-made facility equipped with recreational devices.  (See also AK090 and AK120)",
"A defined paved or hard-packed area at an airport or heliport intended for aircraft parking.",
"A pipe or artificial channel designed to transport water from a remote source, usually by gravity.  (See also BH110)",
"A site or location where remains of ancient civilizations or human activity have been discovered.  (See also AL200)",
"A building or group of buildings used for the purpose of combining manufactured parts to make a completed product.",
"An open area where sporting events, exercises, or games occur.",
"A permanent obstruction placed across a route to prevent vehicular traffic.",
"A fixed visual or electronic aid to navigation.",
"A heat chamber used for smelting iron ore.",
"A steep, vertical, or overhanging face of rock or earth.  (See also DB110)",
"A section of the bridge deck between successive supports such as pillars, piers, or abutments.",
"Those elements of the bridge structure which are above the lowest deck.  (See also AQ055)",
"A tower or pylon from which a bridge's deck is suspended.",
"A man-made structure spanning and providing passage over a body of water, depression, or other obstacles.",
"A relatively permanent structure, roofed and usually walled and designed for some particular use.  (See also AL100)",
"A supplemental portion of a building which rises from the roof but is not considered to be part of the general roof line.",
"An area containing a concentration of buildings and other structures.",
"A man-made or improved natural waterway used for transportation.",
"An unimproved roadway.",
"A raised roadway of solid structure built primarily to provide a route across wet ground or intertidal area.",
"An area of land for burying the dead.",
"A vertical structure containing a passage or flue for discharging smoke and gases of combustion.",
"A building in which communication signals are processed or controlled.",
"A relatively tall structure used for transmitting and/or receiving electronic communication signals.  (See also AQ060)",
"A tower-like structure that houses the persons and equipment used to control the flow of air, rail, or marine traffic.  (See also AL240)",
"A tower used to cool liquids.",
"A machine for lifting, shifting, and lowering objects or materials by means of a swinging boom or with the lifting apparatus supported on an overhead track.",
"An area that has been tilled for the planting of crops.  (See also EA040, EA050, and EA055)",
"A sewer or drain crossing under a road, track, or embankment, without affecting the construction of the crossed feature.",
"An excavation of the Earth's surface to provide passage for a road, railroad, canal, etc.",
"A permanent barrier across a watercourse used to impound water or to control its flow.  (See also BI040)",
"An area used for the storage of products or supplies.  (See also AB000)",
"A concave object used for transmitting or receiving electronic signals.",
"A site for the collecting/depositing of refuse or discarded material.  (See also AB010, AM010 and AM040)",
"A channel constructed for the purpose of irrigation or drainage.",
"An installation utilizing long range radar to detect approaching aircraft or missiles.",
"A raised long mound of earth or other material.  (See also BA051)",
"An area where permanent facilities exist to hold outdoor fairs, circuses or exhibitions.  (See also AK030 and AK120)",
"A fracture in the Earth's crust with displacement on one side of the fracture relative to the other.  (See also DB010)",
"An enclosed area in which livestock are temporarily kept.",
"A man-made barrier of relatively light structure used as an enclosure or boundary.  (See also AL260)",
"A route in a body of water where a ferry crosses from one shoreline to another.",
"A point where a ferry takes on or discharges its load.",
"An area containing layers of material used to filter or aerate water.",
"No definition available",
"An open area designated for the purpose of discharging or detonating firearms.",
"A structure extending into the water used as a platform for recreational purposes, not intended as a berthing place for vessels.",
"An open-ended pipe at which waste gases are burned.",
"A shallow place in a body of water used as a crossing.  (See also AQ062)",
"A facility constructed for the military defense of a site.  (See also AM060)",
"An artificial spring with water.",
"A barrier which controls passage to a road, railroad, tunnel, or bridge.",
"Any feature deemed important for a particular mission or user and which is not covered by any other feature coding in this catalog.",
"An area of land laid out for the game of golf.",
"An enclosed container, used for storing grain or fodder.  (See also AM011, AM070, and AM080)",
"A tall structure, equipped for loading, unloading, processing and storing grain.",
"A usually roofed structure for special viewing of events and having tiers of seats or standing room for spectators.",
"An area composed of uncultured plants which have little or no woody tissue.",
"An improved area used for take-off, and landing, by helicopters and other vertical take-off and landing aircraft.",
"A place designated for the landing and take-off of helicopters, including its buildings and facilities.",
"A connection designed to provide traffic access from one road to another.",
"A land mass smaller than a continent and surrounded by water.",
"A body of water surrounded by land.  (See also BH130)",
"A designated area or structure from which a rocket or missile is launched.",
"A distinctive structure exhibiting light(s) designed to serve as an aid to navigation.  (See also BC040)",
"An enclosure with a pair or series of gates used for raising or lowering vessels as they pass from one water level to another.  (See also BI005)",
"An area of wet, often spongy ground that is subject to frequent or tidal inundations, but not considered to be continually under water.  It is characterized by the growth of non woody plants and by the lack of trees.  (Nautical Chart Manual, US National Oceanic and Atmospheric Administration - NOAA, 1992)  (See also BH090, BH095, and ED020)",
"A center of operations for a military organization.",
"An excavation made in the earth for the purpose of extracting natural deposits.  (See also AQ090)",
"A man-made heap of mining or quarrying products excluding waste materials.  (See also AB000)",
"An area with related facilities for storing and launching missiles.",
"A structure erected or maintained as a memorial to a person or event.  (See also AL025 and AL090)",
"An area involved in the production or distribution of oil or natural gas.",
"An area covered by systematic plantings of trees which yield fruits, nuts or other products.  (See also EA010, EA050 and EA055)",
"An area beyond the take-off runway designated as able to support an airplane during an aborted take-off.",
"An area used for recreational or ornamental purposes.  (See also AK030, AK090 and AL170)",
"A traversable site extending across a pipeline or pipe that acts as a passageway for cross country movement of vehicles or troops.",
"A tube for the conveyance of solids, liquids or gases.",
"An open area which serves as a public square in a city or town.  (See also AK120)",
"The building(s) and equipment necessary for the generation of electric power.  (See also AD020)",
"A system of above ground wires including their supports, which transmits electricity over distance.  (See also AT005, AT006 and AT060)",
"A pylon or pole used to support a power transmission line.",
"A site used for changing or refining a particular material.",
"A facility to move solids, liquids or gases by means of pressure or suction.",
"An excavation created by removal of stone by blasting or cutting.",
"A device for transmitting and receiving radar emissions.",
"A rail or set of parallel rails on which a train or tram runs.",
"A stretch of railroad tracks connected to the main track by switch(es) - used for temporary storage and loading/unloading.",
"A rotating platform with railroad tracks used for turning locomotives or cars/carriages.",
"A system of tracks within defined limits, and associated features, provided for loading/unloading and assembling trains.",
"A partially submerged hard surfaced area on a shoreline for launching and retrieving vessels or vehicles.",
"A man-made enclosure or area formed for the storage of water.  (See also BH080)",
"A barricade which protects an aircraft, equipment, or facilities from hostile action.",
"An area periodically covered with water used for growing rice.",
"A vertical structure fitted for drilling or lifting operations.",
"A natural flowing watercourse.",
"Point at which a river or stream passes into the ground.",
"An open way maintained for vehicular use.",
"The deteriorated remains of an unspecified structure.  (See also AL012)",
"A defined area, usually rectangular, used for the conventional landing and take-off of aircraft.  (Excludes GB045)",
"Shallow pools, normally man-made, used for the natural evaporation of water for the collection of salt.",
"Ridges or hills of sand.",
"Low-growing woody plants.  (See also EC030)",
"An installation supporting aircraft capable of taking off and landing on water.",
"A structure built to protect the shore from erosion.",
"A natural depression in arid or semi-arid regions whose bed is covered with salt encrusted clayey soil.",
"A site where solid matter is precipitated from a liquid by evaporating or settling.",
"A dense concentration of crude, improvised dwellings made from salvaged materials, usually located on the outskirts of cities and having few, if any, streets and no public facilities.",
"A paved or improved pathway normally alongside streets or roads designed for pedestrian traffic.",
"Units of solar cells for converting sunlight into electrical energy or heat.  (See also AD010)",
"A passage for surplus water to run over or around a dam.",
"A designated location with an elevation value relative to a vertical datum.",
"An arena for holding and viewing events.",
"A stopping place for the transfer of passengers and/or freight.",
"A structure which may be covered or surrounded with earth which is resistant to ordnance where materials or products are stored.  (See also AH050)",
"A facility, along a power line route, in which electric current is transformed and/or distributed.",
"An underground, metropolitan electric railway or the tunnel through which it travels.",
"A low lying saturated area covered with water all or most of the year, where accumulating dead vegetation does not rapidly decay.  It can exist on flat-lying areas created by certain geomorphic environments.  The vegetation mainly consists of hydrophytic trees and/or scrubs whose roots are adapted to wet conditions, with an open to very dense canopy closure.  (See also BH090, BH095, and ED010)",
"A constructed basin used for swimming outdoors.",
"A container used for the storage of liquids or gases.  (See also AM011, AM020, and AM080)",
"A prepared surface providing access to/from runways and the aircraft parking area, terminal area, or service area, etc.",
"A pylon or pole used to support a telephone or telegraph line.",
"An encampment of people housed in tents.",
"An open area for the storage of wooden lumber and timbers.",
"A relatively tall structure which may be used for observation, support, or storage, etc.  (See also AF030, AM080, AQ060, and BI050)",
"A path worn by the passage of people or animals.",
"An area reserved for training.",
"Woody-perennial plants, having a self-supporting main stem or trunk.  (See also EA040, EB020 and EC015)",
"An underground or underwater passage, open at both ends, and usually containing a road or railroad.  (See also AQ090)",
"An underground facility used by the military either for location of command/control centers or for troop encampment.  (See also AL250)",
"Underground living quarters.  (See also AL040)",
"An open land area used for storing or parking vehicles or vessels (including recreational vehicles).  (See also AI020 and AK060)",
"An area covered by the systematic planting of grape vines.  (See also EA010, EA040 and EA055)",
"A solid man-made barrier of heavy material used as an enclosure or boundary or for protection.  (See also AL070)",
"An area of water which normally has tidal fluctuations.",
"A tower-like structure associated with a dam or water source and used for the intake of water.",
"An elevated container and its supporting structure used to hold water.  (See also AM011, AM020, and AM070)",
"A hole drilled or dug into the earth or sea bed for the extraction of liquids or gases.  (See also BH170)",
"A wind-driven system of vanes attached to a tower like structure (excluding wind-generated power plants).",
"A modern structure used for wind power.",
"An area or site engaged in the wrecking, dismantling, storage, or resale of discarded products.  (See also AB000)",
"An area with a collection of live animals usually for public display."
};

unsigned char UFD3DOMAINS[]={
0  /*** Dummy Value ***/,
D_AERO  /*** Airport Lighting ***/,
D_AERO  /*** Airport/Airfield ***/,
D_POPU  /*** Amusement Park ***/,
D_AERO  /*** Apron/Hardstand ***/,
D_INWA  /*** Aqueduct ***/,
D_POPU  /*** Archeological Site ***/,
D_UTAN  /*** Assembly Plant ***/,
D_POPU  /*** Athletic Field ***/,
D_GRTR  /*** Barrier ***/,
D_AITO  /*** Beacon ***/,
D_UTAN  /*** Blast Furnace ***/,
D_PHYS  /*** Bluff/Cliff/Escarpment ***/,
D_GRTR  /*** Bridge Span ***/,
D_GRTR  /*** Bridge Superstructure ***/,
D_GRTR  /*** Bridge Tower/Bridge Pylon ***/,
D_GRTR  /*** Bridge/Overpass/Viaduct ***/,
D_POPU  /*** Building ***/,
D_GRTR  /*** Building Superstructure Addition ***/,
D_POPU  /*** Built-Up Area ***/,
D_INWA  /*** Canal ***/,
D_GRTR  /*** Cart Track ***/,
D_GRTR  /*** Causeway ***/,
D_POPU  /*** Cemetery ***/,
D_UTAN  /*** Chimney/Smokestack ***/,
D_UTAN  /*** Communication Building ***/,
D_UTAN  /*** Communication Tower ***/,
D_POPU  /*** Control Tower ***/,
D_UTAN  /*** Cooling Tower ***/,
D_UTAN  /*** Crane ***/,
D_VEGE  /*** Cropland ***/,
D_GRTR  /*** Culvert ***/,
D_PHYS  /*** Cut ***/,
D_INWA  /*** Dam/Weir ***/,
D_UTAN  /*** Depot (Storage) ***/,
D_UTAN  /*** Disk/Dish ***/,
D_UTAN  /*** Disposal Site/Waste Pile ***/,
D_INWA  /*** Ditch ***/,
D_DEST  /*** Early Warning Radar Site ***/,
D_PHYS  /*** Embankment/Fill ***/,
D_POPU  /*** Fairgrounds ***/,
D_PHYS  /*** Fault ***/,
D_UTAN  /*** Feed Lot/Stockyard/Holding Pen ***/,
D_POPU  /*** Fence ***/,
D_GRTR  /*** Ferry Crossing ***/,
D_GRTR  /*** Ferry Site ***/,
D_UTAN  /*** Filtration Beds/Aeration Beds ***/,
D_INWA  /*** Fire Hydrant ***/,
D_BOUN  /*** Firing Range/Gunnery Range ***/,
D_POAN  /*** Fishing Pier/Promenade Pier ***/,
D_UTAN  /*** Flare Pipe ***/,
D_GRTR  /*** Ford ***/,
D_DEST  /*** Fortification ***/,
D_POPU  /*** Fountain ***/,
D_GRTR  /*** Gate ***/,
D_GENE  /*** General Miscellaneous Feature ***/,
D_POPU  /*** Golf Course ***/,
D_UTAN  /*** Grain Bin/Silo ***/,
D_UTAN  /*** Grain Elevator ***/,
D_POPU  /*** Grandstand ***/,
D_VEGE  /*** Grassland ***/,
D_AERO  /*** Helicopter Landing Pad ***/,
D_AERO  /*** Heliport ***/,
D_GRTR  /*** Interchange ***/,
D_PHYS  /*** Island ***/,
D_INWA  /*** Lake/Pond ***/,
D_AERO  /*** Launch Pad ***/,
D_AITO  /*** Lighthouse ***/,
D_INWA  /*** Lock ***/,
D_VEGE  /*** Marsh ***/,
D_DEST  /*** Military Base ***/,
D_UTAN  /*** Mine ***/,
D_UTAN  /*** Mineral Pile ***/,
D_DEST  /*** Missile Site ***/,
D_POPU  /*** Monument ***/,
D_UTAN  /*** Oil/Gas Facilities ***/,
D_VEGE  /*** Orchard/Plantation ***/,
D_AERO  /*** Overrun/Stopway ***/,
D_POPU  /*** Park ***/,
D_GRTR  /*** Pipeline Or Pipe Crossing Point ***/,
D_UTAN  /*** Pipeline/Pipe ***/,
D_POPU  /*** Plaza/City Square ***/,
D_UTAN  /*** Power Plant ***/,
D_UTAN  /*** Power Transmission Line ***/,
D_UTAN  /*** Power Transmission Pylon ***/,
D_UTAN  /*** Processing/Treatment Plant ***/,
D_UTAN  /*** Pumping Station ***/,
D_UTAN  /*** Quarry ***/,
D_UTAN  /*** Radar Transmitter ***/,
D_GRTR  /*** Railroad ***/,
D_GRTR  /*** Railroad Siding/Railroad Spur ***/,
D_GRTR  /*** Railroad Turntable ***/,
D_GRTR  /*** Railroad Yard/Marshalling Yard ***/,
D_POAN  /*** Ramp (Maritime) ***/,
D_INWA  /*** Reservoir ***/,
D_AERO  /*** Revetment (Airfield/Equipment/Facilities ) ***/,
D_VEGE  /*** Rice Field ***/,
D_UTAN  /*** Rig/Superstructure ***/,
D_INWA  /*** River/Stream ***/,
D_INWA  /*** River/Stream Vanishing Point ***/,
D_GRTR  /*** Road ***/,
D_POPU  /*** Ruins ***/,
D_AERO  /*** Runway ***/,
D_UTAN  /*** Salt Evaporator ***/,
D_PHYS  /*** Sand Dune/Sand Hills ***/,
D_VEGE  /*** Scrub/Brush/Bush ***/,
D_AERO  /*** Seaplane Base ***/,
D_POAN  /*** Seawall ***/,
D_PHYS  /*** Sebkha ***/,
D_UTAN  /*** Settling Basin/Sludge Pond ***/,
D_POPU  /*** Shanty Town ***/,
D_POPU  /*** Sidewalk ***/,
D_UTAN  /*** Solar Panels ***/,
D_INWA  /*** Spillway ***/,
D_ELEV  /*** Spot Elevation ***/,
D_POPU  /*** Stadium/Amphitheater ***/,
D_GRTR  /*** Station (Miscellaneous) ***/,
D_UTAN  /*** Storage Bunker/Storage Mound ***/,
D_UTAN  /*** Substation/Transformer Yard ***/,
D_GRTR  /*** Subway ***/,
D_VEGE  /*** Swamp ***/,
D_POPU  /*** Swimming Pool ***/,
D_UTAN  /*** Tank ***/,
D_AERO  /*** Taxiway ***/,
D_UTAN  /*** Telephone-Telegraph Pylon/Pole ***/,
D_POPU  /*** Tent Dwellings ***/,
D_UTAN  /*** Timber Yard ***/,
D_UTAN  /*** Tower (Non-Communication) ***/,
D_GRTR  /*** Trail ***/,
D_DEST  /*** Training Area ***/,
D_VEGE  /*** Trees ***/,
D_GRTR  /*** Tunnel ***/,
D_DEST  /*** Underground Bunker ***/,
D_POPU  /*** Underground Dwelling ***/,
D_GRTR  /*** Vehicle Storage/Parking Area ***/,
D_VEGE  /*** Vineyards ***/,
D_POPU  /*** Wall ***/,
D_OCEN  /*** Water (Except Inland) ***/,
D_INWA  /*** Water Intake Tower ***/,
D_UTAN  /*** Water Tower ***/,
D_INWA  /*** Well ***/,
D_UTAN  /*** Windmill ***/,
D_UTAN  /*** Windmotor ***/,
D_UTAN  /*** Wrecking Yard/Scrap Yard ***/,
D_POPU  /*** Zoo/Safari Park ***/
};

int UFD3DOMAINSLEN = sizeof(UFD3DOMAINS)/ sizeof(unsigned char);

unsigned char UFD3STRATS[]={
0  /*** Dummy Value ***/,
S_APPL  /*** Airport Lighting ***/,
S_APPL  /*** Airport/Airfield ***/,
S_APPL  /*** Amusement Park ***/,
S_APPL  /*** Apron/Hardstand ***/,
S_APPL  /*** Aqueduct ***/,
S_APPL  /*** Archeological Site ***/,
S_APPL  /*** Assembly Plant ***/,
S_APPL  /*** Athletic Field ***/,
S_APPL  /*** Barrier ***/,
S_APPL  /*** Beacon ***/,
S_APPL  /*** Blast Furnace ***/,
S_APPL  /*** Bluff/Cliff/Escarpment ***/,
S_APPL  /*** Bridge Span ***/,
S_APPL  /*** Bridge Superstructure ***/,
S_APPL  /*** Bridge Tower/Bridge Pylon ***/,
S_APPL  /*** Bridge/Overpass/Viaduct ***/,
S_APPL  /*** Building ***/,
S_APPL  /*** Building Superstructure Addition ***/,
S_APPL  /*** Built-Up Area ***/,
S_APPL  /*** Canal ***/,
S_APPL  /*** Cart Track ***/,
S_APPL  /*** Causeway ***/,
S_APPL  /*** Cemetery ***/,
S_APPL  /*** Chimney/Smokestack ***/,
S_APPL  /*** Communication Building ***/,
S_APPL  /*** Communication Tower ***/,
S_APPL  /*** Control Tower ***/,
S_APPL  /*** Cooling Tower ***/,
S_APPL  /*** Crane ***/,
S_APPL  /*** Cropland ***/,
S_APPL  /*** Culvert ***/,
S_APPL  /*** Cut ***/,
S_APPL  /*** Dam/Weir ***/,
S_APPL  /*** Depot (Storage) ***/,
S_APPL  /*** Disk/Dish ***/,
S_APPL  /*** Disposal Site/Waste Pile ***/,
S_APPL  /*** Ditch ***/,
S_APPL  /*** Early Warning Radar Site ***/,
S_APPL  /*** Embankment/Fill ***/,
S_APPL  /*** Fairgrounds ***/,
S_APPL  /*** Fault ***/,
S_APPL  /*** Feed Lot/Stockyard/Holding Pen ***/,
S_APPL  /*** Fence ***/,
S_APPL  /*** Ferry Crossing ***/,
S_APPL  /*** Ferry Site ***/,
S_APPL  /*** Filtration Beds/Aeration Beds ***/,
S_APPL  /*** Fire Hydrant ***/,
S_APPL  /*** Firing Range/Gunnery Range ***/,
S_APPL  /*** Fishing Pier/Promenade Pier ***/,
S_APPL  /*** Flare Pipe ***/,
S_APPL  /*** Ford ***/,
S_APPL  /*** Fortification ***/,
S_APPL  /*** Fountain ***/,
S_APPL  /*** Gate ***/,
S_APPL  /*** General Miscellaneous Feature ***/,
S_APPL  /*** Golf Course ***/,
S_APPL  /*** Grain Bin/Silo ***/,
S_APPL  /*** Grain Elevator ***/,
S_APPL  /*** Grandstand ***/,
S_APPL  /*** Grassland ***/,
S_APPL  /*** Helicopter Landing Pad ***/,
S_APPL  /*** Heliport ***/,
S_APPL  /*** Interchange ***/,
S_APPL  /*** Island ***/,
S_APPL  /*** Lake/Pond ***/,
S_APPL  /*** Launch Pad ***/,
S_APPL  /*** Lighthouse ***/,
S_APPL  /*** Lock ***/,
S_APPL  /*** Marsh ***/,
S_APPL  /*** Military Base ***/,
S_APPL  /*** Mine ***/,
S_APPL  /*** Mineral Pile ***/,
S_APPL  /*** Missile Site ***/,
S_APPL  /*** Monument ***/,
S_APPL  /*** Oil/Gas Facilities ***/,
S_APPL  /*** Orchard/Plantation ***/,
S_APPL  /*** Overrun/Stopway ***/,
S_APPL  /*** Park ***/,
S_APPL  /*** Pipeline Or Pipe Crossing Point ***/,
S_APPL  /*** Pipeline/Pipe ***/,
S_APPL  /*** Plaza/City Square ***/,
S_APPL  /*** Power Plant ***/,
S_APPL  /*** Power Transmission Line ***/,
S_APPL  /*** Power Transmission Pylon ***/,
S_APPL  /*** Processing/Treatment Plant ***/,
S_APPL  /*** Pumping Station ***/,
S_APPL  /*** Quarry ***/,
S_APPL  /*** Radar Transmitter ***/,
S_APPL  /*** Railroad ***/,
S_APPL  /*** Railroad Siding/Railroad Spur ***/,
S_APPL  /*** Railroad Turntable ***/,
S_APPL  /*** Railroad Yard/Marshalling Yard ***/,
S_APPL  /*** Ramp (Maritime) ***/,
S_APPL  /*** Reservoir ***/,
S_APPL  /*** Revetment (Airfield/Equipment/Facilities ) ***/,
S_APPL  /*** Rice Field ***/,
S_APPL  /*** Rig/Superstructure ***/,
S_APPL  /*** River/Stream ***/,
S_APPL  /*** River/Stream Vanishing Point ***/,
S_APPL  /*** Road ***/,
S_APPL  /*** Ruins ***/,
S_APPL  /*** Runway ***/,
S_APPL  /*** Salt Evaporator ***/,
S_APPL  /*** Sand Dune/Sand Hills ***/,
S_APPL  /*** Scrub/Brush/Bush ***/,
S_APPL  /*** Seaplane Base ***/,
S_APPL  /*** Seawall ***/,
S_APPL  /*** Sebkha ***/,
S_APPL  /*** Settling Basin/Sludge Pond ***/,
S_APPL  /*** Shanty Town ***/,
S_APPL  /*** Sidewalk ***/,
S_APPL  /*** Solar Panels ***/,
S_APPL  /*** Spillway ***/,
S_APPL  /*** Spot Elevation ***/,
S_APPL  /*** Stadium/Amphitheater ***/,
S_APPL  /*** Station (Miscellaneous) ***/,
S_APPL  /*** Storage Bunker/Storage Mound ***/,
S_APPL  /*** Substation/Transformer Yard ***/,
S_APPL  /*** Subway ***/,
S_APPL  /*** Swamp ***/,
S_APPL  /*** Swimming Pool ***/,
S_APPL  /*** Tank ***/,
S_APPL  /*** Taxiway ***/,
S_APPL  /*** Telephone-Telegraph Pylon/Pole ***/,
S_APPL  /*** Tent Dwellings ***/,
S_APPL  /*** Timber Yard ***/,
S_APPL  /*** Tower (Non-Communication) ***/,
S_APPL  /*** Trail ***/,
S_APPL  /*** Training Area ***/,
S_APPL  /*** Trees ***/,
S_APPL  /*** Tunnel ***/,
S_APPL  /*** Underground Bunker ***/,
S_APPL  /*** Underground Dwelling ***/,
S_APPL  /*** Vehicle Storage/Parking Area ***/,
S_APPL  /*** Vineyards ***/,
S_APPL  /*** Wall ***/,
S_APPL  /*** Water (Except Inland) ***/,
S_APPL  /*** Water Intake Tower ***/,
S_APPL  /*** Water Tower ***/,
S_APPL  /*** Well ***/,
S_APPL  /*** Windmill ***/,
S_APPL  /*** Windmotor ***/,
S_APPL  /*** Wrecking Yard/Scrap Yard ***/,
S_APPL  /*** Zoo/Safari Park ***/
};

int UFD3STRATSLEN = sizeof(UFD3STRATS)/ sizeof(unsigned char);



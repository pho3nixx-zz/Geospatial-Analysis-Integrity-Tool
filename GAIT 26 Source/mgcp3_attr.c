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
int MGCP3_ATTR_NUM=169;

char *MGCP3_attr_codes[] = {
"ACE",
"ACE_EVAL",
"ALE",
"ALE_EVAL",
"ACS",
"ZVA",
"LFA",
"ART",
"AFC",
"AWP",
"FPT",
"AOO",
"ATC",
"ARA",
"TXT",
"AFA",
"BOC",
"RSA",
"BOT",
"BSC",
"BRF",
"BAC",
"PBY",
"CAB",
"CAT",
"DMT",
"NA3",
"CPYRT_NOTE",
"TIER_NOTE",
"CIT",
"CUS",
"FUN",
"CNS",
"CAA",
"CFC",
"CCT",
"CDA",
"CRM",
"CRA",
"CSP",
"CEF",
"CTL",
"DFT",
"COD",
"DDC",
"EBT",
"FIC",
"MIN",
"COS",
"FMM",
"FFP",
"DMF",
"FTI",
"FCL",
"TRE",
"FUC",
"GFC",
"FHC",
"HGT",
"HAF",
"ACC",
"HCA",
"HWT",
"HYP",
"IKO",
"IRG",
"ISS",
"CLI",
"SHL",
"LBV",
"LEN",
"RTA",
"LC1",
"LC2",
"LC3",
"LC4",
"RST",
"SRL",
"UID",
"ASC",
"ICF",
"STA",
"MOH",
"MVC",
"MES",
"MFC",
"BSM",
"NAM",
"NFN",
"NFI",
"NVS",
"LMC",
"NST",
"OPC",
"OHB",
"NPL",
"SCB",
"PRM",
"KVA",
"TST",
"PPC",
"PFH",
"PPO",
"PAF",
"PSF",
"RAC",
"GAW",
"RGC",
"RRA",
"RRC",
"RIR",
"ORD",
"REL",
"RFC",
"RES",
"UPD_DATE",
"UPD_INFO",
"UPD_NAME",
"SHR",
"RBV",
"RIT",
"WTC",
"RKF",
"SSR",
"RTN",
"WD1",
"SDO",
"SDT",
"SFY",
"SSO",
"SUC",
"PWC",
"SLT",
"FAC",
"VDC",
"SRC_DATE",
"SRC_INFO",
"SRC_NAME",
"NOS",
"SSC",
"SMC",
"TXP",
"HCT",
"TID",
"NA2",
"TOS",
"TTC",
"LTN",
"TFC",
"TRS",
"UHS",
"DMB",
"LNU",
"UUC",
"VEG",
"VSP",
"VOI",
"LOC",
"ZVAL_TYPE",
"VGT",
"GNC",
"WLE",
"SCC",
"OWO",
"WCC",
"WST",
"FRT",
"WFT",
"WID"
};

char *MGCP3_attr_names[] = {
"Absolute Horizontal Accuracy",
"Absolute Horizontal Accuracy Evaluation Method",
"Absolute Vertical Accuracy",
"Absolute Vertical Accuracy Evaluation Method",
"Accessibility Status",
"Aerodrome Elevation",
"Aeronautical Light Function",
"Aeronautical Route Category",
"Agricultural Facility Type",
"Air Warning Light Present",
"Airfield Type",
"Angle of Orientation",
"Aqueduct Type",
"Area",
"Associated Text",
"Available Small Craft Service",
"Bog Type",
"Branch Railway Type",
"Bridge Opening Type",
"Bridge Structure Type",
"Broadcast Frequency",
"Built-up Area Density Category",
"By-product",
"Cable Type",
"Cableway Type",
"Canopy Cover",
"Classification Name",
"Commercial Copyright Notice",
"Commercial Distribution Restriction",
"Commercial Facility Type",
"Communication Facility Type",
"Condition of Facility",
"Controlled",
"Controlling Authority",
"Corrections Facility Type",
"Cover Closure Type",
"Covered Drain",
"Crane Mobility Type",
"Crane Type",
"Crop Species",
"Cultural Facility Type",
"Cumulative Track Length",
"Dam Face Type",
"Delineation Known",
"Dwelling Type",
"Educational Facility Type",
"Embankment Type",
"Extraction Mine Type",
"Facility Operational Status",
"Farming Method",
"Farming Pattern",
"Feature Count",
"Fence Type",
"Ferry Crossing Distance",
"Foliage Type",
"Functional Use",
"Government Facility Type",
"Harbour Facility Function",
"Height Above Surface Level",
"Helipad Associated Facility",
"Horizontal Accuracy Category",
"Horizontal Clearance",
"House of Worship Type",
"Hydrologic Persistence",
"ICAO Identifier",
"Irrigation Method",
"Isolated",
"Isolated Communication Line",
"Left Bank Shoreline Type",
"Left Bank Vegetation Cover",
"Length or Diameter",
"Linear Feature Arrangement",
"Load Class Type 1",
"Load Class Type 2",
"Load Class Type 3",
"Load Class Type 4",
"Load-bearing Surface Type",
"Location Referenced to Shoreline",
"MGCP Feature universally unique identifier",
"Man-made",
"Manufacturing Facility Type",
"Maritime Station Type",
"Maximum Obstacle Height",
"Maximum Vertical Clearance",
"Median Present",
"Military Facility Type",
"Mobile Bridge Span",
"Name",
"Name Identifier",
"Named Feature Identifier",
"Navigability Information",
"Navigation Landmark",
"Navigation System Type",
"Offshore Platform Type",
"Overall Bridge Height",
"Parallel Line Count",
"Pavement Condition",
"Permanent",
"Power Line Maximum Voltage",
"Power Line Shape",
"Power Plant Type",
"Predominant Feature Height",
"Product",
"Public Accommodation Facility Type",
"Public Service Facility Type",
"Radar Antenna Configuration",
"Railway Gauge",
"Railway Gauge Classification",
"Railway Power Method",
"Railway Use",
"Railway in Road",
"Relative Importance",
"Religious Designation",
"Religious Facility Type",
"Research Facility Type",
"Review Source Date and Time",
"Review Source Description",
"Review Source Type",
"Right Bank Shoreline Type",
"Right Bank Vegetation Cover",
"Road Interchange Type",
"Road Weather Restriction",
"Rock Formation Structure",
"Roof Shape",
"Route Designation",
"Route Minimum Travelled Way Width",
"Sand Dune Orientation",
"Sand Dune Type",
"Security Facility Type",
"Shaft Slope Orientation",
"Shed Type",
"Shoreline Construction Type",
"Shoreline Type",
"Solid Maritime Construction",
"Sounding Datum",
"Source Date and Time",
"Source Description",
"Source Type",
"Span Count",
"Structure Shape",
"Surface Material Type",
"Taxiway Type",
"Thoroughfare Class",
"Tide Influenced",
"Touristic Name",
"Tower Shape",
"Tower Type",
"Track or Lane Count",
"Transportation Facility Type",
"Transportation System Type",
"Uncovering Height Known",
"Undergrowth Density",
"Usable Length",
"Utility Facility Type",
"Vegetation Characteristic",
"Vegetation Species",
"Vertical Obstruction Identifier",
"Vertical Relative Location",
"Vertical Source Category",
"Volcano Shape",
"Water Gate Type",
"Water Level Effect",
"Water Type",
"Waterbody Overhead Obstruction",
"Watercourse Channel Type",
"Watercourse Sink Type",
"Weapons Range Type",
"Well Type",
"Width"
};

char *MGCP3_attr_types[] = {
"Real",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Real",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"String",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Real",
"Short Integer",
"Integer",
"Integer",
"Integer",
"Integer",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Integer",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"Short Integer",
"Short Integer",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"Real",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"Short Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"Short Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real",
"Real",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Real"
};

char *MGCP3_attr_defns[] = {
"The difference between the recorded horizontal coordinates of a feature and its true position referenced to the same geodetic datum expressed as a circular error at 90 percent probability. ( It may also be applied to a data set. If the data contains multiple accuracies, usually the worst accuracy which applies to 10% or more of the data is recorded. )",
"The method by which the absolute horizontal accuracy was derived.",
"The difference between the recorded elevation of a feature and its true elevation referenced to the same vertical datum expressed as a linear error at 90 percent probability. ( It may also be applied to a data set. If the data contains multiple accuracies, usually the worst accuracy which applies to 10% or more of the data is recorded. )",
"The method by which the absolute vertical accuracy was derived.",
"The type of accessibility of a feature.",
"The elevation of the highest point of an airport's usable runways measured from mean sea level.",
"The type of lighting or lighting system that is used to support aeronautical navigation.",
"The category of aeronautical route with which a waypoint or NAVAID is associated.",
"The type of a facility or building that is related to agricultural activities or functions.",
"An indication that an obstacle that constitutes a danger to air navigation is marked by a light or lights. ( See also Feature: 'Air Warning Light'. )",
"The type of an airfield based on the size and/or paving of its runways.",
"The angular distance in the horizontal plane measured from true north (0 degrees) clockwise to the major axis of the feature. ( If the feature is square, the axis 0 up to 90 degrees is recorded. If the feature is circular, 360 degrees is recorded. )",
"The type of an aqueduct based on its structure.",
"The area within the delineation of the feature.",
"A narrative or other textual description associated with a feature or data set.",
"The type(s) of service available at, or in the near vicinity of, a small craft facility.",
"The type of a bog or fen based on its morphology and/or dominant vegetation. ( A fen is similar to a bog but may have alkaline, neutral, or only slightly acid peaty soil whereas a bog is generally very acidic. In both cases the vegetation is usually dominated by peat mosses, ericaceous shrubs, and sedges. )",
"The function or configuration of a branch railway.",
"The type of structure or mechanism by which a bridge or bridge span is moved to allow passage of a vessel.",
"The type(s) of structural design of a bridge, bridge span, or bridge superstructure.",
"The transmission frequency of a radio communications device (for example: a television station or a radiobeacon).",
"A general evaluation of the density of a built-up area, as a category.",
"The principal by-product(s) of a production, mining, or agricultural activity. ( If multiple by-products are specified then they are usually listed in descending order of importance. )",
"The type of a cable based on its use.",
"The type of a cableway based on structure and/or function.",
"The fraction of canopy cover within a defined area during the season of maximum foliage. ( The canopy is formed by the upper branches of the trees in a forest forming a more or less continuous layer. )",
"A grammalogue, index number, order or classification identifier or code that is used to denote a feature.",
"A description of any commercial (or similar) copyright notice applicable to information regarding the feature or data set. ( For example, 'copyright 2000 Space Imaging, Inc.', in which case the copyright information for use of such imagery needs to be stated; this generally includes restrictions on use and distribution. For non copyright data, for example 'Copyright 2004 by the National Geospatial-Intelligence Agency, U.S. Government. No domestic copyright claimed under Title 17 U.S.C. All rights reserved.' )",
"A description of any commercial (or similar) restrictions on the distribution of information regarding the feature or data set. ( For example, 'Distribution and use restricted to DoD/Title 50 and Coalition Forces.' Some commercial data is copyrighted. A copyright is 'the exclusive legal right to reproduce, publish, and sell the matter and form.' 1) The foundation of the copyright is US law and international treaties. A [distribution] license (a.k.a. License Agreement) is the 'official or legal permission to do or own a specific thing.' 2) The licenses are part of (for example) the NGA contracts with the commercial data providers. The license delineates what the user may or may not do with the commercial product. )",
"The type of a facility or building that is used for commercial purposes.",
"The type of a facility, building, or structure that supports the processing and/or control of communication signals.",
"The state of planning, construction, repair, and/or maintenance of the structures and/or equipment comprising a facility and/or located at a site, as a whole.",
"An indication that a facility is controlled. ( For example, maritime traffic control. )",
"The controlling authority responsible for a facility or site. ( Controlling authorities may be distinguished by organizational level (for example: national, sub-national, or military district) and/or type (for example: private or public). )",
"The type of a facility or building that is used to incarcerate prisoners serving terms of punishment detention, awaiting trial or other judiciary proceedings or awaiting further processing by authorities (for example: illegal immigrants awaiting deportati",
"The extent and/or nature of the cover (for example: a roof) of a structure.",
"An indication that a watercourse section is completely covered over and connects to uncovered watercourses at each end.",
"The type of mobility of a crane.",
"The type of a crane based on its design and/or method of operation.",
"The predominant species of a crop land.",
"The type of a facility or building that is used for cultural activities.",
"The total cumulative length of track contained within the confines of the feature, exclusive of the branch or main trunk lines running into and/or out of the feature.",
"The type of slope of the upstream face of a dam.",
"An indication that the delineation (for example: limits and information) of a feature is known.",
"The type of a facility or building that is used as a permanent or long term human dwelling.",
"The type of a facility or building that supports educational activities or functions.",
"The type of an embankment based on its use and/or relationship to the surrounding terrain.",
"The type of an extraction mine.",
"The status of operation of a facility, as a whole.",
"The agricultural practice(s) in use within an agro-ecosystem.",
"The general arrangement(s) and/or pattern(s) of farming fields.",
"The number of features of the same type within a defined region. ( May be used to indicate the number of features actually present in near proximity to each other although only one representative feature is collected. For example, the number of adjacent pipelines. )",
"The type of a fence based on the type of materials used in its construction.",
"The length of a route in a body of water where a ferry crosses from one shoreline to another.",
"The predominant foliage type of the vegetation.",
"The general categories of function or use that a facility, site, or region serves or may serve. ( May be so designated by legal means (for example: statute, zoning, or treaty) or be the unplanned consequence of economic forces. )",
"The type of a facility or building that is normally associated with the act of governing, or closely related activities.",
"The primary function(s) of harbour facilities that are associated with a service or commercial operation of public interest.",
"The vertical distance measured from the lowest point of the base of the feature at ground or water level (downhill/downstream side) to the tallest point of the feature. ( For non-inland water bodies, the water level is usually understood to be Mean Sea Level (MSL). Note that the feature may be supported above the surface by another feature (for example: a tower supported by a building) and as a consequence the value of the Height Above Surface Level is different (larger) than the base-to-top height of the feature (for example: supported tower) itself. )",
"The type of facility or building that is associated with a freestanding helipad.",
"A general evaluation of the horizontal accuracy of the geographic position of a feature, as a category.",
"The distance available to pass a load that extends laterally beyond the wheels of a vehicle.",
"The type of a house of worship based on its use, structure and/or religious denomination served.",
"The degree of persistence of water in an inland water body (for example: a spring, a flowing stream, a lake or a pond). ( Inland water bodies may also include, for example, crevices, ditches, fountains, and water troughs. )",
"The International Civil Aviation Organization location identifier as designated in ICAO document 7910.",
"The method used to supply crops with water.",
"An indication that a feature (for example: a structure) is in the open by itself, isolated from other features of a similar type, and thus is visually distinct from surrounding features when viewed from a distance.",
"An indication that a communication line is in the open by itself and is therefore isolated from other features. ( A communication line that is not isolated is located in the midst of other features. )",
"The physical characteristics of the shoreline of the left bank of a watercourse.",
"The fraction of vegetation cover on the left bank (facing downstream) of a watercourse.",
"The length of a feature taken along its primary alignment and generally in the horizontal plane. ( The primary alignment of a feature is its established direction of flow or use (for example: a road, a power line, a river, a rapid, and/or a bridge). A feature-specific rule may apply. In the case of a bridge, the length is the distance between the bridge abutments along the bridge centreline. In the case of a dam, the length is the distance along the dam crest. If no established direction of flow or use exists then (1) if the feature is irregular in shape its length is its greatest horizontal dimension (see Attribute: 'Greatest Horizontal Extent'), else (2) if the feature is regular in shape then a shape-specific rule may apply: for a rectangular feature, the length of the longer axis; for a round feature, the diameter. )",
"The arrangement of parallel linear features on a single support structure including both directions (if applicable). ( For example, two railways sharing a single roadbed. )",
"The dynamic live load weight-bearing capacity of a bridge or bridge span for one-way, wheeled vehicle traffic in MLC units. ( Military load classification values are calculated in part from the size, cross-sectional shape, and material of the stringers under the bridge span; they are similar to, but not the same as, short tons. See STANAGs 2021 and 2253 for the method of calculation. )",
"The dynamic live load weight-bearing capacity of a bridge or bridge span for two-way, wheeled vehicle traffic in MLC units. ( Military load classification values are calculated in part from the size, cross-sectional shape, and material of the stringers under the bridge span; they are similar to, but not the same as, short tons. See STANAGs 2021 and 2253 for the method of calculation. )",
"The dynamic live load weight-bearing capacity of a bridge or bridge span for one-way, tracked vehicle traffic in MLC units. ( Military load classification values are calculated in part from the size, cross-sectional shape, and material of the stringers under the bridge span; they are similar to, but not the same as, short tons. See STANAGs 2021 and 2253 for the method of calculation. )",
"The dynamic live load weight-bearing capacity of a bridge or bridge span for two-way, tracked vehicle traffic in MLC units ( Military load classification values are calculated in part from the size, cross-sectional shape, and material of the stringers under the bridge span; they are similar to, but not the same as, short tons. See STANAGs 2021 and 2253 for the method of calculation. )",
"The physical surface composition of a terrain surface that is intended to bear loads. ( For example, the surface of a road, a runway, a hard standing, or a vehicle storage lot. )",
"The location of an object in relation to a land water boundary.",
"A unique identifier for each instance of MGCP Feature assigned by national system in accordance with ISO /IEC 9834-8 standard.The UUID shall be represented by a string of hexadecimal digits, using two hexadecimal digits for each octet of the binary form",
"An indication that a feature is man-made.",
"The type of a facility or building that is used for manufacturing purposes.",
"The type(s) of activities of significance to navigation and/or operation that takes place at a maritime station.",
"The maximum distance from the bottom to the top of a terrain (or waterbody floor) obstacle. ( May be a height or a depth. )",
"The greatest distance between the travelled way and any obstruction vertically above it.",
"An indication that the lanes or tracks of a divided land transportation route (for example: a road or a railway) are separated by a vertical median barrier. ( Often used to separate opposing flows of traffic in order to improve safety. For example, may be a substantial concrete barrier of approximately 1 metre height. )",
"The type of a facility or building that is used for military purposes.",
"An indication that a bridge span moves in some manner to allow passage underneath.",
"A textual identifier or code that is used to denote a feature.",
"The unique name identifier element in the NGA Geographic Names Data Base (GNDB). ( Typically used together with Attribute: 'Named Feature Identifier' to provide a unique index into the NGA Geographic Names Data Base (GNDB) from which NGA draws all of its feature name information. )",
"The unique named feature identifier element in the NGA Geographic Names Data Base (GNDB). ( Typically used together with Attribute: 'Name Identifier' to provide a unique index into the NGA Geographic Names Data Base (GNDB) from which NGA draws all of its feature name information. )",
"Information about the navigability of a body of water by ocean-going and/or large vessels. ( Navigability is not intended to include jet skis, motorboats or other recreational craft. )",
"An indication that a feature may serve as a navigation landmark, allowing for rapid and positive orientation of a navigator. ( Its size, shape, and/or location make it prominent in relation to its surroundings, and it is therefore easily recognized from the surface and/or from the air. )",
"The type(s) of equipment or system used in electronic navigation.",
"The type of an offshore platform based on its structure and/or use(s).",
"The vertical distance measured from the lowest point at ground or water level to the highest portion of the bridge (including superstructure).",
"The total number of nominally parallel lines within the feature.",
"A general description of the surface quality of a paved surface.",
"An indication that a feature is permanent. ( Temporary features last, or are meant to last, for a limited time only. )",
"The maximum voltage at which a power line is designed to operate.",
"The type of suspension of a power line between adjacent pylons based on shape and/or support structure.",
"The type of a electrical power plant based on its energy source.",
"The predominant height (the height of at least 50 percent) of the feature.",
"The principal product(s) resulting from a production, mining, or agricultural activity. ( If multiple products are specified then they are usually listed in descending order of importance. )",
"The type of a facility or building that is used for accommodating the public but not as a permanent or long term dwelling.",
"The type of a facility or building that is used to provide service(s) to the general population. ( The service(s) may be associated with a government or private entity but are not normally associated with the act of governing. )",
"The physical mounting and/or configuration of a radar antenna.",
"The distance between a single pair of rails of a railway, measured along the shortest distance from inside rail to inside rail.",
"The classification of a railway based on the distance between a single pair of rails, measured along the shortest distance from inside rail to inside rail.",
"The method by which electrical power is distributed on a railway, if any.",
"The use(s) to which a railway is put as part of a transportation system.",
"An indication that a railway track is located within the bounds of a roadbed. ( For example, an infrequently used railway spur in a roadway or a carline running (regularly) in a roadway. )",
"The relative importance of an object. ( For example, as an ordinal rank. )",
"A designation denoting a religion or system of belief.",
"The type of a facility or building that is used for conducting religious services or providing a place of worship.",
"The type of a facility or building that supports research and/or observation activities or functions.",
"The date and, optionally, time of collection of the data set that was used to review and/or update the digital representation of the feature or data set. ( Midnight is understood to be 00:00:00 (the beginning of a day); when the time is not specified then midnight in the local time zone is typically implied. )",
"A description of the data set that was used to review and/or update the digital representation of the feature or data set.",
"The type(s) of the data set(s) that were used to review and/or update the digital representation of the feature or data set. ( For example, based on a data product specification. )",
"The physical characteristics of the shoreline of the right bank of a watercourse.",
"The fraction of vegetation cover on the right bank (facing downstream) of a watercourse.",
"The type of physical arrangement of a road interchange.",
"The type of weather conditions under which a road is usable.",
"The structure of a signficiant outcropping of exposed rock.",
"The configuration(s) and/or appearance(s) of a roof.",
"The official designation assigned to a route. ( For example, 'I-95', 'A-1', 'E-6', or 'M-5'. )",
"The minimum width of the travelled way of a route. ( Excludes pavements and shoulders. )",
"The characteristic alignment of a sand dune imposed by prevailing winds. ( Normally, the angular distance measured from true north (0 degrees) clockwise to the direction of the dune crests. )",
"The type of a sand dune based on its shape and/or structure.",
"The type of a facility or building that is used for security and crowd control.",
"The classification of the slope of a shaft of an underground feature (for example: an extraction mine).",
"The type of use of a shed.",
"The type of a shoreline construction (for example: a pier, a wharf, or a quay). ( May be used as a means of subtyping Feature: 'Shoreline Construction'. )",
"The physical characteristics of a shoreline.",
"An indication that a marine construction (for example: a pier, wharf, or quay) is solid, thereby blocking the free circulation of water underneath the construction. ( The construction may be of concrete, masonry, wood, and/or other building materials. Open pile construction is used where the benefits of protection from currents and waves is not required. )",
"The tidal datum to which soundings and drying heights are referenced. ( It is usually taken to correspond to a low water stage of the tide. )",
"The date and, optionally, time of collection of the data set that was used to define the digital representation of the feature or data set. ( Midnight is understood to be 00:00:00 (the beginning of a day); when the time is not specified then midnight in the local time zone is typically implied. )",
"A description of the data set that was used to define the digital representation of the feature or data set.",
"The type(s) of the data set(s) that were used to define the digital representation of the feature or data set. ( For example, based on a data product specification. )",
"The number of spans in a bridge.",
"The geometric form, appearance, and/or configuration of the feature as a whole.",
"The surface material composition of a feature, excluding its internal (structural) composition. ( Usually determined by remotely sensed characteristics, for example radar return. Generally, the very thin layer that interacts with electro-optical wavelengths. )",
"The type of an aircraft taxiway based on its connectivity to other aerodrome ground surfaces.",
"The class of a thoroughfare based on its importance in the general transportation network.",
"An indication that a waterbody is affected by the tide.",
"A touristic identifier or code that is used to denote a feature. ( Used in addition to a geographic name. )",
"The general shape and/or structure of a tower.",
"The type of a tower based on its intended use(s).",
"The total number of independent, parallel paths (for example: a railway track and/or a road lane) in both directions within a route.",
"The type of a facility or building that is used for transportation purposes.",
"The type of a transportation system based on the type(s) of vehicles employed and/or the nature(s) of the objects transported.",
"An indication that information is known about the height to which a marine feature may be uncovered by the tide.",
"The fraction of land within a defined area that is covered by undergrowth (for example: scrub, brush, and/or bush).",
"The interior length of a structure (for example: an aircraft bunker or a lock). ( The length is taken along the primary alignment of the structure. If the structure is irregular in shape the length is along its greatest horizontal dimension, else if the structure is regular in shape then a shape-specific rule may apply: for a rectangular structure, the length of the longer axis; for a round structure, the diameter. )",
"The type of a facility, building, or structure that is used for utility provision purposes. ( For example, services such as gas, electricity, water, or sewers. )",
"The type of a vegetated area based on species, biome, physiography and/or structural organization.",
"The predominant species of a tract of vegetation.",
"Identification code that uniquely identifies a feature that is a vertical obstruction to low-level flight.",
"The relationship between the feature and the underlying ground (terrain) or waterbody bottom.",
"The type of dataset and associated process that was used to define the digital representation of the vertical coordinate values of the feature or data set.",
"The classification by shape of a volcano.",
"The type of barrier that may be swung, drawn, or lowered to block an entrance or passageway on a watercourse.",
"The relationship between the feature and surrounding (including covering and/or underlying) water.",
"The type of available water based on its composition and/or fitness for human consumption.",
"An indication that an object is an overhead obstruction over a navigable waterbody.",
"The type of trough-like depression that is normally occupied by a watercourse.",
"The type of the sink of a watercourse.",
"The type of a weapons range based on its intended use(s).",
"The type of a well, generally based on method of construction.",
"The width of a feature taken perpendicular to its primary alignment and generally in the horizontal plane. ( The primary alignment of a feature is its established direction of flow or use (for example: a road, a power line right-of-way, a river, rapid, and/or a bridge). A feature-specific rule may apply. In the case of a bridge, the width is the distance perpendicular to the bridge centre-line and generally in the horizontal plane. In the case of a dam, the width is the distance perpendicular to (across the) the dam crest. If no such direction of flow or use exists then (1) if the feature is irregular in shape its width is taken perpendicular to the direction of its greatest horizontal dimension (see Attribute: 'Greatest Horizontal Extent'), else (2) if the feature is regular in shape then a shape-specific rule may apply: for a rectangular feature, the length of the shorter axis; for a round feature, the diameter. )"
};

int MGCP3_attr_lens[] = {
19,
6,
19,
6,
6,
19,
6,
6,
6,
6,
6,
19,
6,
19,
255,
6,
6,
6,
6,
6,
11,
6,
6,
6,
6,
19,
80,
255,
255,
6,
6,
6,
6,
6,
6,
6,
6,
6,
6,
6,
6,
19,
6,
6,
6,
6,
6,
6,
6,
6,
6,
6,
6,
19,
6,
6,
6,
6,
19,
6,
6,
19,
6,
6,
255,
6,
6,
6,
6,
19,
19,
6,
6,
6,
6,
6,
6,
6,
36,
6,
6,
6,
19,
19,
6,
6,
6,
80,
18,
18,
6,
6,
6,
6,
19,
6,
6,
6,
19,
6,
6,
19,
6,
6,
6,
6,
19,
6,
6,
6,
6,
6,
6,
6,
6,
20,
255,
6,
6,
19,
6,
6,
6,
6,
24,
19,
19,
6,
6,
6,
6,
6,
6,
6,
6,
20,
255,
6,
6,
6,
6,
6,
6,
6,
80,
6,
6,
6,
6,
6,
6,
19,
19,
6,
6,
6,
11,
6,
6,
6,
6,
6,
6,
6,
6,
6,
6,
6,
19
};

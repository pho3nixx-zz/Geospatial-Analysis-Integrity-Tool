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
int UFD3_ENUM_NUM=875;

char *UFD3_enum_codes[] = {
"0",
"1",
"2",
"3",
"997",
"ACA",
"ACS",
"AHA",
"ANA",
"ANS",
"APA",
"APS",
"AXB",
"AZD",
"AZE",
"AZF",
"BMD",
"CLD",
"CXB",
"EMC",
"EYC",
"EZD",
"EZG",
"EZM",
"EZZ",
"FZD",
"ACA",
"ACS",
"AHA",
"ANA",
"ANS",
"APA",
"APS",
"AXB",
"AZD",
"AZE",
"AZF",
"BMD",
"CLD",
"CXB",
"EMC",
"EYC",
"EZD",
"EZG",
"EZM",
"EZZ",
"FZD",
"0",
"9",
"14",
"997",
"999",
"0",
"1",
"3",
"999",
"0",
"3",
"4",
"0",
"1",
"2",
"3",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"10",
"11",
"12",
"13",
"14",
"15",
"16",
"17",
"18",
"19",
"20",
"21",
"22",
"23",
"24",
"25",
"26",
"27",
"28",
"29",
"30",
"31",
"33",
"34",
"35",
"36",
"37",
"38",
"40",
"51",
"52",
"53",
"54",
"55",
"56",
"57",
"58",
"59",
"61",
"62",
"63",
"64",
"65",
"66",
"67",
"68",
"69",
"70",
"71",
"72",
"73",
"74",
"75",
"76",
"77",
"78",
"79",
"82",
"83",
"84",
"85",
"86",
"87",
"88",
"89",
"90",
"91",
"92",
"93",
"94",
"95",
"96",
"97",
"99",
"100",
"101",
"102",
"103",
"104",
"105",
"106",
"107",
"109",
"110",
"111",
"112",
"113",
"115",
"116",
"117",
"118",
"119",
"120",
"121",
"122",
"123",
"124",
"125",
"126",
"127",
"128",
"129",
"130",
"131",
"132",
"133",
"140",
"150",
"151",
"723",
"999",
"0",
"4",
"10",
"11",
"12",
"13",
"14",
"999",
"0",
"1",
"2",
"3",
"5",
"6",
"7",
"8",
"9",
"12",
"15",
"16",
"17",
"26",
"27",
"28",
"997",
"999",
"0",
"1",
"2",
"997",
"0",
"1",
"2",
"3",
"4",
"997",
"998",
"1",
"2",
"997",
"0",
"1",
"2",
"3",
"997",
"0",
"1",
"0",
"1",
"2",
"0",
"5",
"6",
"7",
"8",
"10",
"27",
"28",
"30",
"31",
"32",
"45",
"46",
"59",
"62",
"66",
"997",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"0",
"2",
"3",
"11",
"12",
"0",
"1",
"2",
"997",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"999",
"0",
"1",
"3",
"4",
"8",
"999",
"0",
"1",
"2",
"3",
"5",
"6",
"999",
"0",
"1",
"2",
"0",
"1",
"2",
"0",
"2",
"3",
"4",
"5",
"6",
"7",
"9",
"11",
"14",
"15",
"16",
"20",
"21",
"997",
"998",
"0",
"3",
"6",
"8",
"0",
"10",
"26",
"53",
"72",
"999",
"0",
"1",
"2",
"997",
"0",
"1",
"2",
"4",
"8",
"15",
"17",
"22",
"23",
"24",
"25",
"40",
"997",
"998",
"999",
"0",
"2",
"5",
"7",
"8",
"9",
"14",
"20",
"21",
"30",
"46",
"52",
"55",
"57",
"62",
"64",
"65",
"72",
"77",
"83",
"84",
"88",
"96",
"104",
"107",
"108",
"117",
"997",
"999",
"0",
"1",
"2",
"0",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"997",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"10",
"11",
"12",
"13",
"14",
"15",
"17",
"999",
"0",
"2",
"3",
"7",
"8",
"11",
"12",
"13",
"15",
"16",
"33",
"997",
"999",
"0",
"1",
"2",
"Arc Digitized Raster Graphic (ADRG)",
"Automated Aeronautical Facilities Information File (AAFIF)",
"Boundaries (International Boundaries Database)",
"CHUM",
"City Graphic",
"Combat Chart",
"Compressed Arc Digitized Raster Graphic (CADRG)",
"Controlled Imagery Base 1 (CIB1)",
"Controlled Imagery Base 5 (CIB5)",
"Digital Globe",
"Digital Nautical Chart (DNC)",
"Digital Print File (DPF)",
"Digital Terrain Elevation Data 1 (DTED1)",
"Digital Terrain Elevation Data 2 (DTED2)",
"Digital Terrain Elevation Data 3 (DTED3)",
"Digital Terrain Elevation Data 4 (DTED4)",
"Digital Topographic Data 1 (DTOP1)",
"Digital Topographic Data 2 (DTOP2)",
"Digital Topographic Data 3 (DTOP3)",
"Digital Topographic Data 4 (DTOP4)",
"Digital Topographic Data 5 (DTOP5)",
"Digital Vertical Obstruction File (DVOF)",
"Foundation Feature Data (FFD)",
"Foundation Feature Data/Relocatable Target Data (FFD/RTAD)",
"GPS Field Collected Open Source",
"GeoCover/LandCover",
"GeoNames",
"Image City Map (ICM)",
"Imagery (IKONOS)",
"Imagery (NTM)",
"Imagery (Other)",
"Interim Terrain Data (ITD)",
"Interim Vector Data (IVD)",
"Joint Operational Graphic (JOG)",
"Landsat",
"Littoral Warfare Data (LWD)",
"Mapping Charting and Geodetic (MC&G)",
"Mission Specific Data 1 (MSD1)",
"Mission Specific Data 2 (MSD2)",
"Mission Specific Data 3 (MSD3)",
"Mission Specific Data 4 (MSD4)",
"Mission Specific Data 5 (MSD5)",
"Modernized Integrated Data Base (MIDB)",
"Multiple",
"NIMA GIS Medical Facilities Database",
"Native Data Source",
"Native Map Source",
"Nominally Attributed Topographic Evaluation Map (NATE Map)",
"Other",
"Planning Graphic",
"Reference Map",
"Shuttle Radar Topographic Mission (SRTM)",
"Site Map/Nuclear Facility",
"Tactical Oceanographic Data Lv 0 (TOD0)",
"Tactical Oceanographic Data Lv 1 (TOD1)",
"Tactical Oceanographic Data Lv 2 (TOD2)",
"Tactical Oceanographic Data Lv 4 (TOD4)",
"Tactical Oceanographic Data Lv 5 (TOD5)",
"Topographic Line Map (TLM)",
"United Nations Data",
"Unknown",
"Urban Vector Map (UVMap)",
"Vector Interim Terrain Data (VITD)",
"Vector Map Lv0 (VMap0)",
"Vector Map Lv1 (VMap1)",
"Vector Map Lv2 (VMap2)",
"World Vector Shoreline Plus (WVSPlus)",
"1",
"2",
"997",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"997",
"999",
"0",
"1",
"2",
"999",
"0",
"1",
"2",
"3",
"5",
"9",
"11",
"12",
"13",
"16",
"17",
"19",
"20",
"21",
"23",
"26",
"27",
"29",
"31",
"33",
"35",
"38",
"39",
"40",
"42",
"43",
"46",
"50",
"51",
"54",
"56",
"57",
"59",
"60",
"64",
"67",
"71",
"72",
"74",
"80",
"82",
"84",
"85",
"87",
"88",
"89",
"95",
"100",
"101",
"103",
"107",
"108",
"109",
"110",
"112",
"113",
"116",
"117",
"118",
"119",
"120",
"121",
"122",
"123",
"124",
"125",
"126",
"127",
"128",
"129",
"130",
"131",
"133",
"134",
"135",
"137",
"996",
"997",
"998",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"999",
"0",
"1",
"2",
"3",
"997",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"10",
"997",
"999",
"0",
"1",
"3",
"4",
"999",
"0",
"2",
"3",
"8",
"11",
"14",
"15",
"16",
"17",
"18",
"21",
"31",
"999",
"0",
"1",
"2",
"5",
"6",
"997",
"999",
"0",
"14",
"15",
"16",
"997",
"999",
"01",
"02",
"03",
"04",
"05",
"06",
"07",
"08",
"09",
"10",
"11",
"C",
"S",
"TS",
"U",
"D_IMGPOL",
"D_MIDB",
"D_NGA",
"D_OPNAV",
"I",
"M",
"O",
"0",
"20",
"21",
"62",
"64",
"72",
"108",
"117",
"999",
"1AA-TPC",
"1AB-ONC",
"1AE-JOG-A/G",
"1CD-DTED-1",
"1CE-DFAD-1",
"1CF-DTED-2",
"1CG-DFAD-2",
"2AA/001-HAC-1",
"2AA/002-HAC-2",
"2AA/003-HAC-3",
"2AA/004-HAC-4",
"2AA/005-HAC-5",
"2AA/006-HAC-6",
"2AA/007-HAC-7",
"2AA/008-HAC-8",
"2AA/009-HAC-9",
"2AD-Combat",
"3AA-TLM50",
"3AG-TLM100",
"3KA-VITD",
"3KC/001-DTOP",
"3KH-VMap-2",
"3KL-VMap-0",
"3KM-VMap-1",
"3KU-UVMap",
"4AA-ATC",
"4AC-JOG-R",
"4GE-TERCOM-L",
"4GF-TERCOM-E",
"4GG-TERCOM-T",
"5EE-FFD",
"7BC/302-BATHY",
"7BC/502-AERO",
"7SC/001-MPO-1",
"7SC/002-MPO-2",
"7SC/005-MPO-5",
"7SC/006-MPO-6",
"7SC/008-MPO-8",
"7SC/009-MPO-9",
"7SC/010-MPO-10",
"7SC/011-MPO-11",
"DNC",
"Mission Specific Data 1 (MSD1)",
"Mission Specific Data 2 (MSD2)",
"Mission Specific Data 3 (MSD3)",
"Mission Specific Data 4 (MSD4)",
"Mission Specific Data 5 (MSD5)",
"Other",
"UUU-DBCS",
"0",
"7",
"12",
"17",
"52",
"53",
"54",
"56",
"60",
"65",
"66",
"71",
"77",
"79",
"80",
"83",
"84",
"88",
"109",
"999",
"0",
"6",
"38",
"40",
"41",
"42",
"47",
"50",
"51",
"55",
"64",
"77",
"78",
"79",
"80",
"997",
"999",
"0",
"1",
"2",
"1",
"2",
"3",
"997",
"0",
"1",
"3",
"4",
"6",
"7",
"14",
"17",
"35",
"36",
"37",
"38",
"39",
"40",
"41",
"42",
"997",
"999",
"0",
"4",
"5",
"6",
"8",
"20",
"21",
"22",
"23",
"50",
"155",
"158",
"999",
"0",
"4",
"5",
"6",
"8",
"13",
"16",
"20",
"22",
"23",
"25",
"33",
"37",
"48",
"49",
"50",
"69",
"113",
"136",
"140",
"161",
"990",
"999",
"0",
"1",
"4",
"5",
"8",
"9",
"11",
"12",
"16",
"17",
"18",
"19",
"24",
"25",
"29",
"38",
"50",
"52",
"56",
"57",
"997",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"997",
"998",
"0",
"1",
"2",
"0",
"1",
"2",
"3",
"997",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"7",
"999",
"2D data",
"DTED1 derived",
"DTED2 derived",
"Other",
"Reflective surface derived",
"Stereo derived",
"TIN derived",
"Unknown"
};

char *UFD3_enum_names[] = {
"Unknown",
"Accurate",
"Approximate",
"Doubtful",
"Unpopulated",
"Geodetic Survey Control - adequate sample",
"Geodetic Survey Control - small sample",
"Photogrammetric (old stats, unable to convert to ANA due to significant bias)",
"Photogrammetric Control (GDASII) - adequate sample",
"Photogrammetric Control (GDASII) - small sample",
"Photogrammetric Control (IEC, FPE, NPF) - adequate sample",
"Photogrammetric Control (IEC, FPE, NPF) - small sample",
"Extrapolation",
"Unable to perform metric evaluation, other than EZM, EZG, AZF, and AZE (assumed adequate)",
"Insufficient control presently available to perform metric evaluation (assumed adequate)",
"Insufficient identifiable map features for metric evaluation (assumed adequate)",
"Error Budget Evaluation (Production Data)",
"Accuracy evaluation printed on the sheet or evaluation derived from source accuracy",
"Results from a large sampling of post-production evaluations that are similar in compilation or specification",
"Product specification accuracy value (assumed adequate)",
"Very old evaluation of unknown origin",
"Estimate based on analyst familiarity",
"Insufficient graticule for metric evaluation (assumed limited)",
"Scale too small (<1:300,000) to perform metric evaluation on GDAS systems (assumed adequate)",
"Digital Product, no evaluation method available",
"Evaluation deferred (no measurement)",
"Geodetic Survey Control - adequate sample",
"Geodetic Survey Control - small sample",
"Photogrammetric (old stats, unable to convert to ANA due to significant bias)",
"Photogrammetric Control (GDASII) - adequate sample",
"Photogrammetric Control (GDASII) - small sample",
"Photogrammetric Control (IEC, FPE, NPF) - adequate sample",
"Photogrammetric Control (IEC, FPE, NPF) - small sample",
"Extrapolation",
"Unable to perform metric evaluation, other than EZM, EZG, AZF, and AZE (assumed adequate)",
"Insufficient control presently available to perform metric evaluation (assumed adequate)",
"Insufficient identifiable map features for metric evaluation (assumed adequate)",
"Error Budget Evaluation (Production Data)",
"Accuracy evaluation printed on the sheet or evaluation derived from source accuracy",
"Results from a large sampling of post-production evaluations that are similar in compilation or specification",
"Product specification accuracy value (assumed adequate)",
"Very old evaluation of unknown origin",
"Estimate based on analyst familiarity",
"Insufficient graticule for metric evaluation (assumed limited)",
"Scale too small (<1:300,000) to perform metric evaluation on GDAS systems (assumed adequate)",
"Digital Product, no evaluation method available",
"Evaluation deferred (no measurement)",
"Unknown",
"Heliport",
"Airport/Airfield",
"Unpopulated",
"Other",
"Unknown",
"Qanat/Kanat/Karez Shaft",
"Underground Aqueduct",
"Other",
"Unknown",
"Lit",
"Unlit",
"Unknown",
"Easy ",
"Difficult ",
"Impossible",
"Unknown",
"Fabrication Structures",
"Government Building",
"Capitol Building",
"Castle",
"Government Administration Building",
"Hospital",
"House of Worship",
"Military Administration/Operations Building",
"Museum",
"Observatory",
"Palace",
"Police Station",
"Prison",
"Ranger Station",
"School",
"House",
"Multi Unit Dwelling",
"Cemetery Building",
"Farm Building",
"Greenhouse",
"Garage",
"Watermill/Gristmill",
"Wind Tunnel",
"Warehouse",
"Roundhouse",
"Railroad Storage/Repair Facility",
"Depot Terminal",
"Administration Building",
"Aircraft Maintenance Shop",
"Hangar",
"Customs House",
"Health Office",
"Firing Range",
"Post Office",
"Barracks/Dormitory",
"Fire Station",
"Jail",
"Telephone Switching Station",
"Market",
"Town Hall",
"Bank",
"Service/Refueling Station",
"Yacht Club/Sailing Club",
"Public Inn",
"Restaurant",
"Observation",
"Research and Development Lab/Research Facility",
"Courthouse",
"Legation",
"Mission",
"Chancery",
"Ambassadorial Residence",
"Embassy",
"Consulate",
"Guard House",
"Guard Shack/Guard Room",
"Kennel",
"Oil Mill (Vegetable)",
"Aerator",
"Carpentry",
"Sawmill",
"Kiln/Oven",
"Signal Box/Railway Signalman's House",
"Harbor Master's Office",
"Marine Police",
"Rescue",
"Lighthouse",
"Power Generation",
"Filtration Plant",
"Newspaper Plant",
"Telephone Exchange (Main)",
"Auditorium",
"Opera House",
"Processing/Treatment",
"Pumphouse",
"Mobile Home",
"Weather Station",
"Dependents Housing/Bivouac Area",
"Railroad Station",
"Hotel",
"Diplomatic Building",
"Trading Post",
"Battery",
"Medical Center",
"Municipal Hall",
"Oil/Gas Facilities Building",
"Outbuilding",
"Paper/Pulp Mill",
"Reformatory",
"Sanitarium",
"Satellite Tracking Station",
"Senior Citizen's Home",
"Shipyard",
"Sportsplex",
"Steel Mill",
"Weigh Scale (Highway)",
"Hostel",
"Factory",
"Motel",
"Community Center",
"City Hall",
"Automobile Plant",
"Armory",
"Shopping Center",
"Correctional Institute",
"Repair Facility",
"Barn/Machinery Shed",
"Astronomical Station",
"Theater",
"Library",
"Airport Terminal",
"Bus Station",
"Pilot Office",
"Pilot Look-out",
"Commercial building",
"Non-Governmental building of Significance (other than government).",
"Barracks",
"Dormitory",
"Combined Fire and Police Station",
"Other",
"Unknown",
"Draw/Bascule",
"Swing",
"Lift",
"Retractable",
"Not Applicable",
"Submersible",
"Other",
"Unknown",
"Arch (assume open spandrel)",
"Cantilever",
"Deck",
"Floating Bridge/Pontoon",
"Girder",
"Tower Suspension",
"Truss",
"Suspension",
"Transporter",
"Slab",
"Stringer (beam)",
"Arch Suspension",
"Arch (closed spandrel)",
"Cable Stayed",
"Viaduct",
"Unpopulated",
"Other",
"Unknown",
"Moveable Span",
"Fixed Span",
"Unpopulated",
"Unknown",
"Open (<=5%)",
"Sparse (>5%<=15%)",
"Medium (>15%<=50%)",
"Dense (>50%)",
"Unpopulated",
"Not Applicable",
"Limits and Information Known",
"Limits and Information Unknown",
"Unpopulated",
"Unknown",
"Definite",
"Doubtful",
"Reported",
"Unpopulated",
"Not Complete",
"Complete",
"Unknown",
"Accurate",
"Approximate",
"Unknown",
"Under Construction",
"Abandoned/Disused",
"Destroyed",
"Dismantled",
"Proposed",
"Closed/Locked",
"Operational",
"Not Isolated",
"Isolated",
"Navigable",
"Natural",
"Man-Made",
"Not Usable",
"Partially Destroyed",
"Damaged",
"Unpopulated",
"Other",
"Unknown",
"C - Concrete",
"L - Concrete and Steel",
"D - Concrete and Wood",
"M - Masonry",
"N - Masonry and Steel",
"R - Masonry and Wood",
"S - Steel",
"T - Steel and Wood",
"W - Wood",
"Unknown",
"Multiple",
"Single",
"Double",
"Juxtaposition",
"Unknown",
"With cables/chains",
"Without cables/chains",
"Unpopulated",
"Unknown",
"Rifle/Small Arms",
"Tank",
"Artillery",
"Grenade",
"Demolition Area",
"Impact Area",
"Other",
"Unknown",
"Slash & Burn - Shifting Cultivation",
"Terraced",
"Ditch Irrigation",
"Crop Rotation",
"Other",
"Unknown",
"Metal",
"Wood",
"Stone",
"Barbed Wire",
"Chain Link",
"Other",
"Unknown",
"Light Fabrication",
"Heavy Fabrication",
"Unknown",
"Guyed",
"Unguyed",
"Unknown",
"Cathedral",
"Chapel",
"Church",
"Marabout",
"Minaret",
"Monastery",
"Mosque",
"Pagoda",
"Shrine",
"Tabernacle",
"Temple",
"Synagogue",
"Stupa",
"Unpopulated",
"Not Applicable",
"Unknown",
"Dry",
"Non-Perennial/Intermittent/Fluctuating",
"Perennial/Permanent",
"Unknown",
"Rotating Beacon",
"Strobe",
"Beacon",
"Identification Beacon",
"Other",
"Unknown",
"Landmark",
"Not a landmark",
"Unpopulated",
"Unknown",
"Above Surface/Does not Cover (Height Known)",
"Awash at Chart Datum",
"Below Water Surface",
"On Ground Surface",
"On Water Surface/Floating",
"Sunken/On sea bottom",
"Off Shore",
"Below Sea Bottom",
"Suspended or Elevated above sea bottom",
"Suspended or Elevated Above Ground or Water Surface",
"Underground",
"Unpopulated",
"Not Applicable",
"Other",
"Unknown",
"Aluminum",
"Asphalt",
"Bedrock",
"Boulders",
"Brick",
"Cinders",
"Composition",
"Concrete",
"Earthen",
"Gravel",
"Lava",
"Loess",
"Macadam",
"Masonry (Brick/Stone)",
"Metal",
"Mud",
"Part Metal",
"Prestressed Concrete",
"Reinforced Concrete",
"Rock/Rocky",
"Sand",
"Shells",
"Soil",
"Steel",
"Stone",
"Wood",
"Unpopulated",
"Other",
"Unknown",
"With Median",
"Without Median",
"Unknown",
"Horizontal Shaft",
"Open Pit",
"Placer",
"Prospect",
"Strip",
"Vertical Shaft",
"Peat Cuttings",
"Below Surface Mine",
"Unpopulated",
"Unknown",
"ABM",
"ICBM",
"IRBM",
"SA1",
"SA2",
"SA3",
"SA4",
"SA5",
"SA6",
"SA7",
"SA8",
"SA9",
"MRBM",
"SSM",
"SAM",
"Sa10",
"Other",
"Unknown",
"CONSOL",
"DECCA",
"Long Range Air Navigation System (LORAN)",
"OMEGA",
"Radar",
"Radio",
"Radio Telephone",
"TV",
"Microwave",
"Radio Telegraph",
"Unpopulated",
"Other",
"Unknown",
"Restricted",
"Unlimited",
"Arc Digitized Raster Graphic (ADRG)",
"Automated Aeronautical Facilities Information File (AAFIF)",
"Boundaries (International Boundaries Database)",
"CHUM",
"City Graphic",
"Combat Chart",
"Compressed Arc Digitized Raster Graphic (CADRG)",
"Controlled Imagery Base 1 (CIB1)",
"Controlled Imagery Base 5 (CIB5)",
"Digital Globe",
"Digital Nautical Chart (DNC)",
"Digital Print File (DPF)",
"Digital Terrain Elevation Data 1 (DTED1)",
"Digital Terrain Elevation Data 2 (DTED2)",
"Digital Terrain Elevation Data 3 (DTED3)",
"Digital Terrain Elevation Data 4 (DTED4)",
"Digital Topographic Data 1 (DTOP1)",
"Digital Topographic Data 2 (DTOP2)",
"Digital Topographic Data 3 (DTOP3)",
"Digital Topographic Data 4 (DTOP4)",
"Digital Topographic Data 5 (DTOP5)",
"Digital Vertical Obstruction File (DVOF)",
"Foundation Feature Data (FFD)",
"Foundation Feature Data/Relocatable Target Data (FFD/RTAD)",
"GPS Field Collected Open Source",
"GeoCover/LandCover",
"GeoNames",
"Image City Map (ICM)",
"Imagery (IKONOS)",
"Imagery (NTM)",
"Imagery (Other)",
"Interim Terrain Data (ITD)",
"Interim Vector Data (IVD)",
"Joint Operational Graphic (JOG)",
"Landsat",
"Littoral Warfare Data (LWD)",
"Mapping Charting and Geodetic (MC&G)",
"Mission Specific Data 1 (MSD1)",
"Mission Specific Data 2 (MSD2)",
"Mission Specific Data 3 (MSD3)",
"Mission Specific Data 4 (MSD4)",
"Mission Specific Data 5 (MSD5)",
"Modernized Integrated Data Base (MIDB)",
"Multiple",
"NIMA GIS Medical Facilities Database",
"Native Data Source",
"Native Map Source",
"Nominally Attributed Topographic Evaluation Map (NATE Map)",
"Other",
"Planning Graphic",
"Reference Map",
"Shuttle Radar Topographic Mission (SRTM)",
"Site Map/Nuclear Facility",
"Tactical Oceanographic Data Lv 0 (TOD0)",
"Tactical Oceanographic Data Lv 1 (TOD1)",
"Tactical Oceanographic Data Lv 2 (TOD2)",
"Tactical Oceanographic Data Lv 4 (TOD4)",
"Tactical Oceanographic Data Lv 5 (TOD5)",
"Topographic Line Map (TLM)",
"United Nations Data",
"Unknown",
"Urban Vector Map (UVMap)",
"Vector Interim Terrain Data (VITD)",
"Vector Map Lv0 (VMap0)",
"Vector Map Lv1 (VMap1)",
"Vector Map Lv2 (VMap2)",
"World Vector Shoreline Plus (WVSPlus)",
"Feature crosses navigable water",
"Feature does not cross navigable water",
"Unpopulated",
"Unknown",
"Hydro-electric",
"Nuclear",
"Solar",
"Thermal",
"Wind",
"Tidal",
"Internal Combustion",
"Unpopulated",
"Other",
"Unknown",
"Permanent",
"Temporary",
"Other",
"Unknown",
"Aircraft",
"Aluminum",
"Ammunition",
"Asphalt",
"Brick",
"Cement",
"Chalk",
"Chemical",
"Clay",
"Coal",
"Coke",
"Composition",
"Concrete",
"Copper",
"Desalinated Water",
"Diamonds",
"Dolomite",
"Electric",
"Explosives",
"Food",
"Gas",
"Gasoline",
"Glass",
"Gold",
"Granite",
"Gravel",
"Heat",
"Iron",
"Lead",
"Lumber",
"Macadam",
"Manganese",
"Marble",
"Metal",
"Oil",
"Paper",
"Part Metal",
"Plastic",
"Quartz",
"Radioactive Material",
"Rock/Rocky",
"Rubber",
"Salt",
"Sand",
"Sandstone",
"Sewage",
"Silver",
"Slag",
"Snow/Ice",
"Steel",
"Stone",
"Sugar",
"Travertine",
"Uranium",
"Vegetation Products",
"Water",
"Wood",
"Zinc",
"Bauxite",
"Bananas",
"Cotton",
"Bamboo",
"Coffee",
"Common fruit and/or nuts",
"Palms",
"Palmetto",
"Tailings",
"Refuse",
"Tobacco",
"None",
"Personnel",
"Telecommunications",
"Fish",
"Textile",
"Automobiles and Trucks",
"Unpopulated",
"Not Applicable",
"Multiple",
"Other",
"Unknown",
"Buddhist",
"Muslem",
"Roman Catholic",
"Christian",
"Judaism",
"Greek Orthodox",
"Protestant",
"Shinto",
"Other",
"Unknown",
"Broad",
"Narrow",
"Normal (Country Specific)",
"Unpopulated",
"Unknown",
"Cloverleaf",
"Diamond",
"Fork",
"Rotary/Traffic Circle/Roundabout",
"Staggered Ramps",
"Standard Ramps",
"Symmetrical Ramps",
"Trumpet",
"Turban",
"Wye",
"Unpopulated",
"Other",
"Unknown",
"Electrified Track",
"Overhead Electrified",
"Non-electrified",
"Other",
"Unknown",
"Car-Line",
"Monorail",
"Logging",
"Rapid Transit Route - Rail",
"Tramway",
"Inclined Railway",
"Main Line",
"Branch Line",
"Main Line/Branch Line",
"Railroad in Road",
"Magnetic Levitation",
"Other",
"Unknown",
"Hard/Paved",
"Loose/Unpaved",
"Grass/Sod (Soft)",
"Natural",
"Unpopulated",
"Other",
"Unknown",
"Primary Route",
"Secondary Route",
"Limited Access Route (e.g. Motorway/Autobahn/Interstate)",
"Unpopulated",
"Other",
"COSMIC Top Secret-Bohemia",
"COSMIC Top Secret-Balk",
"NATO Secret",
"NATO Secret-Savate",
"NATO Secret-Avicula",
"NATO Confidential",
"NATO Restricted",
"NATO Unclassified",
"COSMIC Top Secret Atom",
"Secret Atomal",
"Confidential Atomal",
"Confidential",
"Secret",
"Top Secret",
"Unclassified",
"Classification Derived from Imagery Policy Series Classification Guide",
"Classification Derived from DoD MIDB Security Classification Guide",
"Classification Derived from NGA Security Classification Guide",
"Classification Derived from Op Nav Inst S5513.5B-24",
"Classified by Director, Central Intelligence",
"Classification Derived from Multiple Sources",
"Classified by some other means",
"Unknown",
"Composition",
"Concrete",
"Masonry (Brick/Stone)",
"Metal",
"Part Metal",
"Stone",
"Wood",
"Other",
"1AA-TPC",
"1AB-ONC",
"1AE-JOG-A/G",
"1CD-DTED-1",
"1CE-DFAD-1",
"1CF-DTED-2",
"1CG-DFAD-2",
"2AA/001-HAC-1",
"2AA/002-HAC-2",
"2AA/003-HAC-3",
"2AA/004-HAC-4",
"2AA/005-HAC-5",
"2AA/006-HAC-6",
"2AA/007-HAC-7",
"2AA/008-HAC-8",
"2AA/009-HAC-9",
"2AD-Combat",
"3AA-TLM50",
"3AG-TLM100",
"3KA-VITD",
"3KC/001-DTOP",
"3KH-VMap-2",
"3KL-VMap-0",
"3KM-VMap-1",
"3KU-UVMap",
"4AA-ATC",
"4AC-JOG-R",
"4GE-TERCOM-L",
"4GF-TERCOM-E",
"4GG-TERCOM-T",
"5EE-FFD",
"7BC/302-BATHY",
"7BC/502-AERO",
"7SC/001-MPO-1",
"7SC/002-MPO-2",
"7SC/005-MPO-5",
"7SC/006-MPO-6",
"7SC/008-MPO-8",
"7SC/009-MPO-9",
"7SC/010-MPO-10",
"7SC/011-MPO-11",
"DNC",
"Mission Specific Data 1 (MSD1)",
"Mission Specific Data 2 (MSD2)",
"Mission Specific Data 3 (MSD3)",
"Mission Specific Data 4 (MSD4)",
"Mission Specific Data 5 (MSD5)",
"Other",
"UUU-DBCS",
"Unknown",
"Cylindrical (Upright)/CAN",
"Pyramid",
"Spherical (Hemispherical)",
"A Frame",
"H Frame",
"I Frame",
"Y Frame",
"Mast",
"Cylindrical with flat top",
"Cylindrical with domed top",
"Cylindrical/Peaked",
"Arch",
"Round",
"Rectangular",
"Square",
"Irregular",
"Spherical with Column Support",
"Obelisk",
"Other",
"Unknown",
"Conical/Peaked/NUN",
"Curved/Round (Quonset)",
"Dome",
"Flat",
"Gable (Pitched)",
"Sawtooth",
"With Monitor",
"With Steeple",
"Flat with Monitor",
"Gable with Monitor",
"With Cupola",
"With Turret",
"With Tower",
"With Minaret",
"Unpopulated",
"Other",
"Unknown",
"Traversable",
"Non-Traversable",
"Deciduous",
"Evergreen",
"Mixed",
"Unpopulated",
"Unknown",
"Both Road and Railroad",
"Railroad",
"Road",
"Street",
"Through Route",
"Bus",
"Pedestrian",
"No Transport Use",
"Slip Road/Access Road",
"Portage",
"Canal",
"Caravan Route",
"Subway",
"Aqueduct",
"Both Road and Runway",
"Unpopulated",
"Other",
"Unknown",
"National",
"State",
"Private",
"Military",
"Closed",
"Restricted",
"Joint Military/Civilian",
"International",
"Limited",
"Prohibited Area",
"Reserved",
"Other",
"Unknown",
"National",
"State",
"Private",
"Military",
"Open",
"City",
"Closed",
"Joint Military/Civilian",
"International",
"Federal",
"Provincial",
"Interstate",
"Decoy",
"Civilian/Public",
"Limited",
"Levee/Dike",
"Regional",
"As a Fill",
"Medical",
"Roll-On Roll-Off Berth (RORO)",
"Unpopulated",
"Other",
"Unknown",
"Dry Crops",
"Rice Paddies",
"Agriculture with scattered forests or rows of trees",
"Pasture",
"Grassland with scattered trees",
"Casuarina",
"Coniferous",
"Nipa Palm",
"Palm",
"Filao",
"Mangrove",
"Deciduous",
"Evergreen",
"Eucalyptus",
"Cypress",
"Mixed Trees",
"Forest Clearing",
"Without Trees",
"Agriculture with scattered trees or rows of trees",
"Unpopulated",
"Other",
"Unknown",
">0 and <=5",
">5 and <=10",
">10 and <=20",
">20 and <=40",
">40",
"Unpopulated",
"Not Applicable",
"Unknown",
"Dissipating",
"Disappearing",
"Unknown",
"All Weather",
"Fair/Dry Weather",
"Winter Only",
"Unpopulated",
"Other",
"Unknown",
"Air Force",
"Army",
"Coast Guard",
"Marines",
"Navy",
"Joint",
"Other",
"2D data",
"DTED1 derived",
"DTED2 derived",
"Other",
"Reflective surface derived",
"Stereo derived",
"TIN derived",
"Unknown"
};

int UFD3_attr_enum_count[] = {
0,
21,
0,
21,
5,
0,
3,
5,
0,
0,
4,
8,
4,
18,
7,
121,
4,
3,
5,
7,
0,
0,
2,
0,
0,
0,
3,
18,
49,
3,
6,
5,
10,
0,
0,
7,
4,
8,
0,
0,
0,
3,
0,
0,
16,
4,
0,
4,
0,
0,
0,
6,
0,
0,
0,
0,
15,
29,
0,
3,
0,
10,
18,
0,
0,
0,
0,
13,
0,
0,
0,
0,
0,
67,
3,
0,
3,
4,
10,
0,
0,
8,
80,
13,
5,
5,
10,
0,
0,
0,
0,
0,
0,
13,
7,
6,
0,
15,
0,
0,
8,
20,
17,
9,
0,
0,
18,
3,
4,
0,
0,
67,
0,
23,
13,
0,
22,
0,
3,
6,
0,
0,
0,
0,
8
};

int UFD3_attr_enum_start[] = {
-1,
5,
-1,
26,
0,
-1,
56,
47,
-1,
-1,
52,
184,
210,
192,
214,
63,
59,
221,
224,
657,
-1,
-1,
229,
-1,
-1,
-1,
231,
234,
673,
292,
279,
262,
252,
-1,
-1,
285,
267,
271,
-1,
-1,
-1,
295,
-1,
-1,
298,
314,
-1,
324,
-1,
-1,
-1,
318,
-1,
-1,
-1,
-1,
328,
343,
-1,
372,
-1,
375,
385,
-1,
-1,
-1,
-1,
403,
-1,
-1,
-1,
-1,
-1,
419,
486,
-1,
416,
499,
489,
-1,
-1,
842,
503,
616,
593,
611,
583,
-1,
-1,
-1,
-1,
-1,
-1,
598,
629,
636,
-1,
642,
-1,
-1,
859,
722,
742,
664,
-1,
-1,
766,
759,
762,
-1,
-1,
419,
-1,
797,
784,
-1,
820,
-1,
850,
853,
-1,
-1,
-1,
-1,
867
};


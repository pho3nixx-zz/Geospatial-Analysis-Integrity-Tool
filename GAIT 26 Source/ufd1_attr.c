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
int UFD1_ATTR_NUM=130;

char *UFD1_attr_codes[] = {
"ACE",
"ACE_EVAL_METHOD_CD",
"ALE",
"ALE_EVAL_METHOD_CD",
"ACC",
"ORIGINATOR",
"APT",
"ZV3",
"AOO",
"ATC",
"BST",
"BOT",
"BSC",
"BUD",
"BFC",
"BAC",
"COD",
"COE",
"SEC_CLS_AUTHORITY",
"COMMENTS",
"COMM_CPYRT_NOTICE",
"COMPLETENESS_CODE",
"COF",
"COC",
"CRM",
"DFT",
"DMB",
"DMT",
"OHD",
"DOF",
"COMM_LIC_TIER_NOTICE",
"EBT",
"EXS",
"SPEC_ID",
"FTC",
"FCO",
"CREATION_DATE",
"SCALE",
"FTI",
"FRT",
"GTC",
"GAW",
"GFID",
"SGC",
"HGT",
"ZV2",
"HWT",
"HYC",
"HFC",
"IKO",
"LMC",
"LTN",
"LEN",
"LEG",
"LOC",
"MAC",
"MCC",
"MED",
"MWG",
"WD1",
"MINE",
"SEC_CLS_AUTH_MULT",
"NM3",
"NM4",
"NAM",
"NFN",
"NFI",
"NST",
"SEC_CLS_AUTH_DESC",
"OPERATOR",
"ORD",
"ORIG_SOURCE_DATE",
"ORIG_SOURCE_INFO",
"ORIGINATING_SOURCE",
"OHB",
"PRM",
"PPT",
"PPC",
"PFG",
"PHT",
"PRO",
"RRC",
"RGC",
"RRA",
"RSA",
"REL",
"RTP",
"RSTRN_FOREIGN_GOV",
"RSTRN_DECLASS",
"RSTRN_DCLS_XMPT_CD",
"RSTRN_DSEM_CTRL_IC",
"RSTRN_DSEM_CTRL_NIC",
"RSTRN_RELEASIBILITY",
"RIT",
"RST",
"RTT",
"RTN",
"SEC_CLASS",
"SEC_CLASS_SYS_ID",
"SEC_CD_CNTRL",
"YSU",
"SLT",
"SCC",
"SSC",
"SSR",
"SMC",
"TXT",
"TID",
"TTC",
"TRF",
"TST",
"TUC",
"TRA",
"TRE",
"UPDATE_SOURCE_DATE",
"UPDATE_SOURCE_INFO",
"UPDATE_SOURCE",
"USG",
"VEG",
"VDC",
"VDR",
"VRR",
"VCA",
"VCT",
"VOL",
"WTC",
"WFT",
"WID",
"WGP",
"Z_VALUE_TYPE"
};

char *UFD1_attr_names[] = {
"Absolute Circular Error",
"Absolute Circular Error Evaluation Method",
"Absolute Linear Error",
"Absolute Linear Error Evaluation Method",
"Accuracy Category",
"Agency that Supplied the Data",
"Airfield Type",
"Airfield/Aerodrome Elevation",
"Angle of Orientation",
"Aqueduct Type Category",
"Boundary Status Type",
"Bridge Opening Type",
"Bridge/Bridge Superstructure Category",
"Brush/Undergrowth Density Code",
"Building Function Category",
"Built-Up Area Classification",
"Certainty of Delineation",
"Certainty of Existence",
"Classification Authority",
"Comments",
"Commercial Copyright Notice",
"Completeness Code",
"Complex Outline Function",
"Conspicuous Category",
"Crane Mobility Type",
"Dam Face Type",
"Density Measure (Brush/Undergrowth)",
"Density Measurement",
"Derived Obstacle Height/Depth Category",
"Direction of Flow",
"Distribution of Commercial Data",
"Educational Building Type",
"Existence Category",
"Extraction Specification ID",
"Farming Type Category",
"Feature Configuration",
"Feature Creation Date",
"Feature Scale (e.g., 50000, 100000)",
"Fence Type Indicator",
"Firing Range Type",
"Gate Type Category",
"Gauge Width",
"Global Feature ID",
"Gradient/Slope",
"Height Above Surface Level",
"Highest Z-Value",
"House of Worship Type",
"Hydrological Category",
"Hydrological Form Category",
"ICAO Designator",
"Landmark Category",
"Lane/Track Number",
"Length/Diameter",
"Length/Diameter in Meters With Greater Precision",
"Location Category",
"Maritime Area Category",
"Material Composition Category",
"Median Category",
"Median Width with greater than 1 meter resolution",
"Minimum Traveled Way Width (decimeters)",
"Mining Category",
"Multiple Classification Authority Sources",
"Name 3 (name of the political entity on one side of a boundary).",
"Name 4 (name of the political entity on the other side of the boundary).",
"Name Category",
"Name Identifier",
"Named Feature Identifier",
"Navigation System Types",
"Non-standard Classification Authority",
"Operator ID",
"Ordinal Category",
"Originating Source Date",
"Originating Source Information",
"Originating Source Name",
"Overhead Height of Bridge",
"Permanency",
"Populated Place Type",
"Power Plant Category",
"Predominant Feature Height",
"Predominant Height",
"Product Category",
"Railroad Categories",
"Railroad Gauge Category",
"Railroad Power Source",
"Railroad Siding Attribute",
"Religious Denomination",
"Reservoir Type",
"Restrctions on Foreign Government Access",
"Restriction Declassification",
"Restriction Declassification Exemptions",
"Restrictions on Dissemination Control IC",
"Restrictions on Dissemination Control Non-IC",
"Restrictions on Releasibility",
"Road Interchange Type",
"Road/Runway Surface Type",
"Route Intended Use",
"Route Number",
"Security Classification",
"Security Classification System Identifier",
"Security Codeword Control",
"Service Branch",
"Shoreline Type Category",
"Spring/Well Characteristic Category",
"Structure Shape Category",
"Structure Shape of Roof",
"Surface Material Category",
"Text",
"Tidal/Non-Tidal Category",
"Tower Type Category",
"Traffic Flow",
"Transmission Suspension Type",
"Transportation Use Category",
"Traversability",
"Tree Type Category",
"Update/Review Source Date",
"Update/Review Source Information",
"Update/Review Source Name",
"Usage Category",
"Vegetation Characteristics",
"Vertical Datum Category",
"Vertical Datum Record",
"Vertical Reference Category",
"Void Collection Attribute",
"Void Collection Type",
"Volume",
"Weather Type Category",
"Well Feature Type",
"Width",
"Width with greater than 1 meter resolution",
"Z-Coordinate Type"
};

char *UFD1_attr_types[] = {
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"Integer",
"Integer",
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
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Short Integer",
"Short Integer",
"Integer",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Date",
"Long Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"String",
"Integer",
"Float",
"Float",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"Integer",
"Integer",
"Float",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Float",
"Integer",
"Short Integer",
"String",
"String",
"String",
"String",
"String",
"String",
"Short Integer",
"String",
"String",
"Short Integer",
"Date",
"String",
"Short Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Float",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"String",
"String",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
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
"Date",
"String",
"Short Integer",
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
"Integer",
"Float",
"Short Integer"
};

char *UFD1_attr_defns[] = {
"The absolute horizontal accuracy of the data's coordinates",
"The code that indicates the method by which the absolute circular error was derived.",
"The absolute vertical accuracy of the data's coordinates",
"The code that indicates the method by which the absolute linear error was derived.",
"Accuracy of geographic position.",
"This field is used to describe the organization or agency with which the originating author/creator of the data is associated.",
"Unique airfield type.",
"The highest point of an airport's usable runways measured in meters from mean sea level.",
"The angular distance measured from true north (0 deg) clockwise to the major axis of the feature. If the feature is square, the axis 0 through 89 deg shall be recorded. If the feature is circular, 360 deg shall be recorded.",
"Type of aqueduct.",
"Identifies the status of a boundary.",
"The type of structure or mechanism by which a portion of a bridge is moved to allow passage of a vessel.",
"Structural design characteristics.",
"Density of brush or undergrowth.",
"Type or purpose of the building.",
"The indication of the relative density of the Built-Up Area.",
"Indicates knowledge of the feature's limits or information.",
"Indicates knowledge of the feature's existence.",
"The code that represents the type of classification authority used to derive a classification for data.",
"An open text field for additional information.",
"This field is used when a data set includes commercial products or any other copyrighted data. Example: Copyright 2000 Space Imaging",
"Identifies if the extraction is 100% complete IAW the specification identified in the SPEC_ID attribute.",
"The primary functional use of the area covered by an AL045 Complex Outline feature.  (See use and attribute values below.)",
"A conspicuous object is easily identifiable and plainly visible under varying conditions of light from harbours, approach channels, or offshore because of its size, shape, or height.",
"Indicates the mobility of a crane type.  (See CRA.)",
"Type of face of a dam.",
"Actual percent (%) of ground covered by undergrowth.",
"Canopy cover measured by percent within area of feature during the summer season.",
"Categorized maximum height or depth of an obstacle feature, in meters, with delineated segment of area.",
"Bearing of movement or direction of the flow.",
"This field is used to identify the distribution of commercial or other restricted data.",
"Identifies the type of educational building.",
"The state or condition of the feature.",
"The particular specification that was used for the extraction process.",
"Type of field pattern or use.",
"Configuration of feature.",
"Calendar date/time when feature was created in the GIFD.",
"The scale to which a feature or feature set was collected.",
"Type of fence.",
"Type of firing range.",
"The classification of the type of barrier or gate.",
"The width of a single pair of rails, measured along the shortest distance from inside rail to inside rail.",
"No Definition Available",
"Percentage of slope.  (i.e. The change in height divided by the horizontal distance over which the change takes place, times one hundred ((h2-h1)/d)*100.)",
"Distance measured from the lowest point of the base at ground or water level (downhill side/downstream side) to the tallest point of the feature.",
"Elevation above a given datum to the highest portion of the feature.",
"Type of house of worship used.",
"Identifies the annual water content of the feature.",
"Form or configuration of the hydrological feature.",
"International Civil Aviation Organization location identifier as designated in ICAO document 7910.",
"Indicates whether a feature  is used for rapid and positive orientation when size, shape, or location make it prominent in relation to surroundings. Easily recognized from line of sight - ground or air.",
"The number of track(s) or lanes of the feature, including both directions.",
"Definition Is Not Available",
"A measurement of the longer of two linear axes in meters. For a square feature, measure either axis. For a round feature, measure the diameter. For a bridge, the length is the distance between the bridge abutments.",
"Status of  feature relative to surrounding area or water.",
"Area in which certain activities or factors of significance to navigation or operations apply.",
"Characteristics of primary material composition of feature.",
"Presence of a divider between multiple lanes/rails.",
"The measured distance at map scale between connecting, adjacent and two-way road centerlines having divided roadbeds.",
"Minimum width of the traveled way, excluding hard pavements and shoulders (in decimetres).",
"Definition Is Not Available",
"This field is used to describe the list of multiple individual sources used to derive a classification for data.",
"Name of the political entity on one side (relative to NM4) of a boundary line.",
"Name of the political entity on the other side (relative to NM3) of a boundary line.",
"Any identifier or code.",
"Textual identifier of a unique name associated with a feature within an external names database.  (See also NFI)",
"Textual identifier of a unique feature within an external names database.  (See also NFN)",
"Type of equipment or system used in electronic navigation (primary system).",
"This field is used to describe non-standard classification authority used to derive a classification for data.",
"ID of the operator that loaded the data or created the Extraction Record feature.",
"Indicator of relative importance of a feature",
"The date/time of the original source that was used for the extraction/ingest/creation of a feature.",
"Details about the originating source of the data.",
"The name of the ORIGINAL source of the data.",
"Vertical distance measured from the lowest point at ground or water level to the highest portion of bridge (including superstructure).",
"Indicates whether an object is temporary or permanent.  See EXS 11 and EXS 18.",
"The type of populated place.",
"Energy source used to generate power.",
"Predominant height within delineation of feature.",
"Height of 51% or more of the feature. If not obtainable, then the average height of the feature will be used.",
"Principal material involved or product resulting from activity at site.",
"The type of railroad system used to support various transportation uses.",
"The type of gauge used.",
"Source of electrical power for railroad.",
"Type of connecting track.",
"Name of religious order at site.",
"Indicates the method of containing the water in a reservoir.",
"Indicates foreign government information is included in U.S. controlled data.",
"The event upon which the declassification of the data occurs. A value of MR (Manual Review) signals that this data must be reviewed at such time that declassification is desired.",
"The code that indicates the reason that an object must remain classified beyond the 10 or 25 years automatic declassification.",
"This field is used when applicable to describe intelligence community dissemination and control of the data set or product.  This will need to reflect dissemination and control restrictions of the ORIGINATING_SOURCE.",
"This field is used when applicable to describe non-intelligence community dissemination and control of the data set or product. This will need to reflect dissemination and control restrictions of the ORIGINATING_SOURCE. This element may contain multiple dissemination control markings.",
"Denotes the countries or organizations that the data is releasable to. (This field is required when the source denotes country or organization releasability restrictions.)",
"The unique interchange design.",
"The physical surface composition of a road or runway.",
"Intended use of the route.",
"Official route number (I-95, M-2, A-1, etc.) assigned to the feature.",
"This field is used to describe the highest classification of the data. There MUST be one and only one classification for each feature or dataset.",
"The identifier that represents a particular SECURITY-CLASSIFICATION-SYSTEM.",
"This field is used to describe the SCI control system or systems applicable to the data set.",
"Identifies a specific military organization.",
"The physical characteristic of the shoreline area.",
"Type of available water.",
"Geometric form, appearance, or configuration of the feature.",
"Roof shape.",
"Surface material composition excluding internal structural material.",
"Narrative or other description.",
"Identifies whether a feature is affected by tidal water.",
"Appearance or configuration of the feature.",
"Encodes the general destination of traffic.",
"Types of suspension of power transmission lines between pylons.",
"Identifies the primary user, function, or authority of the transportation system.",
"Indicates whether the feature is traversable by foot.",
"Type of tree coverage.",
"The date/time of the source that was used for the review or update of a feature.",
"Details about the update source of the data. This field is normally populated with an Image ID or a Sheet Number.",
"The name of the update source of the data.",
"Definition Is Not Available",
"Type of plant or plantings.",
"The tidal datum to which soundings and drying heights are referenced.  It is usually taken to correspond to a low water stage of the tide.  (Also known as Chart Sounding Datum).",
"Name of Vertical Datum when VDC (Vertical Datum Category) is 999 (other).",
"Relative location referenced to sounding datum, unless otherwise indicated.",
"Reason data is not collected.",
"Identifies type of missing information.",
"Volume/Occupancy Level.  This descriptor has multiple meanings/applications: Size or capacity of industry, amount of activity, or vehicle traffic (i.e., numbers of automobiles/trucks, aircraft, RR cars, ships, etc).",
"Weather conditions under which a feature is usable.",
"Type of well.",
"A measurement of the shorter of two linear axes.  For a square feature, measure either axis.  For a round feature, width shall be equal to LEN.  For a bridge, the width is the measurement perpendicular to the axis between the abutments.",
"A measurement of the shorter of two linear axes.  For a square feature, measure either axis.  For a round feature, width shall be equal to LEN.  For a bridge, the width is the measurement perpendicular to the axis between the abutments.",
"A field that indicates how the Z coordinate value(s) on the feature was determined."
};


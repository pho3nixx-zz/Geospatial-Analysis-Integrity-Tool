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
#define PIvalue 3.141592653589793
#define OneRadianInDegrees 57.29578
#define HighLightColor 1
#define ContourColor 2
#define LT 1
#define LTEQ 2
#define EQEQ 3
#define GTEQ 4
#define GT 5
#define OPENINT 6
#define GTCLOSED 7
#define CLOSEDINT 8
#define LTCLOSED 9
#define LARGEAREALVERTEXLIMIT 150
#define MAXCOVERFAILURES 100000 /*** was ten million - limited now to conserve memory ***/
#define FP_DEBUG 0
#define MAKEBOXLIKEPOINTQUERY 0
#define PTLTOLERANCE 0.00001
#define MGCP_tolerance 0.001

/*** type definitions ****/

struct ToCollect
   {
   int ECC;
   int EAC;
   int geom;
   int good;
   int bad;
   struct ToCollect * next;
   };
struct LM_ConflateStats
   {
   int marktype;
   int fileindex;
   struct ToCollect *TC;
   struct LM_ConflateStats * next;
   };


struct IncidentList
   {
   long int AdjacentEdge;
   int primary;
   double DeltaZ;
   double DeltaZX;
   double DeltaZY;
   struct IncidentList *next;
   };
struct ListOfEdges
   {
   double x1,y1,z1,x2,y2,z2;
   double matchX1, matchX2;
   double matchY1, matchY2;
   double matchZ1, matchZ2;
   double minx;
   double maxx;
   double miny;
   double maxy;
   double rise;
   double run;
   double slope;
   double Bval;
   unsigned char clipped;
   long int owner;
   int ownernumb;
   int isT;
   int IncidentIDN;
   int IncidentNumb;
   double length;
   double Tcover;
   double Ocover;
   double DeltaZ1, DeltaZ2;
   double DeltaZX1, DeltaZY1, DeltaZX2, DeltaZY2;
   struct IncidentList * Iedge;
   struct ListOfEdges * next;
   };
struct CandVlist
   {
   int code;
   char ismeta;
   char used;
   char islen;
   double value;
   char * strval;
   };
struct CodesAndValue
   {
   int numttl;
   int nummeta;
   struct CandVlist * cv;
   };
struct EdgeIntervals
   {
   int start;
   int stop;
   struct EdgeIntervals * next;
   };
struct ConditionCollection
   {
   int keyval;
   int Cnumber;
   char gform;
   int featureidn;
   int counter;
   double localID;
   double radius;
   double height;
   double magnitude;
   int IDN;
   unsigned int Sindex;
   unsigned int Lindex;
   int numnodes;
   double *x;
   double *y;
   double *z;
   struct EdgeIntervals *index_from_to;
   };

struct DirectConnect
   {
   double TreeKey;
   int vertex1, vertex2;
   int idn;
   double localID;
   struct DirectConnect * next;
   };
struct TransitiveCollection
   {
   int keyval;
   int Cnumber;
   char gform;
   int P1AndP3;
   int featureidn;
   int counter;
   double localID;
   double radius;
   double height;
   double magnitude;
   int IDN;
   unsigned int Sindex;
   unsigned int Lindex;
   int numnodes;
   double *x;
   double *y;
   double *z;
   struct DirectConnect *connect;
   };

struct ConflateStats
   {
   int keyval;
   int ECC;
   int EAC;
   int geom;
   int line_number;
   int junkval;
   int goodval;
   };

struct PointAndID
   {
   double x;
   double y;
   int index1;
   int index2;
   int ID;
   struct PointAndID *next;
   };
struct NewGridLookup
   {
   int NumGrids; /*** number of grids in the LM ***/
   int *FileNumber; /** the file number of each of the grids in this LM ***/
   int *GridIndex; /*** index (id) of the grid ***/
   int *NumRows; /*** number of elevation data rows per grid in the LM ***/
   int *NumCols; /*** number of elevation data columns per grid in the LM ***/
   char *OnEdge; /** is this part of the outer edge of the DEM data ***/
   long *fileptr; /*** pointer into the file(number) where the data starts ***/
   double *BaseX; /*** southwest corner x coord in GAIT coords ***/
   double *BaseY; /*** southwest corner y coord in GAIT coords ***/
   double *BaseZ; /*** southwest corner z value in GAIT coords - use as a double check on read ***/
   };

struct GridLookup
   {
   int numgrids;
   int Fnumber;
   int *actualindex;
   int *column;
   int *nodecount;
   char *OnEdge;
   long int *fileptr;
   };
struct GlobalGridInfo
   {
   int idn;
   int Lindex;
   int Sindex;
   int Xpts;
   int Ypts;
   int BPGV;
   int FileNumber;
   long int fileptr;
   double BaseX;
   double BaseY;
   double Xspacing;
   double Yspacing;
   };
struct ObjectLookup
   {
   int numinside;
   long int fileptr;
   int filenumber;
   int numother;
   struct PtrList *others;
   };
struct InputFiles
{
   FILE * fp;
   int isopen;
};
struct pairedwith
{
  double fid;
  struct pairedwith *next;
};
struct PairsChecked
{
   double fid;
   int maxindex;
   struct pairedwith *p;
   struct PairsChecked *next;
};
struct PairsCheckedEntry
{
   struct PairsChecked * entry;
};

struct CloseVertex
   {
   double x,y,z;
   double distance;
   struct CloseVertex * next;
   };
struct LIDlist
   {
   char geom;
   char OnDataEdge;
   /**int referenced; **/
   int Lindex;
   int idn;
   int checkinstance;
   double localid;
   double mix, miy, max, may;
   struct LIDlist * next;
   };
struct CoordList
   {
   double x;
   double y;
   double z;
   /**int referenced; **/
   int checkinstance;
   /***struct CloseVertex * potential;***/
   /***struct CloseVertex * sibling; ***/
   /***struct CloseVertex * neighbor;***/
   struct LIDlist *lid;
   struct CoordList * next;
   };
struct NetworkNode
   {
   int netnumb;
   struct LIDlist *lid;
   struct CoordList * CL;
   struct NetworkNode * next;
   };

struct PtrList
   {
   long fileptr;
   int filenumber;
   struct PtrList * next;
   };
struct CombinedChecks
   {
   int number;
   int clonenumber;
   int numthresholds;
   int UseBorderConds;
   double sensitivity;
   double sensitivity2;
   double sensitivity3;
   double sensitivity4;
   double sensitivity5;
   double sensitivity6;
   int participants;
   int active;
   char use_sen1;
   char use_sen2;
   char use_sen3;
   char use_sen4;
   char use_sen5;
   char use_sen6;
   unsigned char Config1[NUM_C];
   unsigned char Stratum1[NUM_S];
   unsigned char Domain1[NUM_D];
   unsigned char *primaryEDCSstuff; /** array of size SACfull **/
   unsigned char Config2[NUM_C];
   unsigned char Stratum2[NUM_S];
   unsigned char Domain2[NUM_D];
   unsigned char *secondaryEDCSstuff; /** array of size SACfull **/
   unsigned char Config3[NUM_C];
   unsigned char Stratum3[NUM_S];
   unsigned char Domain3[NUM_D];
   unsigned char *tertiaryEDCSstuff; /** array of size SACfull **/
   unsigned char *primaryFIDstuff;   /** array of size #FID  **/
   unsigned char *secondaryFIDstuff; /** array of size #FID  **/
   unsigned char *tertiaryFIDstuff;  /** array of size #FID **/
   };
struct ListOfArealEdges
   {
   double x1,y1,z1,x2,y2,z2;
   double UID;
   double minx;
   double maxx;
   double miny;
   double maxy;
   int cnumb, idn, Lindex, Sindex;
   struct ListOfArealEdges * next;
   };
struct CondToCollect
   {
   int keyval;
   int Cnumber;
   int Lindex;
   int Sindex;
   char gform;
   double localid;
   int idn;
   int maxindex;
   int numedges;
   struct Edges *listofedges;
   struct CondToCollect *next;
   };
struct Edges
   {
   double x1;
   double y1;
   double z1;
   double x2;
   double y2;
   double z2;
   struct Edges *next;
   } ;
struct RB_Edgelist
   {
   int index;
   struct RB_Edgelist * next;
   };
struct RB_LC_Edgelist
   {
   struct ListOfArealEdges * edge;
   char usedit;
   struct RB_LC_Edgelist * next;
   };
struct ARangeUNM
   {
   int keyval;
   int Cnumber;
   int lowerindex;
   int Sindex;
   int Lindex;
   int idn;
   double parentid;
   double x[2];
   double y[2];
   double z[2];
   struct ARangeUNM * next;
   };




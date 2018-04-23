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
char *ufd_allcaps_fcodes[] = 
{
  "FA001",
  "FA001",
  "FA000",
  "FA000",
  "FA000",
  "AQ010",
  "GB005",
  "GB005",
  "GB005",
  "AK030",
  "AK030",
  "AK020",
  "BB010",
  "BB010",
  "GB015",
  "AL012",
  "FA020",
  "FA020",
  "FA020",
  "AK040",
  "AK040",
  "ZB020",
  "ZB020",
  "DB010",
  "BH015",
  "ZB030",
  "ZB030",
  "BB041",
  "AQ040",
  "AQ040",
  "AL015",
  "AL015",
  "AL020",
  "AL020",
  "AL025",
  "AL025",
  "AK060",
  "AK060",
  "BH020",
  "BH020",
  "AP010",
  "AP010",
  "AQ064",
  "AQ064",
  "DB030",
  "DB030",
  "AL030",
  "AL030",
  "AF010",
  "BI010",
  "BA010",
  "BA010",
  "AT050",
  "AT050",
  "AL045",
  "AL045",
  "AQ060",
  "AF030",
  "AF040",
  "EA010",
  "BI020",
  "BI020",
  "AM010",
  "AM010",
  "AT010",
  "AB000",
  "BH030",
  "AL060",
  "AK070",
  "AK070",
  "BB090",
  "BB090",
  "DB090",
  "DB090",
  "AK090",
  "AK090",
  "AJ030",
  "AJ030",
  "AL070",
  "AQ070",
  "AQ070",
  "BH040",
  "BH040",
  "FA015",
  "FA015",
  "BH050",
  "BH050",
  "AK190",
  "AK190",
  "AF070",
  "BH070",
  "BH075",
  "BH075",
  "AP040",
  "AP040",
  "AK100",
  "AK100",
  "AM020",
  "AM020",
  "EB010",
  "BB005",
  "BB005",
  "GB030",
  "GB030",
  "GB035",
  "GB035",
  "AP020",
  "BA030",
  "BA030",
  "BB140",
  "BH080",
  "BH080",
  "BH090",
  "BC050",
  "BC050",
  "BI030",
  "BI030",
  "ED010",
  "SU001",
  "SU001",
  "AA010",
  "AA010",
  "AI020",
  "AI020",
  "AL130",
  "AL130",
  "DB150",
  "DB150",
  "ZD040",
  "AL135",
  "AL135",
  "EA030",
  "AA052",
  "AA052",
  "EA040",
  "EA040",
  "GB045",
  "AK120",
  "AK120",
  "BB190",
  "BB190",
  "AQ113",
  "AL170",
  "AL170",
  "AD010",
  "AD010",
  "AT030",
  "AT040",
  "AT040",
  "AC000",
  "AC000",
  "AQ116",
  "AA012",
  "AA012",
  "AN050",
  "AK130",
  "AK130",
  "AN010",
  "AN010",
  "AN075",
  "AN075",
  "AN060",
  "AN060",
  "BH130",
  "BH130",
  "BH135",
  "AA040",
  "AA040",
  "BH140",
  "BH140",
  "BH145",
  "AP030",
  "AP030",
  "AL200",
  "AL200",
  "AL200",
  "GB055",
  "GB055",
  "EB020",
  "GB065",
  "GB065",
  "BB230",
  "AL105",
  "AL105",
  "AC030",
  "AC030",
  "AL208",
  "AL208",
  "BB240",
  "BB240",
  "BI040",
  "AL210",
  "AD020",
  "BH170",
  "BH170",
  "AK160",
  "AK160",
  "AQ125",
  "AQ125",
  "AM060",
  "AM060",
  "AD030",
  "AD030",
  "SU002",
  "SU002",
  "ED020",
  "AK170",
  "AK170",
  "AM070",
  "AM070",
  "GB075",
  "AK050",
  "AK050",
  "ZD045",
  "AT080",
  "AT080",
  "AL240",
  "AL240",
  "AP050",
  "AP050",
  "EC030",
  "EC030",
  "AQ130",
  "AQ130",
  "AH060",
  "AH060",
  "AL250",
  "AL250",
  "AQ135",
  "AQ140",
  "EA050",
  "AL260",
  "AL260",
  "AM080",
  "AM080",
  "BA040",
  "BA040",
  "AA050",
  "AA050",
  "AJ050",
  "AB010",
  "AK180",
  "AK180"
};


char *ufd_allcaps_geoms[] = 
{
  "A",
  "A",
  "L",
  "L",
  "L",
  "L",
  "A",
  "A",
  "A",
  "A",
  "A",
  "P",
  "A",
  "A",
  "A",
  "A",
  "L",
  "L",
  "L",
  "A",
  "A",
  "P",
  "P",
  "L",
  "A",
  "P",
  "P",
  "L",
  "L",
  "L",
  "P",
  "P",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "L",
  "L",
  "L",
  "L",
  "L",
  "L",
  "P",
  "P",
  "A",
  "A",
  "P",
  "P",
  "L",
  "L",
  "P",
  "P",
  "A",
  "A",
  "P",
  "P",
  "P",
  "A",
  "A",
  "A",
  "P",
  "P",
  "P",
  "A",
  "L",
  "L",
  "A",
  "A",
  "A",
  "A",
  "L",
  "L",
  "A",
  "A",
  "A",
  "A",
  "L",
  "L",
  "L",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "L",
  "L",
  "P",
  "P",
  "P",
  "P",
  "P",
  "P",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "L",
  "A",
  "A",
  "L",
  "A",
  "A",
  "A",
  "P",
  "P",
  "P",
  "P",
  "A",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "P",
  "P",
  "P",
  "P",
  "P",
  "A",
  "A",
  "A",
  "A",
  "A",
  "A",
  "A",
  "A",
  "A",
  "A",
  "L",
  "L",
  "L",
  "A",
  "A",
  "A",
  "A",
  "L",
  "P",
  "P",
  "A",
  "A",
  "P",
  "P",
  "P",
  "L",
  "L",
  "L",
  "L",
  "L",
  "P",
  "P",
  "A",
  "A",
  "A",
  "A",
  "A",
  "P",
  "P",
  "L",
  "L",
  "P",
  "L",
  "L",
  "P",
  "P",
  "P",
  "A",
  "A",
  "A",
  "A",
  "A",
  "L",
  "P",
  "P",
  "A",
  "A",
  "A",
  "A",
  "L",
  "L",
  "P",
  "P",
  "P",
  "P",
  "P",
  "A",
  "A",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "L",
  "L",
  "A",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "A",
  "P",
  "P",
  "P",
  "P",
  "P",
  "L",
  "L",
  "A",
  "A",
  "L",
  "L",
  "A",
  "A",
  "P",
  "P",
  "A",
  "A",
  "A",
  "L",
  "L",
  "P",
  "P",
  "A",
  "A",
  "P",
  "P",
  "P",
  "A",
  "A",
  "A"
};

char *ufd_allcaps_attrs[] = 
{
  "NAM",
  "TXT",
  "NM3",
  "NM4",
  "TXT",
  "TXT",
  "IKO",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "NM3",
  "NM4",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "TXT",
  "VDR",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "VDR",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "NAM",
  "TXT",
  "TXT",
  "TXT",
  "NAM",
  "TXT"
};


int UFD1ALLCAPSLEN = sizeof(ufd_allcaps_attrs)/ sizeof(char *);
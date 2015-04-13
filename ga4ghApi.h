#include<stdio.h>
#include<avro.h>

#include"ga4ghStructures.h"


/*Gets a GAReference by ID 
  and will return a JSON version of GAReference.*/
GAReference * getReference(char *id);

/*Lists GAReference bases by ID and optional range. 
  Return a JSON version of GAListReferenceBasesResponse.*/
GAListReferenceBasesResponse *getReferenceBases(char *id...);

/*Gets a GAReferenceSet by ID 
  and will return a JSON version of GAReferenceSet*/
GAReferenceSet *getReferenceSet(char *id);

/*Takes a JSON version of GASearchCallSetsRequest as the arguement 
  and will return a JSON version of GASearchCallSetsResponse.*/
GASearchCallSetsResponse *searchCallSets(GASearchCallSetsRequest *u_GASearchCallSetsRequest);

/*Takes a JSON version of GASearchReadGroupSetsRequest as the arguement
  and will return a JSON version of GASearchReadGroupSetsResponse.*/
GASearchReadGroupSetsResponse *searchReadGroupSets(GASearchReadGroupSetsRequest *u_GASearchReadGroupSetsRequest);

/*Takes accept a JSON version of GASearchReadsRequest as the arguement 
  and will return a JSON version of GASearchReadsResponse.*/
GASearchReadsResponse *searchReads(GASearchReadsRequest *u_GASearchReadsRequest);

/*Takes a JSON version of GASearchReferenceSetsRequest as the arguement 
  and will return a JSON version of GASearchReferenceSetsResponse.*/
GASearchReferenceSetsResponse *searchReferenceSets(GASearchReferenceSetsRequest *u_GASearchReferenceSetsRequest);

/*Takes a JSON version of GASearchVariantSetsRequest as the arguement 
  and will return a JSON version of GASearchVariantSetsResponse.*/
GASearchVariantSetsResponse *searchVariantSets(GASearchVariantSetsRequest *u_GASearchVariantSetsRequest);

/*Takes a JSON version of GASearchVariantsRequest as the arguement 
  and will return a JSON version of GASearchVariantsResponse.*/
GASearchVariantsResponse *searchVariants(GASearchVariantsRequest *u_GASearchVariantsRequest);

	

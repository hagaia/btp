#ifndef VITERBI_REALIGN_H
#define VITERBI_REALIGN_H

#define DIM 19
//#define MAX_NUM_MIX 100
#define MIN_DUR 250
#include <stdio.h>
#include <stdlib.h>
#include "../include/FrontEndDefs.h"
#include "../include/FrontEndTypes.h"
#include "../include/VQ_Modified.h"
#include "../include/InitAsdf.h"
#include "../include/DspLibrary.h"
#include "../include/GMM.h"
#include "../include/VQ_Modified.h"
#include "../include/config_single.h"
#include <math.h>
//#include "../include/preprocessing.h"

int* viterbi( VECTOR_OF_F_VECTORS *features, hmm* mdHMM,          int totalNumFeatures,              float **B,           int *numElemEachState,                          float *T1[],               int *T2[],                          float *Pi,         int *);

int* CheckMinDuration( int *hiddenStateSeq, int *numStates, int totalNumFeatures, float **B);
#endif

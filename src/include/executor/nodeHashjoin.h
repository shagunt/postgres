/*-------------------------------------------------------------------------
 *
 * nodeHashjoin.h
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id: nodeHashjoin.h,v 1.14 1999/05/25 22:42:46 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEHASHJOIN_H
#define NODEHASHJOIN_H

#include "nodes/plannodes.h"
#include "nodes/execnodes.h"
#include "utils/syscache.h"

extern TupleTableSlot *ExecHashJoin(HashJoin *node);
extern bool ExecInitHashJoin(HashJoin *node, EState *estate, Plan *parent);
extern int	ExecCountSlotsHashJoin(HashJoin *node);
extern void ExecEndHashJoin(HashJoin *node);
extern void ExecHashJoinSaveTuple(HeapTuple heapTuple, BufFile *file);
extern void ExecReScanHashJoin(HashJoin *node, ExprContext *exprCtxt, Plan *parent);

#endif	 /* NODEHASHJOIN_H */

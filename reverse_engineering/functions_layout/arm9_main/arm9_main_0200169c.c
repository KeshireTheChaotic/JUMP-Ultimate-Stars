
int * FUN_0200169c(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
                    /* JUS-TAG
                       strings=["compFn","elemSize","hashFn","hashtable.c","nBuckets","table","table->buckets"]
                        */
  if (param_4 == 0) {
    FUN_02002068(s_hashFn_02092f9c,s_hashtable_c_02092f88,0,0x38);
  }
  if (param_5 == 0) {
    FUN_02002068(s_compFn_02092fa4,s_hashtable_c_02092f88,0,0x39);
  }
  if (param_1 == 0) {
    FUN_02002068(s_elemSize_02092fac,s_hashtable_c_02092f88,0,0x3a);
  }
  if (param_2 == 0) {
    FUN_02002068(s_nBuckets_02092fb8,s_hashtable_c_02092f88,0,0x3b);
  }
  piVar1 = (int *)func_0x0217583c(0x14);
  if (piVar1 == (int *)0x0) {
    FUN_02002068(s_table_02092f94,s_hashtable_c_02092f88,0,0x3e);
  }
  iVar2 = func_0x0217583c(param_2 << 2);
  *piVar1 = iVar2;
  if (*piVar1 == 0) {
    FUN_02002068(s_table_>buckets_02092fc4,s_hashtable_c_02092f88,0,0x41);
  }
  iVar2 = 0;
  if (0 < param_2) {
    iVar4 = 0;
    do {
      uVar3 = FUN_02001368(param_1,param_3,param_6);
      *(undefined4 *)(*piVar1 + iVar4) = uVar3;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  piVar1[1] = param_2;
  piVar1[2] = param_6;
  piVar1[4] = param_5;
  piVar1[3] = param_4;
  return piVar1;
}



void FUN_02167740(int param_1,int param_2,int param_3,short *param_4,short *param_5,
                 undefined4 param_6,int param_7,byte *param_8,short *param_9)

{
  short sVar1;
  short *psVar2;
  
  for (; param_2 < param_3; param_2 = param_2 + 4) {
    sVar1 = *(short *)(*(int *)(param_1 + 0x14) + param_2 * 8);
    psVar2 = (short *)(*(int *)(param_1 + 0x14) + param_2 * 8);
    if ((*param_5 < *(short *)(sVar1 * 0x18 + *(int *)(param_1 + 0x18) + 0x16)) &&
       ((char)psVar2[1] == '\x02')) {
      *param_4 = sVar1;
      *param_5 = *(short *)(*psVar2 * 0x18 + *(int *)(param_1 + 0x18) + 0x16);
      if (((*(uint *)(param_1 + 0x3c) & 1) == 0) &&
         (*(short *)(*(short *)(*psVar2 * 0x18 + *(int *)(param_1 + 0x18) + 0x16) * 0x34 +
                     *(int *)(param_1 + 0x1c) + 0x22) != -1)) {
        FUN_02167958(param_1,(int)*param_5,param_6);
        if (*(int *)(*param_5 * 0x34 + *(int *)(param_1 + 0x1c) + 0x14) == 0) {
          *(char *)(param_7 + (uint)*param_8) = (char)*param_5;
          *param_8 = *param_8 + 1;
          *param_9 = 0xf;
        }
      }
      else if (*param_9 == -1) {
        *param_9 = 0x2b;
      }
    }
  }
  psVar2 = (short *)(*(int *)(param_1 + 0x14) + param_3 * 8);
  if ((char)psVar2[1] != '\x02') {
    return;
  }
  if (*(short *)(*psVar2 * 0x18 + *(int *)(param_1 + 0x18) + 0x16) <= *param_5) {
    return;
  }
  *param_4 = *psVar2;
  *param_5 = *(short *)(*psVar2 * 0x18 + *(int *)(param_1 + 0x18) + 0x16);
  if (((*(uint *)(param_1 + 0x3c) & 1) == 0) &&
     (*(short *)(*(short *)(*psVar2 * 0x18 + *(int *)(param_1 + 0x18) + 0x16) * 0x34 +
                 *(int *)(param_1 + 0x1c) + 0x22) != -1)) {
    FUN_02167958(param_1,(int)*param_5,param_6);
    if (*(int *)(*param_5 * 0x34 + *(int *)(param_1 + 0x1c) + 0x14) == 0) {
      *(char *)(param_7 + (uint)*param_8) = (char)*param_5;
      *param_8 = *param_8 + 1;
      *param_9 = 0xf;
      return;
    }
    return;
  }
  if (*param_9 == -1) {
    *param_9 = 0x2b;
  }
  return;
}


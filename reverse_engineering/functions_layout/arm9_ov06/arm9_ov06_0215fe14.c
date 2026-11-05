
void FUN_0215fe14(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar1 = *(short *)(*(int *)(*param_1 + 0x56c) + 0x18);
  sVar2 = *(short *)(*(int *)(*param_1 + 0x56c) + 0x16);
  *(undefined2 *)((int)param_1 + 0x5a) = *(undefined2 *)((int)param_1 + 0x56);
  *(short *)(param_1 + 0x17) = (short)param_1[0x16];
  iVar3 = FUN_0200d12c(sVar1 * 100,(int)sVar2,(short)param_1[0x16],(int)sVar1,param_4);
  if (iVar3 < 0x1a) {
    *(short *)((int)param_1 + 0x5a) =
         *(short *)((int)param_1 + 0x5a) + *(short *)((int)param_1 + param_2 * 2 + 0x16);
    *(short *)(param_1 + 0x17) =
         (short)param_1[0x17] + *(short *)((int)param_1 + param_2 * 2 + 0x16);
    return;
  }
  return;
}


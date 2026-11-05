
int FUN_020588c8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int aiStack_50 [16];
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02058044();
  if (iVar2 != 0) {
    return 0;
  }
  if ((param_2 == 0) || (0xf < param_2)) {
    return 0;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + iRam020589c8,2);
  if (((uint)*(ushort *)(*(int *)(iVar1 + 4) + 0x182) & 1 << (param_2 & 0xff)) == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 4) == 0) {
    return 0;
  }
  aiStack_50[0] = param_1 + 10;
  iVar1 = 0;
  do {
    if (param_2 == *(ushort *)(aiStack_50[iVar1] + 4)) {
      return aiStack_50[iVar1];
    }
    iVar2 = iVar1 + 1;
    aiStack_50[iVar2] = (uint)*(ushort *)(param_1 + 6) + aiStack_50[iVar1];
    iVar1 = iVar2;
  } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 4));
  return 0;
}


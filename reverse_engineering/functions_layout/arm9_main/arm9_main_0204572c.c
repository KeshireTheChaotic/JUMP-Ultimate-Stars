
int FUN_0204572c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x74) <= uVar2) {
      *(char *)(param_1 + *(uint *)(param_1 + 0x74) + 0x60) = (char)param_5;
      iVar3 = *(int *)(param_1 + 0x74);
      *(int *)(param_1 + 0x74) = iVar3 + 1;
      *(uint *)(param_1 + iVar3 * 4 + 0x20) = param_4;
      DC_FlushRange(param_2,param_3);
      iVar3 = FUN_02045570(param_1,param_2,param_3);
      return iVar3;
    }
    uVar1 = *(uint *)(param_1 + uVar2 * 4 + 0x20);
    bVar4 = uVar1 == param_4;
    if (bVar4) {
      uVar1 = (uint)*(byte *)(param_1 + uVar2 + 0x60);
    }
    if (bVar4 && param_5 == uVar1) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2 << 5;
}



void FUN_02160cec(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if (((*(int *)(iVar1 + 4) != 3) || (4 < iVar2)) && ((param_2 & 2) != 0)) {
    *param_3 = *(undefined4 *)(iVar1 + (char)(&DAT_0216d6a0)[iVar2] * 4 + 0x98);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x94);
    FUN_0207342c(0x78,3);
  }
  return;
}


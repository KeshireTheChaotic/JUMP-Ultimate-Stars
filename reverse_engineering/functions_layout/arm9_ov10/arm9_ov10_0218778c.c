
undefined4 FUN_0218778c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x430) = 0;
  *(undefined4 *)(iVar2 + 0x42c) = 0;
  iVar1 = FUN_02001774(0x1c,4,0x2187831,0x2187829,0x21877dd);
  *(int *)(iVar2 + 0x428) = iVar1;
  if (*(int *)(iVar2 + 0x428) == 0) {
    return 0;
  }
  return 1;
}


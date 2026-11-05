
void FUN_02047be4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_020472a0();
  }
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x9c) <= uVar2) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4) == param_2) break;
    uVar2 = uVar2 + 1;
  }
  FUN_020303d0(param_1 + 0x98);
  iVar1 = FUN_0201a9ec(param_2);
  if (iVar1 == 0) {
    FUN_0201a958(param_2,1);
  }
  *(undefined1 *)(param_2 + 0x15) = 1;
  iVar1 = *(int *)(param_1 + 0xa4) + -1;
  *(int *)(param_1 + 0xa4) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  for (uVar2 = 0; uVar2 < DAT_020a1174; uVar2 = uVar2 + 1) {
    if (*(int *)(DAT_020a1170 + uVar2 * 4) == param_1) {
      FUN_020303d0(&DAT_020a1170);
    }
  }
  return;
}


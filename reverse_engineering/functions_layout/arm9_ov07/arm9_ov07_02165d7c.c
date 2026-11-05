
void FUN_02165d7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar3 + 0x20) < DAT_020afe94) {
    FUN_02070cdc();
    FUN_020725a0();
    do {
      if (DAT_020afe94 <= *(int *)(iVar3 + 0x20)) break;
      iVar1 = *(int *)(iVar3 + 0x20) + 1;
      *(int *)(iVar3 + 0x20) = iVar1;
      if (iVar1 == DAT_020afe98) {
        *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
      }
      FUN_02070cdc(*(undefined4 *)(iVar3 + 0x20));
      iVar1 = FUN_020725ac();
    } while (iVar1 == 0);
  }
  if (*(int *)(iVar3 + 0x20) < DAT_020afe94) {
    uVar2 = FUN_02070ca4();
    FUN_02165be4(iVar3,uVar2);
    uVar2 = FUN_02070cdc(*(undefined4 *)(iVar3 + 0x20));
    FUN_02165c30(iVar3,uVar2);
    FUN_02165d48(param_1,0);
    return;
  }
  iVar1 = thunk_FUN_0208c51c();
  if (iVar1 != 0) {
    FUN_0208c5bc();
  }
  FUN_02165a60(iVar3);
  return;
}


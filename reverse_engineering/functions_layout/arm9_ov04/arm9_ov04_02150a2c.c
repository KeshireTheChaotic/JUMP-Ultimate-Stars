
void FUN_02150a2c(int param_1,uint param_2)

{
  undefined1 uVar1;
  uint extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  for (iVar2 = 1; iVar2 < *(char *)(param_1 + 0x18); iVar2 = iVar2 + 1) {
    iVar3 = iVar3 * 10;
  }
  if ((uint)(iVar3 * 10) < param_2) {
    param_2 = iVar3 * 10 - 1;
  }
  for (iVar2 = 0; iVar4 = *(char *)(param_1 + 0x18) + -1, iVar2 < iVar4; iVar2 = iVar2 + 1) {
    uVar1 = FUN_0200d338(param_2,iVar3);
    *(undefined1 *)(*(int *)(param_1 + 0x10) + (iVar4 - iVar2)) = uVar1;
    FUN_0200d338(param_2,iVar3);
    iVar3 = FUN_0200d338(iVar3,10);
    param_2 = extraout_r1;
  }
  **(undefined1 **)(param_1 + 0x10) = (char)param_2;
  return;
}


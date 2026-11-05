
void FUN_0218daf8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_02004b04(param_2);
  iVar2 = 0x800 - *(int *)(param_1 + 0x800);
  iVar4 = iVar1 + 1;
  if (iVar2 < iVar1 + 1) {
    iVar4 = iVar2;
  }
  if (iVar4 != 0) {
    FUN_02002434(param_1 + *(int *)(param_1 + 0x800),param_2,iVar4);
    piVar3 = (int *)(param_1 + 0x800);
    *piVar3 = *piVar3 + iVar4;
    *(undefined1 *)(param_1 + *piVar3 + -1) = 0;
  }
  return;
}


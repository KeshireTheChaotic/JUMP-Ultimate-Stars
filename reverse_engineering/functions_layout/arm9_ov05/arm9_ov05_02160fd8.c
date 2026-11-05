
void FUN_02160fd8(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if (((-1 < iVar2) && (iVar2 < 10)) && ((param_2 & 1) != 0)) {
    *param_3 = *(undefined4 *)(iVar1 + (char)(&DAT_0216d6a8)[iVar2] * 4 + 0x60);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x5c);
  }
  return;
}


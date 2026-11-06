
void FUN_0215912c(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if ((param_2 & 1) != 0) {
    if (iVar1 < 1) {
      *param_3 = *(undefined4 *)(iVar2 + 0x14);
    }
    else {
      *param_3 = *(undefined4 *)(iVar2 + (iVar1 + -1) * 4 + 0xc);
    }
  }
  if ((param_2 & 2) == 0) {
    return;
  }
  if (iVar1 < 2) {
    *param_3 = *(undefined4 *)(iVar2 + (iVar1 + 1) * 4 + 0xc);
  }
  else {
    *param_3 = *(undefined4 *)(iVar2 + 0xc);
  }
  return;
}


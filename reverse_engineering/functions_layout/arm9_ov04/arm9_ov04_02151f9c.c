
void FUN_02151f9c(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = iVar1 + -0x40;
  if ((param_2 & 8) != 0) {
    if (iVar2 < 1) {
      iVar2 = 2;
    }
    else {
      iVar2 = iVar1 + -0x41;
    }
    *param_3 = *(undefined4 *)(iVar3 + (iVar2 + 3) * 4 + 100);
  }
  if ((param_2 & 4) == 0) {
    return;
  }
  if (iVar2 < 2) {
    iVar2 = iVar2 + 1;
  }
  else {
    iVar2 = 0;
  }
  *param_3 = *(undefined4 *)(iVar3 + (iVar2 + 3) * 4 + 100);
  return;
}


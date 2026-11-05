
void FUN_0216e6d4(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  iVar1 = FUN_02083788(*param_2,*(undefined4 *)(iVar3 + 0x10),param_3,param_4,param_4);
  iVar1 = *(int *)(iVar3 + 0x10) - iVar1;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0x101) {
    return;
  }
  uVar2 = FUN_0216e730(param_1,param_2);
  *param_3 = uVar2;
  return;
}


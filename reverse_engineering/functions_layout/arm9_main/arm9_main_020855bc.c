
void FUN_020855bc(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 8) + param_3 * 4) + 0x30);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  uVar4 = *(undefined4 *)(iVar1 + 0x2c);
  *param_1 = *(undefined4 *)(iVar1 + 0x20);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}


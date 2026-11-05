
void FUN_0217d750(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = *(int *)(iVar4 + 4);
  uVar2 = *(uint *)(iVar3 + 0xe4);
  uVar1 = uVar2 & ~*(uint *)(&DAT_02181468 + param_2 * 4);
  *(uint *)(iVar3 + 0xe4) = uVar1;
  *(undefined1 *)(iVar4 + 0x12) = 0;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0217d0b4,uVar1,uVar2,param_4);
  return;
}


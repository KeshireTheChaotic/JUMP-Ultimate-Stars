
void FUN_021612ec(int param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 + 4;
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  if (*param_3 == 0) {
    return;
  }
  iVar2 = (uint)*(ushort *)(param_2 + 2) * 0x1fc + *param_3;
  if ((uint)*(ushort *)(param_2 + 2) != *(int *)(iVar4 + 0x424) - 1U) {
    FUN_02051890(iVar3,iVar2,*(undefined2 *)(iVar4 + 0x586));
    return;
  }
  uVar1 = *(undefined2 *)(iVar4 + 0x586);
  FUN_0200d12c(*(undefined4 *)(iVar4 + 0x420),uVar1);
  if (extraout_r1 == 0) {
    FUN_02051890(iVar3,iVar2,uVar1);
    return;
  }
  FUN_02051890(iVar3,iVar2);
  return;
}



void FUN_021579d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x48) + param_2 * 4);
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + param_2 * 4);
  uVar5 = param_4;
  uVar2 = FUN_0214f898(iVar1,0x67625053);
  FUN_021524c8(uVar2,param_3);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = param_4;
  piVar3 = *(int **)(iVar4 + 4);
  if (param_5 == '\0') {
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  }
  FUN_02157ae4(param_1,param_2,iVar4,0,param_3,iVar1,uVar5);
  return;
}


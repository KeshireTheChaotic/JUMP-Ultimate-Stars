
void FUN_02158b74(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + (param_2 + 8) * 4 + 0x30);
  iVar1 = FUN_0214f898(uVar4,0x6e755053);
  iVar2 = FUN_0214f898(uVar4,0x6b6f5053);
  piVar3 = *(int **)(iVar1 + 4);
  if (param_3 == 0) {
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    return;
  }
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  return;
}



void FUN_0215df34(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_10;
  
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x840000,0,0,0,0x1f);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  iVar2 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar2 + 0xbc) = 0;
  *(undefined2 *)(iVar2 + 0xbe) = 3;
  piVar3 = *(int **)(iVar1 + 4);
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),piVar3);
  (**(code **)(*piVar3 + 0xc))();
  local_10 = 0x1f000;
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_10);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0x10) = 0xfff40000;
  FUN_02150090(iVar1,1);
  return;
}


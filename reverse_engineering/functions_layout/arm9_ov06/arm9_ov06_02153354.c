
int FUN_02153354(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  iVar1 = FUN_021533fc();
  local_1c = param_4 << 0xc;
  local_18 = param_3 << 0xc;
  FUN_021519d0(iVar1,&local_18,&local_1c);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1 + param_2,0);
  local_20 = 0x42000;
  FUN_021512bc(iVar1,&local_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),0x800);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  return iVar1;
}


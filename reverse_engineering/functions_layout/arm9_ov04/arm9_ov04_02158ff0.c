
void FUN_02158ff0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_0214e9f0(*(undefined4 *)(iVar1 + 0x88),0x8f0000,1,0x10);
  piVar2 = *(int **)(iVar1 + 4);
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),piVar2);
  (**(code **)(*piVar2 + 0xc))();
  local_10 = 0x10000;
  FUN_0214ea78(param_1,&local_10);
  return;
}


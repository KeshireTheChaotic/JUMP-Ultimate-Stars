
int FUN_0215e59c(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  func_0x021c5fb4(*(undefined4 *)(param_1 + 4));
  iVar1 = FUN_021504fc();
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa4))(piVar2,param_7);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa8))(piVar2,param_6);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,param_2);
  local_1c = param_4 << 0xc;
  local_18 = param_3 << 0xc;
  FUN_0214ce68(iVar1,&local_18,&local_1c);
  local_20 = param_5 << 0xc;
  FUN_0214d494(iVar1,&local_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  return iVar1;
}


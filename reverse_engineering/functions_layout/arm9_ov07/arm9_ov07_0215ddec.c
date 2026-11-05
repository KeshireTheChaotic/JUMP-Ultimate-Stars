
void FUN_0215ddec(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (uVar2 = (**(code **)*param_2)(), (uVar2 & 4) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x9d) = 1;
  }
  return;
}


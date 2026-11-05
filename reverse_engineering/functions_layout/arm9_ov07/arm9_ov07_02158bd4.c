
void FUN_02158bd4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffeefff) && (uVar2 = (**(code **)*param_2)(), (uVar2 & 4) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    FUN_0207342c(0x78,1);
    func_0x021b65bc();
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 8) + 4),0x2158761);
  }
  return;
}


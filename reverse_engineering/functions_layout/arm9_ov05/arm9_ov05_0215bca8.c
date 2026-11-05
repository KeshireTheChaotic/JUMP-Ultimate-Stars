
void FUN_0215bca8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_2 & 0x10) == 0) {
    return;
  }
  func_0x021b65bc();
  *(undefined1 *)(iVar1 + 0x4ee) = 1;
  FUN_0207342c(0x78,0);
  return;
}


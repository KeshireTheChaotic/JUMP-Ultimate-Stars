
void FUN_0215b164(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_2 & 0x20) == 0) {
    return;
  }
  func_0x021b65bc();
  FUN_0215b3b0(uVar1,0xffffffff);
  FUN_0207342c(0x78,1);
  return;
}


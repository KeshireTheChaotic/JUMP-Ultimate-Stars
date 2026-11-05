
void FUN_02160c58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(param_1 + 4);
  uStack_18 = param_4;
  iVar1 = FUN_02160c9c();
  iStack_20 = (int)*(short *)(iVar2 + 0xa2) << 0xc;
  iStack_1c = (int)*(short *)(iVar2 + 0xa0) << 0xc;
  FUN_0214ce68(param_1,&iStack_1c,&iStack_20);
  iVar1 = func_0x021b712c(*(undefined4 *)(iVar1 + 4));
  if (iVar1 == 0) {
    FUN_0207342c(0x78,3);
  }
  return;
}


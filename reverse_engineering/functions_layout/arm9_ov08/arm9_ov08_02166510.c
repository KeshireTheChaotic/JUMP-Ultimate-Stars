
void FUN_02166510(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_02167764(1,*(undefined4 *)(param_1 + 0x34));
  if (param_1 == DAT_0216e844 + 0x718) {
    uVar1 = FUN_02065d24();
    MIi_CpuClear16(0,uVar1,(uint)DAT_0216aefa * (uint)DAT_0216aef8 * 0x20);
  }
  else {
    uVar1 = FUN_02065d24();
    MIi_CpuClear16(0,uVar1,(uint)DAT_0216aefe * (uint)DAT_0216aefc * 0x20);
  }
  FUN_02166b5c(param_1 + 0x30);
  return;
}


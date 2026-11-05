
void FUN_0215ce00(undefined4 param_1)

{
  int iVar1;
  
  FUN_02161614();
  FUN_021547b8();
  DAT_0216e790 = DAT_0216e790 + 6;
  iVar1 = FUN_02050750(DAT_0216e790,0x1d);
  if (iVar1 < 6) {
    DAT_0216e790 = DAT_0216e790 - (short)iVar1;
    FUN_0215d660();
    FUN_0200d12c((uint)DAT_0216e790 * 0x37,0x91);
    thunk_FUN_02161290();
    FUN_02161624();
    FUN_0215cc8c();
    *(undefined4 *)(DAT_0216e794 + 0x38) = 0;
    FUN_021677a0(0,param_1);
    return;
  }
  FUN_0215d0b0();
  return;
}


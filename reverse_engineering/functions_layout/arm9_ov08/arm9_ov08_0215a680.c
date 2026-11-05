
void FUN_0215a680(undefined4 param_1)

{
  int iVar1;
  
  FUN_02161614();
  FUN_021547b8();
  DAT_0216e770 = DAT_0216e770 + 4;
  iVar1 = FUN_02050750(DAT_0216e770,0x1c);
  if (iVar1 < 4) {
    DAT_0216e770 = DAT_0216e770 - (short)iVar1;
    FUN_0215a93c();
    FUN_020507a8((uint)*(byte *)(DAT_0216e774 + 0x53) * (uint)DAT_0216e770,
                 *(undefined2 *)(DAT_0216e774 + 0x40));
    thunk_FUN_02161290();
    FUN_02161624();
    FUN_0215a600();
    *(undefined4 *)(DAT_0216e774 + 0x38) = 0;
    FUN_021677a0(0,param_1);
    return;
  }
  FUN_0215a780();
  return;
}



undefined4 FUN_0214f1dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(short *)(param_1 + 0x106) != 0) {
    iVar1 = 0;
    if ((((((-2 < *(short *)(param_1 + 0x106)) && (-2 < *(short *)(param_1 + 0x108))) &&
          (*(short *)(param_1 + 0x10a) != 0)) &&
         ((-2 < *(short *)(param_1 + 0x10a) && (-2 < *(short *)(param_1 + 0x10c))))) &&
        ((-2 < *(short *)(param_1 + 0x10e) &&
         ((uVar3 = (uint)*(ushort *)(param_1 + 4), uVar3 != 0 && (uVar3 < 0x101)))))) &&
       (*(char *)(param_1 + uVar3 + 5) == '\0')) goto LAB_0214f22e;
  }
  iVar1 = -1;
LAB_0214f22e:
  if ((DAT_0216cf8c == 0) || (DAT_0216cf98 == 0)) {
    iVar1 = -1;
  }
  if (iVar1 == -1) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  DAT_0216c1d4 = FUN_0214f2f8(0x5f8);
  if (DAT_0216c1d4 == 0) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  FUN_0214e2b4(0xffffffff);
  uVar2 = FUN_0214e6f0(param_1);
  FUN_0214f2e4(DAT_0216c1d4);
  FUN_0214e698();
  if (DAT_0216af24 != -1) {
    thunk_EXT_FUN_021939fc();
  }
  return uVar2;
}


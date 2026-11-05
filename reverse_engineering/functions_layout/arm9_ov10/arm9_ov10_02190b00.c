
void FUN_02190b00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 ushort param_6)

{
  int iVar1;
  int iVar2;
  
  *(ushort *)(param_1 + -2) = param_6 >> 8 | param_6 << 8;
  iVar1 = FUN_02191114(param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_02191160(param_5);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = FUN_02190d70();
    if (iVar2 == 0) {
      iVar2 = FUN_02190c74(iVar1);
    }
    if (iVar2 == 0) {
      return;
    }
    FUN_02051890(iVar2,param_1 + -0xe,6);
  }
  else {
    *(undefined1 *)(param_1 + -0xe) = 1;
    *(undefined1 *)(param_1 + -0xd) = 0;
    *(undefined1 *)(param_1 + -0xc) = 0x5e;
    *(byte *)(param_1 + -0xb) = (byte)((uint)param_5 >> 0x10) & 0x7f;
    *(char *)(param_1 + -10) = (char)((uint)param_5 >> 8);
    *(char *)(param_1 + -9) = (char)param_5;
  }
  FUN_02051890(&DAT_021a8548,param_1 + -8,6);
  FUN_0219104c(param_1 + -0xe,param_2 + 0xe,param_3,param_4);
  return;
}


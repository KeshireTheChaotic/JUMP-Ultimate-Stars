
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215b1fc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(short *)(param_2 + 0xec) + -0x3a;
  iVar2 = *(short *)(param_2 + 0xec) + 0x3a;
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  _DAT_04001040 = (ushort)(iVar1 << 8) | (ushort)iVar2 & 0xff;
  _DAT_04001044 = 0x109c;
  return;
}


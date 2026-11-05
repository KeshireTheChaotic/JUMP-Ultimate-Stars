
undefined4 FUN_021938f8(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  uVar1 = FUN_0219321c();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x74);
  }
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  *param_2 = 8;
  param_2[1] = 2;
  *(ushort *)(param_2 + 2) = (ushort)(uVar2 >> 8) | (ushort)((uVar2 & 0xff) << 8);
  *(uint *)(param_2 + 4) =
       uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  return 0;
}


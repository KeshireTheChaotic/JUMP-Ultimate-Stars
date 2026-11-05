
void FUN_02027de8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x28);
  if ((uVar2 & 0xf) >> 3 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7 | (byte)((param_2 & 1) << 3);
  if ((param_2 & 1) == 0) {
    if ((uVar2 & 7) >> 2 != 0) {
      uVar1 = FUN_02027808(param_1,0);
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      FUN_02027834(param_1,0,0);
    }
  }
  else if ((uVar2 & 7) >> 2 != 0) {
    FUN_02027834(param_1,0,*(undefined4 *)(param_1 + 0x40));
    *(undefined1 **)(param_1 + 0x40) = &LAB_0202836c;
  }
  FUN_02027edc(param_1);
  return;
}


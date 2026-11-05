
undefined4 FUN_0207387c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return 1;
  }
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 4;
  uVar1 = (int)(uint)*(ushort *)(param_1 + 2) >> *(sbyte *)(param_1 + 1) & 0xffff;
  bVar2 = 0xf < uVar1;
  if (bVar2) {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if (bVar2) {
    uVar1 = 0x10;
  }
  (**(code **)(param_1 + 0xc))(param_1,uVar1,*(code **)(param_1 + 0xc),param_4,param_4);
  return 0;
}


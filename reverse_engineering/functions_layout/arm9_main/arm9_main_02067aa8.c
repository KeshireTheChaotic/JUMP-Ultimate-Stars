
undefined4 FUN_02067aa8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_020673ec(0x10);
  if (((((*(byte *)(iVar1 + 0xd0c) & 0xf) == 0) || ((*(byte *)(iVar1 + 0xd0c) & 0xf) == 4)) &&
      (((int)(uint)*(ushort *)(param_1 + 0x2c) >> 4 & 1U) == 1)) &&
     (iVar2 = FUN_02069480(param_1 + 0xc), iVar2 == 1)) {
    return 6;
  }
  if ((((*(byte *)(iVar1 + 0xd0c) & 0xf) == 0) || ((*(byte *)(iVar1 + 0xd0c) & 0xf) == 5)) &&
     ((((int)(uint)*(ushort *)(param_1 + 0x2c) >> 4 & 1U) == 1 &&
      (iVar1 = FUN_020694e4(param_1 + 0xc), iVar1 == 1)))) {
    return 7;
  }
  return 0xffffffff;
}


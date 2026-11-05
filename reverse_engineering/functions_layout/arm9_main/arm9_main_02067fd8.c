
undefined4 FUN_02067fd8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x470 + (uint)*(byte *)(param_1 + 0xd13) * 0xc0;
  uVar1 = FUN_02067d8c();
  *(undefined1 *)(param_1 + 0xd0d) = uVar1;
  FUN_020517fc(param_1 + 0xcb8,0,0x52);
  iVar2 = FUN_02067c9c(param_1,*(undefined1 *)(param_1 + 0xd0d),param_1 + 0xcb8);
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0xd0b) = *(byte *)(param_1 + 0xd0b) & 0xf3;
    if (((int)(uint)*(ushort *)(iVar3 + 0x2c) >> 4 & 1U) == 1) {
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 3;
      return 9;
    }
  }
  else {
    *(byte *)(param_1 + 0xd0b) = *(byte *)(param_1 + 0xd0b) & 0xf3 | 4;
    if (((int)(uint)*(ushort *)(iVar3 + 0x2c) >> 4 & 1U) == 0) {
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 3;
      return 9;
    }
    if ((*(char *)(param_1 + 0xd0d) == '\x06') && (*(char *)(iVar3 + 0x15) == '\0')) {
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 3;
      return 9;
    }
  }
  *(undefined1 *)(param_1 + 0xd15) = 0;
  *(undefined1 *)(param_1 + 0xd14) = 0;
  return 8;
}


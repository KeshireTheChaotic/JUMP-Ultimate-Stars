
undefined4 FUN_02159358(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = param_3 * 0x4dc;
  iVar3 = param_2 + 0x20 + iVar4;
  if (param_3 == 0) {
    uVar1 = (byte)(&DAT_0215c5dc)[*(byte *)(param_1 + 6)] + 4 & 0xff;
  }
  else {
    uVar1 = param_1;
    if (param_3 == 1) {
      uVar1 = (byte)(&DAT_0215c5dc)[*(byte *)(param_1 + 6)] + 0xd & 0xff;
    }
  }
  if (*(byte *)(param_1 + 6) < 7) {
    (**(code **)(&DAT_0215c5ec + param_3 * 4))
              (uVar1,*(ushort *)(param_1 + 4) & 0xff,*(byte *)(param_1 + 7) & 0x1f,
               *(code **)(&DAT_0215c5ec + param_3 * 4),param_4);
    if ((*(byte *)(param_1 + 7) & 0x20) == 0) {
      *(undefined1 *)(iVar3 + 0x4c5) = 1;
      return 0;
    }
  }
  else {
    *(undefined2 *)(iVar3 + 0x4d6) = *(undefined2 *)(param_1 + 4);
    *(undefined *)(iVar3 + 0x4d8) = ((undefined *)0x215c5d4)[*(byte *)(param_1 + 8)];
    *(undefined *)(iVar3 + 0x4d9) = ((undefined *)0x215c5d8)[*(byte *)(param_1 + 8)];
    *(undefined1 *)(iVar3 + 0x4da) = *(undefined1 *)(param_1 + 9);
    uVar5 = *(undefined4 *)(iVar3 + 0x348);
    iVar2 = FUN_021594a4(uVar5);
    while (iVar2 != 0) {
      FUN_0214d678(iVar2,0);
      iVar2 = FUN_021594a4(uVar5);
    }
    FUN_02159eac(iVar3);
    if ((*(byte *)(param_1 + 7) & 0x20) == 0) {
      *(undefined1 *)(param_2 + iVar4 + 0x4f5) = 1;
      return 0;
    }
  }
  *(code **)(param_2 + iVar4 + 0x1dc) = FUN_021594c4;
  return 1;
}


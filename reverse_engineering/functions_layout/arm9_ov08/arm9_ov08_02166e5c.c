
void FUN_02166e5c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_20;
  undefined2 local_1e;
  
  uVar5 = (uint)((*(byte *)(DAT_0216e854 + 0x38) & 1) != 0);
  uVar6 = 0;
  iVar1 = FUN_02060c78();
  iVar4 = DAT_0216e854;
  *(undefined2 *)(DAT_0216e854 + 0x2c) = *(undefined2 *)(DAT_0216e854 + 0x28);
  *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(iVar4 + 0x2a);
  iVar4 = 0;
  while ((iVar3 = DAT_0216e854 + iVar1 * 8, *(short *)(iVar3 + 4) != 1 ||
         (*(short *)(iVar3 + 6) != 0))) {
    iVar4 = iVar4 + 1;
    iVar1 = FUN_02050750(iVar1 + 4,5);
    if (3 < iVar4) {
LAB_02166ec4:
      uVar2 = uVar6 ^ uVar5;
      *(byte *)(DAT_0216e854 + 0x38) =
           *(byte *)(DAT_0216e854 + 0x38) & 0xfd | (byte)((uVar6 & uVar2) << 1);
      *(byte *)(DAT_0216e854 + 0x38) =
           *(byte *)(DAT_0216e854 + 0x38) & 0xf7 | (byte)((uVar5 & uVar2) << 3);
      *(byte *)(DAT_0216e854 + 0x38) = *(byte *)(DAT_0216e854 + 0x38) & 0xfe | (byte)uVar6;
      *(byte *)(DAT_0216e854 + 0x38) =
           *(byte *)(DAT_0216e854 + 0x38) & 0xfb |
           (byte)(((*(byte *)(DAT_0216e854 + 0x38) & 3) >> 1) << 2);
      if (uVar6 == 0) {
        DAT_0216e850 = 0;
        return;
      }
      DAT_0216e850 = DAT_0216e850 + '\x01';
      if (DAT_0216e850 == '(') {
        *(byte *)(DAT_0216e854 + 0x38) = *(byte *)(DAT_0216e854 + 0x38) | 4;
        return;
      }
      if (DAT_0216e850 == '/') {
        *(byte *)(DAT_0216e854 + 0x38) = *(byte *)(DAT_0216e854 + 0x38) | 4;
        DAT_0216e850 = '(';
      }
      return;
    }
  }
  uVar6 = 1;
  FUN_02060a04(&local_20);
  FUN_021668a0(local_20,local_1e,DAT_0216e854 + 0x28);
  goto LAB_02166ec4;
}


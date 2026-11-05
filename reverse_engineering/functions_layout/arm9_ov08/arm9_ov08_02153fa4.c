
void FUN_02153fa4(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar2 = FUN_02050750(*(byte *)(DAT_0216e684 + 9) + 1,0x28);
  *(undefined1 *)(DAT_0216e684 + 9) = uVar2;
  iVar3 = FUN_020507a8(*(undefined1 *)(DAT_0216e684 + 9),5);
  FUN_02166014(0,iVar3 + 0x47,*(undefined4 *)(DAT_0216e684 + 4));
  *(ushort *)(*(int *)(DAT_0216e684 + 4) + 4) =
       *(ushort *)(*(int *)(DAT_0216e684 + 4) + 4) & 0xf3ff | 0x400;
  bVar1 = (&DAT_0216a410)[*(byte *)(DAT_0216e684 + 8)];
  puVar4 = *(uint **)(DAT_0216e684 + 4);
  *puVar4 = *puVar4 & 0xfffff3ff;
  *(ushort *)(puVar4 + 1) = (ushort)puVar4[1] & 0xfff | (ushort)bVar1 << 0xc;
  **(uint **)(DAT_0216e684 + 4) =
       (DAT_0216a414 & 0x1ff) << 0x10 |
       **(uint **)(DAT_0216e684 + 4) & 0xfe00ff00 | DAT_0216a416 & 0xff;
  return;
}


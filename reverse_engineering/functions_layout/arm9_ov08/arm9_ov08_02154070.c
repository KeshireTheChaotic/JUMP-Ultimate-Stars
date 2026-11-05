
void FUN_02154070(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  
  DAT_0216e684 = (undefined4 *)FUN_02166b8c(0xc,4);
  *(char *)(DAT_0216e684 + 2) = (char)param_1;
  uVar1 = FUN_02165ff4(0,0x47);
  DAT_0216e684[1] = uVar1;
  *(ushort *)(DAT_0216e684[1] + 4) = *(ushort *)(DAT_0216e684[1] + 4) & 0xf3ff | 0x400;
  puVar2 = (uint *)DAT_0216e684[1];
  *puVar2 = *puVar2 & 0xfffff3ff;
  *(ushort *)(puVar2 + 1) =
       (ushort)puVar2[1] & 0xfff | (ushort)(byte)(&DAT_0216a410)[param_1] << 0xc;
  *(uint *)DAT_0216e684[1] =
       (DAT_0216a414 & 0x1ff) << 0x10 | *(uint *)DAT_0216e684[1] & 0xfe00ff00 | DAT_0216a416 & 0xff;
  uVar1 = FUN_02167814(1,0x2153fa5,0,0x78);
  *DAT_0216e684 = uVar1;
  return;
}


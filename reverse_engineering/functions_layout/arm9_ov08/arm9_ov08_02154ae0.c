
void FUN_02154ae0(int param_1)

{
  int iVar1;
  
  if (DAT_0216e6d8 == (int *)0x0) {
    DAT_0216e6d8 = (int *)FUN_02166ba8(0xc,4);
    *(char *)(DAT_0216e6d8 + 2) = (char)param_1;
    iVar1 = FUN_02165ff4(0,(&DAT_0216a4ac)[param_1 * 4]);
    *DAT_0216e6d8 = iVar1;
    *(uint *)*DAT_0216e6d8 =
         (DAT_0216a4a8 & 0x1ff) << 0x10 | *(uint *)*DAT_0216e6d8 & 0xfe00ff00 | DAT_0216a4aa & 0xff;
    *(ushort *)(*DAT_0216e6d8 + 4) = *(ushort *)(*DAT_0216e6d8 + 4) & 0xf3ff | 0x800;
    iVar1 = FUN_02167814(0,&LAB_02154a20_1,0,0x78);
    DAT_0216e6d8[1] = iVar1;
  }
  return;
}


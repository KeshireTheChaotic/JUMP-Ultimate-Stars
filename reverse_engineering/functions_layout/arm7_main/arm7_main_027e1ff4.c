
void FUN_027e1ff4(void)

{
  int iVar1;
  uint uVar2;
  ushort *local_28 [2];
  
  iVar1 = DAT_027f97f0;
  while (FUN_037fcbcc(&DAT_027f8328,local_28,1), local_28[0] != (ushort *)0x0) {
    uVar2 = (uint)*local_28[0];
    if ((*local_28[0] & 0x8000) != 0) {
      uVar2 = uVar2 & 0xffff7fff;
    }
    if (uVar2 < 0x2e) {
      *(undefined4 *)(iVar1 + 4) = 1;
      *(ushort *)(iVar1 + 2) = (ushort)uVar2;
      (*(code *)(&PTR_FUN_027f7ba8)[uVar2])(local_28[0]);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    *local_28[0] = (ushort)uVar2 | 0x8000;
  }
  FUN_037fc640();
  return;
}


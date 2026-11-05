
/* WARNING: Removing unreachable block (ram,0x027e655c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e6528(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"WIRELESS":2,"IO_other":1} io=["04000006","048080f8","048080fa"]
                        */
  iVar1 = DAT_027f97f0;
  *(int *)(DAT_027f97f0 + 0xd0) = *(int *)(DAT_027f97f0 + 0xd0) << 6;
  uVar2 = (0x107 - (uint)_DAT_04000006) * 0x7f +
          (CONCAT22(_DAT_048080fa,_DAT_048080f8) & 0x3fffc0) * 2 >> 1 & 0x3fffc0;
  if (uVar2 < *(uint *)(iVar1 + 0xd0)) {
    *(undefined4 *)(iVar1 + 0xd8) = 0;
  }
  else {
    for (iVar3 = 1; iVar3 < 0x1e; iVar3 = iVar3 + 1) {
      *(int *)(iVar1 + 0xd0) = *(int *)(iVar1 + 0xd0) + 0x414b;
      if (uVar2 < *(uint *)(iVar1 + 0xd0)) {
        *(uint *)(iVar1 + 0xd8) = *(uint *)(iVar1 + 0xd0) - uVar2;
        if (*(uint *)(iVar1 + 0xd8) < 0x400f) {
          return;
        }
        *(undefined4 *)(iVar1 + 0xd8) = 0;
        return;
      }
    }
    *(undefined4 *)(iVar1 + 0xd8) = 0;
  }
  return;
}


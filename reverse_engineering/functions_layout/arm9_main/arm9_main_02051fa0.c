
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02051fa0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027fffb0","027fffb4"] */
  puVar3 = (uint *)&DAT_027fffb0;
  iVar2 = LZCOUNT(_DAT_027fffb0);
  if (iVar2 == 0x20) {
    puVar3 = (uint *)&DAT_027fffb4;
    iVar2 = LZCOUNT(_DAT_027fffb4);
    if (iVar2 == 0x20) {
      return -3;
    }
    iVar1 = 0x60;
  }
  else {
    iVar1 = 0x40;
  }
  *puVar3 = *puVar3 & ~(0x80000000U >> iVar2);
  return iVar1 + iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_037fbddc(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027fffb8","027fffbc"] */
  puVar4 = (uint *)&DAT_027fffb8;
  uVar3 = 0;
  uVar1 = 0x80000000;
  while (((_DAT_027fffb8 & uVar1) == 0 && (uVar3 = uVar3 + 1, uVar3 != 0x20))) {
    uVar1 = uVar1 >> 1;
  }
  if (uVar3 == 0x20) {
    puVar4 = (uint *)&DAT_027fffbc;
    uVar3 = 0;
    uVar1 = 0x80000000;
    while (((_DAT_027fffbc & uVar1) == 0 && (uVar3 = uVar3 + 1, uVar3 != 0x20))) {
      uVar1 = uVar1 >> 1;
    }
    if (uVar3 == 0x20) {
      return -3;
    }
    iVar2 = 0xa0;
  }
  else {
    iVar2 = 0x80;
  }
  *puVar4 = *puVar4 & ~(0x80000000U >> (uVar3 & 0xff));
  return iVar2 + uVar3;
}


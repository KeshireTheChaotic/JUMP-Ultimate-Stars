
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020586ac(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte local_10 [16];
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffc3c"] */
  pbVar1 = local_10;
  FUN_020554a8(local_10);
  iVar2 = 0;
  uVar3 = 0;
  do {
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + *pbVar1 & 0xffff;
    pbVar1 = pbVar1 + 1;
  } while (iVar2 < 6);
  return ((uVar3 + _DAT_027ffc3c & 0xffff) * 0xd0000 >> 0x10) % 10 + 0x1e;
}


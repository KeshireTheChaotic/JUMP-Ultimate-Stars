
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e981c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  uint local_28 [3];
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808000","04808184"] */
  iVar1 = _DAT_0380fff4;
  psVar4 = (short *)(_DAT_0380fff4 + 0x5f8);
  uVar5 = 0;
  local_28[1] = 0;
  do {
    FUN_027f5874(uVar5 * 2 + 0x44,2,local_28 + 1);
    *(short *)(&DAT_04808000 + (ushort)(&DAT_027f7d44)[uVar5]) = (short)local_28[1];
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  local_28[0] = *(ushort *)(iVar1 + 0x5fa) & 0x7f | (uint)(*(ushort *)(iVar1 + 0x5fa) >> 7) << 8;
  _DAT_04808184 = (undefined2)local_28[0];
  iVar3 = 0xce;
  iVar2 = FUN_038078c0((*(ushort *)(iVar1 + 0x5fa) & 0x7f) + 7,8);
  uVar5 = (uint)*(ushort *)(iVar1 + 0x5fc);
  if (*psVar4 == 3) {
    FUN_027f5874(uVar5 + 0xce,1,iVar1 + 0x600);
    for (uVar6 = 0; uVar6 < uVar5; uVar6 = uVar6 + 1) {
      local_28[0] = 0;
      FUN_027f5874(iVar3,1,local_28);
      local_28[0] = local_28[0] | uVar6 * 0x100 + 0x50000;
      FUN_027e9b38();
      iVar3 = iVar3 + 1;
    }
  }
  else {
    local_28[0] = 0;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_027f5874(iVar3,iVar2,local_28);
      FUN_027e9b38(local_28[0]);
      if ((*psVar4 == 2) && (local_28[0] >> 0x12 == 9)) {
        *(uint *)(iVar1 + 0x604) = local_28[0] & 0xffff83ff;
      }
      iVar3 = iVar3 + iVar2;
    }
  }
  return;
}


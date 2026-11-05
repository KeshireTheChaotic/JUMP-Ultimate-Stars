
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e96f8(uint param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_037fd998(_DAT_0380fff4 + 0x608);
  uVar1 = (uint)((ulonglong)param_1 * 0x82ea) >> 6 |
          (int)((ulonglong)param_1 * 0x82ea >> 0x20) << 0x1a;
  lVar2 = FUN_037fd6ac();
  lVar2 = lVar2 + (ulonglong)uVar1;
  FUN_037fda28(_DAT_0380fff4 + 0x608,(int)lVar2,(int)((ulonglong)lVar2 >> 0x20),uVar1,0,param_2,0);
  return;
}


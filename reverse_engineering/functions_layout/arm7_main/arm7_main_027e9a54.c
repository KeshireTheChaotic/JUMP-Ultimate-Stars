
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e9a54(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_0380fff4;
  iVar2 = _DAT_0380fff4 + 0x5f8;
  MIi_CpuClear16(0,iVar2,0x10);
  FUN_027f5874(0x40,1,iVar2);
  FUN_027f5874(0x41,1,iVar1 + 0x5fa);
  FUN_027f5874(0x42,1,iVar1 + 0x5fc);
  FUN_027f5874(0x43,1,iVar1 + 0x5fe);
  return;
}


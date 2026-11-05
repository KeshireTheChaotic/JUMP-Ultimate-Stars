
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027f0730(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(_DAT_0380fff4 + 0x1a0);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    if ((*(ushort *)(iVar2 + 0x24) == param_2) &&
       (iVar1 = FUN_027e9cfc(iVar2 + 0x28,param_1), iVar1 != 0)) break;
    iVar2 = FUN_037f8b44(iVar2);
  }
  return 1;
}


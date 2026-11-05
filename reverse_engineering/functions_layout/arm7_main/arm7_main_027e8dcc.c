
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e8dcc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_0380fff4;
  *(undefined4 *)(_DAT_0380fff4 + 0x17c) = *param_1;
  *(undefined4 *)(iVar1 + 0x180) = param_1[1];
  *(undefined4 *)(iVar1 + 0x184) = param_1[2];
  FUN_027e8eb0(iVar1 + 0x188,2);
  FUN_027e8eb0(iVar1 + 0x194,3);
  FUN_027e8eb0(iVar1 + 0x1a0,4);
  FUN_027e8eb0(iVar1 + 0x1ac,5);
  FUN_027e8eb0(iVar1 + 0x1b8,6);
  FUN_027e8eb0(iVar1 + 0x1c4,7);
  FUN_027e8eb0(iVar1 + 0x1d0,8);
  FUN_027e8eb0(iVar1 + 0x1dc,9);
  FUN_027e8eb0(iVar1 + 0x1e8,10);
  FUN_027e8eb0(iVar1 + 500,0xb);
  FUN_027e8eb0(iVar1 + 0x200,0xc);
  iVar2 = FUN_037f8910(iVar1 + 0x188,0x81);
  *(int *)(iVar1 + 0x3e0) = iVar2 + 0xc;
  *(undefined2 *)(iVar1 + 0x3e4) = 0;
  *(undefined2 *)(iVar1 + 1000) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f93b0(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":8}
                       io=["04808004","04808008","0480800a","04808012","048080ac","048080b4","048080e8","048080ea"]
                        */
  iVar1 = _DAT_0380fff4;
  FUN_027e96d4();
  FUN_027e9528();
  FUN_037f9468(0x20);
  *(undefined2 *)(iVar1 + 1000) = 0;
  *(undefined2 *)(iVar1 + 0x356) = 0;
  _DAT_04808012 = 0;
  _DAT_04808004 = 0;
  _DAT_048080ea = 0;
  _DAT_048080e8 = 0;
  _DAT_04808008 = 0;
  _DAT_0480800a = 0;
  if (*(short *)(iVar1 + 0x350) == 1) {
    FUN_027f1428();
  }
  _DAT_048080ac = 0xffff;
  _DAT_048080b4 = 0xffff;
  FUN_027f1664();
  FUN_027e8d70();
  return;
}


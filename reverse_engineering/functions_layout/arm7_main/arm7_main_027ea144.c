
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ea144(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808028","0480802a"] */
  iVar1 = _DAT_0380fff4;
  *(undefined2 *)(_DAT_0380fff4 + 0x3ae) = 0;
  FUN_037fb83c();
  _DAT_04808028 = 0;
  _DAT_0480802a = 0;
  if (*(short *)(iVar1 + 0x3cc) != 0) {
    FUN_027f17f8();
    FUN_027ec560(*(undefined2 *)(iVar1 + 0x3cc),0x20);
    *(undefined2 *)(iVar1 + 0x3cc) = 0;
  }
  return;
}


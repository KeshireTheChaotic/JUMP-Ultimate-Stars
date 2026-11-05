
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1450(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808080"] */
  iVar1 = _DAT_0380fff4;
  *(undefined2 *)(_DAT_0380fff4 + 0x4a4) = 1;
  _DAT_04808080 = (ushort)((*(uint *)(iVar1 + 0x4ac) & 0x3fff) >> 1) | 0x8000;
  return;
}


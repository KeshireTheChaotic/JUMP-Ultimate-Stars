
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203c4bc(int *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"GX_2D_main":1,"GX_2D_sub":1} io=["04000000","04001000"] */
  if ((1 < (uint)param_1[0x22f]) || ((char)param_1[0x25d] != '\0')) {
    iVar1 = (**(code **)(*param_1 + 0x7c))();
    if (iVar1 == 0) {
      _DAT_04001000 = _DAT_04001000 | 1 << (param_1[0x231] + 8U & 0xff);
    }
    else {
      _DAT_04000000 = _DAT_04000000 | 1 << (param_1[0x231] + 8U & 0xff);
    }
    *(undefined1 *)(param_1 + 0x255) = 1;
    if ((char)param_1[0x256] == '\x01') {
      *(undefined1 *)(param_1 + 0x256) = 2;
    }
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  iVar2 = param_1[0x231];
  if (iVar1 == 0) {
    _DAT_04001000 = _DAT_04001000 & ~(1 << (iVar2 + 8U & 0xff));
    return;
  }
  if (iVar2 == 0) {
    return;
  }
  _DAT_04000000 = _DAT_04000000 & ~(1 << (iVar2 + 8U & 0xff));
  return;
}


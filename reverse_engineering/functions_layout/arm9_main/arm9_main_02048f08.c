
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS VertexBuffer::vfunc_07 [class-virtual] slot 7 of vtable 0209b0c8 (own slot, not
   inherited) */

void VertexBuffer::vfunc_07(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* JUS-TAG hw={"GX_3D":2} io=["04000500","04000504"] */
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    _DAT_04000500 = 0;
    break;
  case 1:
    _DAT_04000500 = 2;
    break;
  case 2:
    _DAT_04000500 = 0;
    break;
  case 3:
    _DAT_04000500 = 2;
    break;
  case 4:
    break;
  case 5:
    _DAT_04000500 = 1;
    break;
  case 6:
    _DAT_04000500 = 3;
  }
  MI_SendGXCommand(3,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_4,param_4
                  );
  _DAT_04000504 = 0;
  return;
}


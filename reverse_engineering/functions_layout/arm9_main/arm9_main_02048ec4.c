
/* JUS-CLASS VertexBuffer::vfunc_03 [class-virtual] slot 3 of vtable 0209b0c8 (own slot, not
   inherited) */

void VertexBuffer::vfunc_03(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_02067278(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  if (*(uint *)(param_1 + 8) < 2) {
    FUN_020661ec(param_1 + 0x3c,0x40000,0x40000,0x1000);
    return;
  }
  return;
}


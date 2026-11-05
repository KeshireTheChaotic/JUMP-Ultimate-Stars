
/* JUS-CLASS VertexBuffer::vfunc_19 [class-virtual] slot 19 of vtable 0209b0c8 (own slot, not
   inherited) */

void VertexBuffer::vfunc_19(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_020671c8(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  DC_FlushRange(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x38));
  return;
}


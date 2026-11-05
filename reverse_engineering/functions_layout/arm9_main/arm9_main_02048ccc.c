
/* JUS-CLASS VertexBuffer::vfunc_02 [class-virtual] slot 2 of vtable 0209b0c8 (own slot, not
   inherited) */

undefined4 * VertexBuffer::vfunc_02(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  uVar2 = param_1[0xc];
  iVar1 = FUN_0201a9ec(uVar2);
  if (iVar1 == 0) {
    FUN_0201a958(uVar2,1);
  }
  jus_Class_0209b18c::jus_Class_0209b18c(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}



/* JUS-CLASS VertexBuffer::~VertexBuffer [class-instance-name] slot 0/1 of vtable 0209b0c8; resets
   vtables (destructor) */

undefined4 * VertexBuffer::~VertexBuffer(undefined4 *param_1)

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
  return param_1;
}


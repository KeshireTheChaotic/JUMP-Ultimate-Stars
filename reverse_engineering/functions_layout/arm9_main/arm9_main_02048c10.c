
/* JUS-CLASS VertexBuffer::VertexBuffer [class-instance-name] stores vtable 0209b0c8 into *this
   (constructor) */

int * VertexBuffer::VertexBuffer(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
                    /* JUS-TAG strings=["VertexBuffer"] */
  jus_Class_0209b18c::jus_Class_0209b18c(param_1,param_2,param_3,param_4 != 0,0,param_4);
  *param_1 = (int)&vftable;
  param_1[0x14] = param_4;
  param_1[0xd] = param_2 << 4;
  iVar1 = FUN_0201a228();
  param_1[0xc] = iVar1;
  FUN_0201ac08(iVar1,s_VertexBuffer_0209da74);
  (**(code **)(*param_1 + 0xc))();
  return param_1;
}


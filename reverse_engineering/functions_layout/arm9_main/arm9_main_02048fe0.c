
/* JUS-CLASS VertexBuffer::vfunc_17 [class-virtual] slot 17 of vtable 0209b0c8 (own slot, not
   inherited) */

void VertexBuffer::vfunc_17(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG strings=["VertexBuffer"] */
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x34) = param_2 << 4;
  uVar1 = jus_AllocDebug();
  FUN_0201ac08(uVar1,s_VertexBuffer_0209da74);
  FUN_02051890(*(undefined4 *)(param_1 + 0x30),uVar1,*(undefined4 *)(param_1 + 0x38));
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  iVar2 = FUN_0201a9ec(uVar3);
  if (iVar2 == 0) {
    FUN_0201a958(uVar3,1);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}


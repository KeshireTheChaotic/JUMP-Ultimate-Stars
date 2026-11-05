
/* JUS-CLASS jus_TagDLSE::jus_TagDLSE [class-type-tag] stores vtable 0209ad30 into *this
   (constructor) */

undefined4 * jus_TagDLSE::jus_TagDLSE(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  jus_Class_0209af58::jus_Class_0209af58();
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x38);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  iVar1 = (**(code **)(*(int *)param_1[0xb] + 0x68))((int *)param_1[0xb],param_1[0xc]);
  uVar2 = jus_AllocDebug(iVar1 + 1U & 0xfffffffe);
  param_1[0xd] = uVar2;
  uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x68))((int *)param_1[0xb],param_1[0xc]);
  FUN_02051890(*(undefined4 *)(param_2 + 0x34),param_1[0xd],uVar2);
  return param_1;
}


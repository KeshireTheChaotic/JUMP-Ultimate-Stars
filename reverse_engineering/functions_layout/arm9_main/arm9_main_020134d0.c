
/* JUS-CLASS jus_TagIPCT::jus_TagIPCT [class-type-tag] stores vtable 0209aea0 into *this
   (constructor) */

undefined4 * jus_TagIPCT::jus_TagIPCT(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  jus_TagDLSE_Part_0209af58::jus_TagDLSE_Part_0209af58();
  *param_1 = &vftable;
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
  iVar1 = (**(code **)(*(int *)param_1[0xb] + 0x68))((int *)param_1[0xb],param_1[0xc]);
  iVar1 = (((iVar1 + 1U >> 1) + 1 + (uint)(*(ushort *)(param_1[0x12] + 4) >> 1)) * 2 + 1) * 2;
  uVar2 = FUN_0201a228(iVar1);
  param_1[0xd] = uVar2;
  MIi_CpuCopy16(*(undefined4 *)(param_2 + 0x34),param_1[0xd],iVar1);
  return param_1;
}


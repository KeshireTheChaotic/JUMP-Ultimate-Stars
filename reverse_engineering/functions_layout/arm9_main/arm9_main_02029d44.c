
/* JUS-CLASS jus_Class_02094538::vfunc_05 [class-virtual] slot 5 of vtable 02094538 (own slot, not
   inherited) */

void jus_Class_02094538::vfunc_05(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(ushort *)(param_1 + 8) < *(ushort *)(param_2 + 8)) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    iVar2 = FUN_0201a9ec(uVar3);
    if (iVar2 == 0) {
      FUN_0201a958(uVar3,1);
    }
    uVar1 = *(ushort *)(param_2 + 8);
    *(ushort *)(param_1 + 8) = uVar1;
    uVar3 = jus_AllocDebug((uint)uVar1 << 1);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  MIi_CpuCopy16(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 0x10),
                (uint)*(ushort *)(param_2 + 8) << 1);
  FUN_02029dc4(param_1);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}


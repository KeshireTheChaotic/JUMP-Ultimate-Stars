
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_36 [class-virtual] slot 36 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_36(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  uVar3 = param_3 + 7;
  uVar1 = param_2 + 7U & 0xfffffff8;
  bVar4 = *(uint *)(param_1 + 0xfc) == uVar1;
  uVar2 = uVar3 & 0xfffffff8;
  if (bVar4) {
    uVar3 = *(uint *)(param_1 + 0x100);
  }
  if (bVar4 && uVar3 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = uVar1;
  *(uint *)(param_1 + 0x100) = uVar2;
  FUN_021c9b2c();
  return;
}


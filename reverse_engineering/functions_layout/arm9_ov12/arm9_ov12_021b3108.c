
/* JUS-CLASS ALMotionDynamic_021d2618::~ALMotionDynamic_021d2618 [class-source-file] slot 0/1 of
   vtable 021d2618; resets vtables (destructor) */

undefined4 *
ALMotionDynamic_021d2618::~ALMotionDynamic_021d2618
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  
                    /* JUS-TAG source_file_inferred="ALMotionDynamic.cpp" */
  *param_1 = &vftable;
  uStack_18 = param_4;
  FUN_021b276c(&local_24,param_1 + 0xe);
  local_1c = local_24;
  while (local_1c != param_1 + 0xf) {
    for (piVar1 = *(int **)local_1c[4]; FUN_021b2784(&local_30,local_1c[4]), piVar1 != local_30;
        piVar1 = piVar1 + 1) {
      FUN_021b2774(&local_28,*piVar1 + 0xc);
      local_20 = local_28;
      while( true ) {
        FUN_021b277c(&local_2c,*piVar1 + 0xc);
        if (local_20 == local_2c) break;
        uVar3 = *(undefined4 *)(local_20 + 0x10);
        iVar2 = FUN_0201a9ec(uVar3);
        if (iVar2 == 0) {
          FUN_0201a958(uVar3,1);
        }
        FUN_021b3700(&local_20);
      }
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_021b30ec(iVar2);
        FUN_0201b244(iVar2);
      }
    }
    iVar2 = local_1c[4];
    if (iVar2 != 0) {
      FUN_021afdb8(iVar2);
      FUN_0201b244(iVar2);
    }
    FUN_021b3700(&local_1c);
  }
  FUN_021b36c0(param_1 + 0xe);
  jus_Class_02094d7c::jus_Class_02094d7c(param_1);
  FUN_0201b244(param_1);
  return param_1;
}



/* JUS-CLASS ALCollision_021d1e28::ALCollision_021d1e28 [class-source-file] stores vtable 021d1e28
   into *this (constructor) */

undefined4 *
ALCollision_021d1e28::ALCollision_021d1e28
          (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  jus_Class_021d1be8::jus_Class_021d1be8(param_1,param_2,param_4,param_4,param_4);
  *param_1 = &vftable;
  param_1[0x1a] = *param_3;
  if (DAT_021d5120 == (int *)0x0) {
    iVar1 = thunk_FUN_0201a228(0x20,s_ALCollision_cpp_021d25e0,&DAT_021d1848,0x206);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)PropBindInstance_02095200::PropBindInstance_02095200(iVar1,DAT_021d5130);
    }
    DAT_021d5120 = piVar2;
    iVar1 = thunk_FUN_0201a228(0x14,s_ALCollision_cpp_021d25e0,&DAT_021d1848,0x207);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = ALCollision_021d213c::ALCollision_021d213c();
    }
    (**(code **)(*DAT_021d5120 + 0x3c))(DAT_021d5120,uVar3);
  }
  (**(code **)(*(int *)param_1[5] + 0xc))();
  piVar2 = DAT_021d5120;
  param_1[5] = DAT_021d5120;
  (**(code **)(*piVar2 + 8))();
  return param_1;
}


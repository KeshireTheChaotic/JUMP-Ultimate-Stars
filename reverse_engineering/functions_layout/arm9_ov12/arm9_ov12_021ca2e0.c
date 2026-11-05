
/* JUS-CLASS ALTextDS_021d49cc::ALTextDS_021d49cc [class-source-file] stores vtable 021d49cc into
   *this (constructor) */

undefined4 *
ALTextDS_021d49cc::ALTextDS_021d49cc
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  uVar1 = FUN_021c5fb4(0);
  ALText::ALText(param_1,uVar1);
  *param_1 = &vftable;
  iVar2 = FUN_021ca2a0(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_021ca2a0(param_1);
    (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  }
  iVar2 = thunk_FUN_0201a228(0x1b8,s_ALTextDS_cpp_021d4e30,&DAT_021d48e4,0x556);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = ALTextDS_021d4a2c::ALTextDS_021d4a2c
                      (iVar2,param_1[1],param_2,param_3,param_4,param_5,param_6);
  }
  FUN_0202201c(param_1[1],uVar1);
  return param_1;
}


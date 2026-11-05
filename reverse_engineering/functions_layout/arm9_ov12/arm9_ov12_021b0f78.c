
/* JUS-CLASS ALCollision_021d19e4::ALCollision_021d19e4 [class-source-file] stores vtable 021d19e4
   into *this (constructor) */

undefined4 *
ALCollision_021d19e4::ALCollision_021d19e4
          (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  uStack_18 = param_4;
  iVar1 = thunk_FUN_0201a228(0x6c,s_ALCollision_cpp_021d25e0,&DAT_021d1860,600);
  uVar2 = 0;
  if (iVar1 != 0) {
    uStack_18 = *param_3;
    uVar2 = ALCollision_021d1d40::ALCollision_021d1d40(iVar1,param_2,&uStack_18,param_4);
  }
  ALCollision_021d1a18::ALCollision_021d1a18(param_1,uVar2);
  *param_1 = &vftable;
  return param_1;
}


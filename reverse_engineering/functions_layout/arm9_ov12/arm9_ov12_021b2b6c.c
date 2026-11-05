
/* JUS-CLASS ALMotionDynamic_021d2618::ALMotionDynamic_021d2618 [class-source-file] stores vtable
   021d2618 into *this (constructor) */

undefined4 *
ALMotionDynamic_021d2618::ALMotionDynamic_021d2618
          (undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_40;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
                    /* JUS-TAG source_file_inferred="ALMotionDynamic.cpp" */
  jus_Class_02094d7c::jus_Class_02094d7c(param_1,0);
  *param_1 = &vftable;
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x30);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  FUN_021b2140(param_1 + 0xe);
  FUN_021b2898(&local_1c,param_2 + 0x38);
  while (local_1c != param_2 + 0x3c) {
    local_40 = thunk_FUN_0201a228(0xc,s_ALMotionDynamic_cpp_021d28a0,&DAT_021d27e8,0x20d);
    if (local_40 != 0) {
      local_40 = FUN_021b2d2c();
    }
    for (piVar7 = (int *)**(undefined4 **)(local_1c + 0x10);
        FUN_021b2784(&local_30,*(undefined4 *)(local_1c + 0x10)), piVar7 != local_30;
        piVar7 = piVar7 + 1) {
      iVar2 = thunk_FUN_0201a228(0x24,s_ALMotionDynamic_cpp_021d28a0,&DAT_021d27e8,0x210);
      puVar3 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)FUN_021b2b04();
      }
      *puVar3 = *(undefined4 *)*piVar7;
      local_20 = puVar3;
      uVar4 = (**(code **)(*(int *)*puVar3 + 0x68))((int *)*puVar3,*(undefined4 *)(*piVar7 + 4));
      local_20[8] = uVar4;
      iVar2 = (**(code **)(**(int **)(*piVar7 + 4) + 0x28))();
      if (iVar2 == 0) {
        local_20[1] = param_3;
      }
      else {
        piVar5 = *(int **)(*piVar7 + 4);
        piVar6 = (int *)(**(code **)(*piVar5 + 0xec))();
        uVar4 = (**(code **)(*piVar6 + 0xcc))(piVar6,piVar5);
        piVar5 = (int *)(**(code **)(*param_3 + 0xec))();
        uVar4 = (**(code **)(*piVar5 + 0xc0))(piVar5,uVar4);
        local_20[1] = uVar4;
      }
      local_20[2] = *(undefined4 *)(*piVar7 + 8);
      local_20[6] = *(undefined4 *)(*piVar7 + 0x18);
      if ((local_20[6] != 0) && (sVar1 = *(short *)(local_20[6] + 4), sVar1 != 0)) {
        uVar4 = thunk_FUN_0201a228(sVar1,s_ALMotionDynamic_cpp_021d28a0,&DAT_021d27e8,0x22a);
        local_20[7] = uVar4;
      }
      local_20[8] = *(undefined4 *)(*piVar7 + 0x20);
      FUN_021b2774(&local_28,*piVar7 + 0xc);
      local_24 = local_28;
      while( true ) {
        FUN_021b277c(&local_2c,*piVar7 + 0xc);
        if (local_24 == local_2c) break;
        uVar4 = FUN_021b2b18(*(undefined4 *)(*piVar7 + 0x20));
        FUN_02051890(*(undefined4 *)(local_24 + 0x10),uVar4,*(undefined4 *)(*piVar7 + 0x20));
        puVar3 = (undefined4 *)FUN_021b2d38(local_20 + 3,local_24 + 0xc);
        *puVar3 = uVar4;
        FUN_021b3700(&local_24);
      }
      FUN_021b2e18(local_40,&local_20);
    }
    piVar7 = (int *)FUN_021b2f50(param_1 + 0xe,local_1c + 0xc);
    *piVar7 = local_40;
    FUN_021b3700(&local_1c);
  }
  param_1[2] = *(undefined4 *)(param_2 + 8);
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_0203263c(param_1);
  }
  return param_1;
}


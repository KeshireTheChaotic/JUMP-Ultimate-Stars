
/* JUS-CLASS ALMotionDynamic_021d266c::ALMotionDynamic_021d266c [class-source-file] stores vtable
   021d266c into *this (constructor) */

int * ALMotionDynamic_021d266c::ALMotionDynamic_021d266c
                (int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_58;
  uint local_50;
  uint local_48;
  uint local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  jus_Class_0209cef8::jus_Class_0209cef8();
  *param_1 = (int)&vftable;
  param_1[0x12] = 0;
  iVar1 = jus_AllocDebug(0x44,s_ALMotionDynamic_cpp_021d28a0,&DAT_021d27e0,0x3c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = ALMotionDynamic_021d2618::ALMotionDynamic_021d2618();
  }
  param_1[0x11] = iVar2;
  iVar2 = (**(code **)(*param_3 + 0x20))();
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*param_3 + 0x14c))();
    piVar4 = (int *)(**(code **)(*param_3 + 0xd0))();
    uVar5 = (**(code **)(*piVar4 + 0x1c))();
    uVar6 = (**(code **)(*param_3 + 0x130))();
    for (local_24 = 0; local_24 < uVar5; local_24 = local_24 + 1) {
      if (local_24 != 0) {
        ALMotionDynamic::NewMotion(param_1);
      }
      (**(code **)(*param_3 + 0xd8))(param_3,local_24);
      for (local_28 = 0; local_28 < uVar6; local_28 = local_28 + 1) {
        uVar7 = (**(code **)(*param_3 + 0x11c))(param_3,local_28);
        for (local_48 = 0; local_48 < uVar7; local_48 = local_48 + 1) {
          piVar4 = (int *)(**(code **)(*param_3 + 0x124))(param_3,local_28,local_48,&local_18);
          if (piVar4 != (int *)0x0) {
            uVar8 = (**(code **)(*param_3 + 300))(param_3,local_28,local_48);
            (**(code **)(*piVar4 + 0x24))(piVar4,local_18,uVar8);
            FUN_021b2794(param_1,piVar4,0,local_18);
          }
        }
        uVar7 = (**(code **)(*param_3 + 0x120))(param_3,local_28);
        for (local_50 = 0; local_50 < uVar7; local_50 = local_50 + 1) {
          iVar2 = (**(code **)(*param_3 + 0x128))(param_3,local_28,local_50,&local_1c);
          if (iVar2 != 0) {
            for (local_58 = 0; uVar9 = (**(code **)(*param_3 + 0x98))(), local_58 <= uVar9;
                local_58 = local_58 + 1) {
              iVar1 = (**(code **)(*param_3 + 0x110))(param_3,iVar2,local_58,local_1c);
              if (iVar1 != 0) {
                local_20 = local_58 << 0xc;
                (**(code **)(*param_3 + 0xb8))(param_3,&local_20);
                (**(code **)(*param_3 + 0xcc))();
                FUN_021b2794(param_1,iVar2,local_58,local_1c);
              }
            }
          }
        }
      }
      uVar8 = (**(code **)(*param_3 + 0x98))();
      (**(code **)(*param_1 + 0x9c))(param_1,uVar8);
      piVar4 = (int *)(**(code **)(*param_3 + 0xd0))();
      uVar8 = (**(code **)(*piVar4 + 0x20))(piVar4,local_24);
      *(undefined4 *)(param_1[0x11] + 8) = uVar8;
      uVar8 = (**(code **)(*param_3 + 0xa8))();
      (**(code **)(*param_1 + 0xac))(param_1,uVar8);
      uVar8 = (**(code **)(*param_3 + 0xc0))();
      (**(code **)(*param_1 + 0xc4))(param_1,uVar8);
    }
    (**(code **)(*param_1 + 0xd8))(param_1,uVar3);
  }
  return param_1;
}


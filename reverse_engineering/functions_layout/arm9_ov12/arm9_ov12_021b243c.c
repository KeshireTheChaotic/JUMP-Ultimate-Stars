
/* JUS-CLASS ALMotionDynamic_021d266c::ALMotionDynamic_021d266c [class-source-file] stores vtable
   021d266c into *this (constructor) */

int * ALMotionDynamic_021d266c::ALMotionDynamic_021d266c
                (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *local_24;
  int *local_20;
  
  jus_Class_0209cef8::jus_Class_0209cef8();
  *param_1 = (int)&vftable;
  param_1[0x12] = 0;
  uVar1 = (**(code **)(**(int **)(param_2 + 0x44) + 0x1c))();
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  uVar5 = 0;
  if (uVar1 != 0) {
    for (; uVar5 < uVar1; uVar5 = uVar5 + 1) {
      iVar2 = thunk_FUN_0201a228(0x44,s_ALMotionDynamic_cpp_021d28a0,&DAT_021d27d8,0x86);
      piVar4 = (int *)0x0;
      if (iVar2 != 0) {
        uVar3 = (**(code **)(**(int **)(param_2 + 0x44) + 0x28))(*(int **)(param_2 + 0x44),uVar5);
        piVar4 = (int *)ALMotionDynamic_021d2618::ALMotionDynamic_021d2618(iVar2,uVar3,param_3);
      }
      if (local_20 == (int *)0x0) {
        param_1[0x11] = (int)piVar4;
        local_20 = piVar4;
      }
      else {
        FUN_0201b764(piVar4,local_20);
      }
      if (local_24 != (int *)0x0) {
        local_24[8] = (int)piVar4;
      }
      (**(code **)(*piVar4 + 0x48))(piVar4,uVar5);
      local_24 = piVar4;
    }
  }
  (**(code **)(*param_1 + 0xd4))(param_1,*(undefined2 *)((int)param_1 + 0x2a));
  param_1[0xe] = *(int *)(param_2 + 0x38);
  param_1[0xf] = *(int *)(param_2 + 0x3c);
  (**(code **)(*param_1 + 0xcc))();
  return param_1;
}


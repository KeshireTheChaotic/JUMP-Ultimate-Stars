
int * FUN_021b2f50(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_34 [4];
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  undefined4 uStack_18;
  
                    /* JUS-TAG source_file_inferred="ALMotionDynamic.cpp" */
  bVar1 = true;
  bVar2 = true;
  piVar3 = (int *)param_1[1];
  piVar5 = (int *)0x0;
  piVar6 = param_1 + 1;
  while (piVar4 = piVar3, piVar4 != (int *)0x0) {
    piVar6 = piVar4;
    if (*param_2 < (uint)piVar4[3]) {
      bVar1 = true;
      piVar3 = (int *)*piVar4;
    }
    else {
      bVar1 = false;
      bVar2 = false;
      piVar3 = (int *)piVar4[1];
      piVar5 = piVar4;
    }
  }
  if ((piVar5 == (int *)0x0) || ((uint)piVar5[3] < *param_2)) {
    local_20 = *param_2;
    local_1c = DAT_021d2608;
    uStack_18 = param_4;
    if (*param_1 == -1) {
      FUN_02003bd8(s_tree__insert_length_error_021d28b4);
      FUN_02001f18();
    }
    piVar5 = (int *)thunk_FUN_0201a228(0x14);
    if (piVar5 == (int *)0x0) {
      FUN_02003bd8(s_Memory_allocation_failure_021d2868);
      FUN_02001f18();
    }
    FUN_0200f69c(auStack_34,1);
    local_30 = param_1 + 1;
    if ((uint *)(piVar5 + 3) != (uint *)0x0) {
      piVar5[3] = local_20;
      piVar5[4] = local_1c;
    }
    local_2c = 0;
    piVar5[1] = 0;
    *piVar5 = 0;
    if (piVar5 + 2 != (int *)0x0) {
      piVar5[2] = (int)piVar6;
    }
    if (bVar1) {
      *piVar6 = (int)piVar5;
    }
    else {
      piVar6[1] = (int)piVar5;
    }
    *param_1 = *param_1 + 1;
    local_28 = piVar5;
    local_24 = piVar5;
    FUN_021b3750(piVar5,param_1[1]);
    if (bVar2) {
      param_1[2] = (int)piVar5;
    }
    FUN_021b3a90(&local_30);
  }
  return piVar5 + 4;
}


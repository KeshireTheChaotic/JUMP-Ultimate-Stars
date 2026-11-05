
int * FUN_021b33e8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  
                    /* JUS-TAG source_file_inferred="ALMotionDynamic.cpp" */
  local_18 = param_2;
  FUN_021b2730(&local_20,param_1 + 0x38,&local_18);
  if (local_20 != param_1 + 0x3c) {
    for (piVar2 = (int *)**(undefined4 **)(local_20 + 0x10);
        FUN_021b2784(&local_1c,*(undefined4 *)(local_20 + 0x10)), piVar2 != local_1c;
        piVar2 = piVar2 + 1) {
      piVar1 = (int *)*piVar2;
      if ((*piVar1 == param_3) && (piVar1[1] == param_4)) {
        return piVar1;
      }
    }
  }
  return (int *)0x0;
}


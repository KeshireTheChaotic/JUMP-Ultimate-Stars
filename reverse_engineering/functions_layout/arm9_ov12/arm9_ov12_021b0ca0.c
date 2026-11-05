
void FUN_021b0ca0(int param_1,int *param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  int local_20;
  int local_1c;
  int local_18;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  local_20 = *param_4;
  local_1c = *param_3;
  local_18 = *param_2;
  FUN_021b0ce8(param_1 + 0x5c,&local_18,&local_1c,&local_20);
  if (((*param_2 == 0) && (*param_3 == 0)) && (*param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  return;
}


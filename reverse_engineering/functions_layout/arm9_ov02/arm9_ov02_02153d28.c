
void FUN_02153d28(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  
  if (*param_1 != 0) {
    uStack_10 = param_4;
    (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x50) + 0x34))(auStack_14);
    local_18 = *param_2;
    FUN_02151858(*param_1,&local_18);
  }
  return;
}


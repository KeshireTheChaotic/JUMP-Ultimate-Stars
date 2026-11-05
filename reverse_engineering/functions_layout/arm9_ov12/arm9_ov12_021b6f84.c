
void FUN_021b6f84(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28[0] = '\0';
  if (param_1[0x3c] != 0) {
    local_1c = *param_3;
    local_18 = *param_2;
    uVar1 = FUN_021acab4();
    (*(code *)param_1[0x3c])(uVar1,&local_18,&local_1c,param_4,local_28);
  }
  if (local_28[0] == '\0') {
    local_24 = *param_3;
    local_20 = *param_2;
    (**(code **)(*param_1 + 0x134))(param_1,&local_20,&local_24,param_4);
  }
  return;
}


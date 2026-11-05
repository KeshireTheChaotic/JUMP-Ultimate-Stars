
void FUN_02153570(int *param_1)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(DAT_02172960 + 0x164) == 1) {
    (**(code **)(*param_1 + 8))();
  }
  else if (DAT_02172970 < 0x6b) {
    FUN_021536c4(&local_1c,param_1);
    local_18 = local_1c + -0x3000;
    FUN_021536a4(param_1,&local_18);
    FUN_021536c4(&local_20,param_1);
    if (local_20 < -0x48000) {
      FUN_021536c4(&local_28,param_1);
      local_24 = local_28 + 0x168000;
      FUN_021536a4(param_1,&local_24);
    }
  }
  else {
    FUN_0214f068(&local_10,param_1);
    local_c = local_10 + -0x3000;
    FUN_02153684(param_1,&local_c);
    FUN_0214f068(&local_14,param_1);
    if (local_14 < -0x8000) {
      (**(code **)(*param_1 + 8))();
    }
  }
  return;
}


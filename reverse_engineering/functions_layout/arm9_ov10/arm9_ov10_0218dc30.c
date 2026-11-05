
void FUN_0218dc30(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_02001ed8();
  if (*param_1 == -1) {
    return;
  }
  if ((param_1[0x2e] < 1) || (uVar1 - param_1[0x2b] < 0x2711)) {
    if ((param_1[0x2d] == 0) || (uVar1 - param_1[0x2b] < 0x2711)) {
      uVar2 = param_1[0x2b];
      if (((60000 < uVar1 - uVar2) || (uVar2 == 0)) || (uVar1 < uVar2)) {
        FUN_0218ce54(param_1,0);
      }
    }
    else {
      FUN_0218ce54(param_1,1);
    }
  }
  else {
    if (3 < param_1[0x2e]) {
      param_1[0x2e] = 0;
      (*(code *)param_1[0x27])(5,s_No_challenge_value_was_received_f_021a6910,param_1[0x43]);
      return;
    }
    FUN_0218ce54(param_1,3);
    param_1[0x2e] = param_1[0x2e] + 1;
  }
  if (20000 < uVar1 - param_1[0x2c]) {
    FUN_0218cff4(param_1);
  }
  return;
}


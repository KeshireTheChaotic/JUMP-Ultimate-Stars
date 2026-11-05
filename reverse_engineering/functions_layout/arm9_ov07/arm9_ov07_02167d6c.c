
undefined4 FUN_02167d6c(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[3] != '\0') {
    return 1;
  }
  uVar2 = (uint)(byte)param_1[2];
  do {
    if (3 < uVar2) {
      param_1[2] = '\x04';
      if ((param_1[1] == '\x0f') && (*param_1 = *param_1 + -1, '\0' < *param_1)) {
        FUN_02167e28(param_1);
      }
      return 0;
    }
    iVar1 = func_0x02176654(uVar2);
    if (iVar1 == 0) {
      param_1[1] = param_1[1] | (byte)(1 << uVar2);
    }
    else {
      iVar1 = FUN_02167d54(uVar2);
      if (iVar1 != 0) {
        param_1[2] = (char)uVar2 + '\x01';
        return 1;
      }
      param_1[1] = param_1[1] | (byte)(1 << uVar2);
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while( true );
}



void FUN_0205348c(uint *param_1,uint param_2)

{
  if (DAT_020aab5c == 0) {
    FUN_02053448(param_2);
    return;
  }
  FUN_02053984(param_1,FUN_02053448);
  param_1[1] = param_2;
  *param_1 = *param_1 | 0x80;
  param_1[0x19] = 1;
  OS_LoadContext(param_1);
  return;
}


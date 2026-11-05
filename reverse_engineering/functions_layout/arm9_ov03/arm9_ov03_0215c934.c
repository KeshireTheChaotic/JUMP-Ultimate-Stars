
void FUN_0215c934(undefined4 param_1,int param_2)

{
  undefined1 auStack_4c [32];
  undefined1 auStack_2c [32];
  
  FUN_020517fc(auStack_2c,0,0x20);
  FUN_020517fc(auStack_4c,0,0x20);
  thunk_FUN_0207400c(auStack_2c,s_Common_chr__0215ebfc);
  thunk_FUN_020741c4(auStack_2c,*(undefined4 *)(&DAT_020924b0 + param_2 * 8));
  thunk_FUN_0207400c(auStack_4c,auStack_2c);
  thunk_FUN_020741c4(auStack_2c,s_a_dig_0215ec08);
  thunk_FUN_020741c4(auStack_4c,s_va_atm_0215ec10);
  FUN_0215c9e8(param_1,3,8,0x8000,2,auStack_2c,auStack_4c);
  return;
}


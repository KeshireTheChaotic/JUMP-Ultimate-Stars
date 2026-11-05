
void FUN_02156d08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_020517fc(auStack_110,0,0x100);
  FUN_020517fc(auStack_210,0,0x100);
  thunk_FUN_0207400c(auStack_110,param_1);
  thunk_FUN_020741c4(auStack_110,&DAT_0215c5c4);
  thunk_FUN_0207400c(auStack_210,param_1);
  thunk_FUN_020741c4(auStack_210,&DAT_0215c5cc);
  FUN_02156d88(auStack_110,auStack_210,param_2);
  return;
}


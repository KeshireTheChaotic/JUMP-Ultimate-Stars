
void FUN_021c46b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  undefined4 uStack_10;
  
  uVar1 = *(undefined4 *)(&DAT_02092d08 + (uint)*(byte *)(param_1 + 0xa7) * 8);
  uStack_10 = param_4;
  thunk_FUN_0207400c(auStack_110,s_stage__021d4540);
  thunk_FUN_020741c4(auStack_110,uVar1);
  thunk_FUN_020741c4(auStack_110,&DAT_021d4574);
  thunk_FUN_0207400c(auStack_210,s_stage__021d4540);
  thunk_FUN_020741c4(auStack_210,uVar1);
  thunk_FUN_020741c4(auStack_210,&DAT_021d457c);
  uVar1 = FUN_021bd4d4(auStack_110,0,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_021bd4d4(auStack_210,0,0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}


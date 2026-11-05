
undefined4
FUN_020381e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  undefined4 uVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  FUN_02004b18(auStack_20,&DAT_0209da50);
  if (param_4 != 0) {
    uVar1 = FUN_020380d0(auStack_28,8,param_4);
    FUN_02004bcc(auStack_20,uVar1);
  }
  if (param_5 == '\0') {
    FUN_02004bcc(auStack_20,&DAT_0209da58);
  }
  else {
    FUN_02004bcc(auStack_20,&DAT_0209da54);
  }
  FUN_02003ce0(param_1,auStack_20,param_3);
  return param_1;
}


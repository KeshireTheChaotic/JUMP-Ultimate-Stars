
undefined4
FUN_0214d374(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined1 uVar1;
  undefined2 local_28 [2];
  undefined1 auStack_24 [8];
  int local_1c;
  
  uVar1 = FUN_0214d1d0(param_1,param_3);
  *param_4 = uVar1;
  local_1c = FUN_0214f2f8(param_3);
  if (local_1c == 0) {
    return 0xffffffff;
  }
  local_28[0] = FUN_0214cd34();
  FUN_0214cf10(param_5,local_28,2);
  FUN_0214cf10(&DAT_0216c208,param_5,2);
  FUN_0214cf10(&DAT_0216c20a,param_6,param_7);
  FUN_0214d274(auStack_24,&DAT_0216c208,param_7 + 2,param_3);
  FUN_0214d244(auStack_24,param_2,param_1,param_3);
  FUN_0214f2e4(local_1c);
  return 0;
}

